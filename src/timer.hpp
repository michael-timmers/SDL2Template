#pragma once

#include <chrono>

class Timer {
    std::chrono::time_point<std::chrono::high_resolution_clock, std::chrono::nanoseconds> first;
    std::chrono::time_point<std::chrono::high_resolution_clock, std::chrono::nanoseconds> last;

   public:
    void start();
    void stop();
    std::chrono::nanoseconds result();
};