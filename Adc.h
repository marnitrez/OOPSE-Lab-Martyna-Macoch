#pragma once
#include <string>
#include <chrono>
#include <vector>

template <typename T=short, int N=1024>
struct ADC {
    int bits;                             // number of bits of the ADC
    std::chrono::milliseconds clock_rate; // clock rate in ms
    double rangeMin, rangeMax;            // range of the ADC in volts
    double sensitivity;                   // sensitivity in unit/volts
    double trigger_level;                 // trigger level in volts
    std::vector<T> samples;

    // Fixed Constructor matching your exact fixture parameters
    ADC(int b, std::chrono::milliseconds crate, double rMin, double rMax, double sens, double trig)
        : bits(b), clock_rate(crate), rangeMin(rMin), rangeMax(rMax), sensitivity(sens), trigger_level(trig) {}

    // Default Constructor 
    ADC() : bits(16), clock_rate(100), rangeMin(-5.0), rangeMax(5.0), sensitivity(1.0), trigger_level(2.0) {}

public:
    // 1. convert the input voltage to the corresponding ADC value
    T convert(double voltage) {
        return static_cast<T>(0);
    }

    // 2. read input values and if any of them is above the trigger_level, append to 'samples'
    size_t read_input(std::vector<double>& inputs) {
        // Mock implementation: just return 0 for now to keep tests safe
        return 0;
    }

    // 3. evaluate the sample true value of the measured quantity
    double value(size_t i) {
        return 0.0;
    }

    // 4. evaluate true values for all collected samples
    std::vector<double> values() {
        return std::vector<double>();
    }

    // 5. generate string representing the ADC data
    std::string to_string() {
        return "Mock ADC Data";
    }
};