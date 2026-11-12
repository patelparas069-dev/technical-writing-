#include "CalculationEngine.h"
#include "Logger.h"
#include <iostream>

/// @file main.cpp
/// @brief Entry point for the calculation demonstration.
/// @mainpage Doxygen Calculation Demo
/// This small project demonstrates documenting a multi-file C++ program.

int main() {
    Logger logger(LogLevel::Debug);
    CalculationEngine engine(logger);

    try {
        const double result = engine.power(2.0, 5);
        std::cout << "2^5 = " << result << '\n';
    } catch (const std::exception& error) {
        logger.log(LogLevel::Error, error.what());
        return 1;
    }

    return 0;
}
