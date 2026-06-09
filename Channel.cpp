#pragma once
#include "Channel.h" // This fixes the "niekompletny typ" error!
#include <string>
#include <vector>

// 1. Implementation of run()
template <typename T, int N>
size_t Channel<T, N>::run(std::vector<double>& inputs) {
    return adc.read_input(inputs);
}

// 2. Implementation of get_values()
template <typename T, int N>
std::vector<double> Channel<T, N>::get_values() {
    return adc.values();
}

// 3. Implementation of to_string()
template <typename T, int N>
std::string Channel<T, N>::to_string() {
    return "Channel -> " + adc.to_string();
}
