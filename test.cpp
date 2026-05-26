#include <gtest/gtest.h>
#include "Channel.h"
#include "Channel.cpp" // Keep this here so the templates compile together perfectly

struct ChannelFixture : public ::testing::Test {
    ChannelFixture() {}
    ~ChannelFixture() override {}
    void SetUp() override {}
    void TearDown() override {}

    // Test data fields
    std::vector<double> inputs { 1., 2., 3., 4., 1.5, 1.99, 2.5, 3.5, 4.5, 4.99 };
    int bits { 16 };
    std::chrono::milliseconds clock_rate { 100 };
    double rangeMin { -5. }, rangeMax { 5. };
    double sensitivity { 1. }, trigger_level { 2. };
    
    // 1. Create the ADC object first
    ADC<short, 4> adc { 16, std::chrono::milliseconds(100), -5., 5., 1., 2. };
    
    // 2. FIXED: Pass 'adc' directly by reference instead of using std::move()
    Channel<short, 4> channel { adc };
};

// =========================================================================
// 6. UNIT TESTS FOR CHANNEL CLASS
// =========================================================================

TEST_F(ChannelFixture, Initialization) {
    EXPECT_EQ(bits, channel.get_adc().bits);
    EXPECT_EQ(rangeMin, channel.get_adc().rangeMin);
    EXPECT_EQ(rangeMax, channel.get_adc().rangeMax);
    EXPECT_EQ(sensitivity, channel.get_adc().sensitivity);
    EXPECT_EQ(trigger_level, channel.get_adc().trigger_level);
}

TEST_F(ChannelFixture, ChannelRunMethod) {
    size_t processed = channel.run(inputs);
    EXPECT_LE(processed, 4); 
}

TEST_F(ChannelFixture, ChannelGetValuesMethod) {
    channel.run(inputs);
    std::vector<double> values = channel.get_values();
    EXPECT_EQ(values.size(), channel.get_adc().samples.size());
}

TEST_F(ChannelFixture, ChannelToStringMethod) {
    std::string str = channel.to_string();
    EXPECT_FALSE(str.empty());
}

// =========================================================================
// 7. UNIT TESTS FOR ADC CLASS
// =========================================================================

TEST_F(ChannelFixture, AdcConvertMethod) {
    auto mid_val = channel.get_adc().convert(0.0);
    EXPECT_GE(mid_val, -32768); 
    EXPECT_LE(mid_val, 32767);
}

TEST_F(ChannelFixture, AdcReadInputMethod) {
    auto& target_adc = channel.get_adc();
    size_t triggered = target_adc.read_input(inputs);
    EXPECT_EQ(triggered, target_adc.samples.size());
}

TEST_F(ChannelFixture, AdcValueMethod) {
    channel.run(inputs);
    auto& target_adc = channel.get_adc();
    if (!target_adc.samples.empty()) {
        double real_val = target_adc.value(0);
        EXPECT_GE(real_val, -5.0);
        EXPECT_LE(real_val, 5.0);
    }
}