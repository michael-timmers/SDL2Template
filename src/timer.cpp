#include <chrono>

#include "timer.hpp"

void Timer::start() {
    first = std::chrono::high_resolution_clock::now();
}

void Timer::stop() {
    last = std::chrono::high_resolution_clock::now();
}

std::chrono::nanoseconds Timer::result() {
    return std::chrono::duration_cast<std::chrono::nanoseconds>(last - first);
}