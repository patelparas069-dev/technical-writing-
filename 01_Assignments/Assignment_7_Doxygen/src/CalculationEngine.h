#ifndef CALCULATION_ENGINE_H
#define CALCULATION_ENGINE_H

#include "Logger.h"
#include <cmath>
#include <stdexcept>

/**
 * @file CalculationEngine.h
 * @brief Declares a small mathematical calculation class.
 */

/**
 * @class CalculationEngine
 * @brief Performs mathematical operations and reports them through Logger.
 *
 * @details This class demonstrates class-level Doxygen documentation,
 *          parameter documentation, return documentation and TODO notes.
 */
class CalculationEngine {
public:
    /**
     * @brief Constructs the calculation engine.
     * @param logger Logger instance used to report calculation messages.
     */
    explicit CalculationEngine(const Logger& logger)
        : logger_(logger) {}

    /**
     * @brief Calculates base raised to an integer exponent.
     * @param base Base value of the power operation.
     * @param exponent Integer exponent; may be positive, zero or negative.
     * @return The value of base raised to exponent.
     * @throws std::invalid_argument if base is zero and exponent is negative.
     *
     * @todo A future version could support a configurable precision policy.
     */
    double power(double base, int exponent) const {
        if (base == 0.0 && exponent < 0) {
            throw std::invalid_argument(
                "Zero cannot be raised to a negative exponent");
        }

        const double result = std::pow(base, exponent);
        logger_.log(LogLevel::Info, "Power calculation completed.");
        return result;
    }

private:
    const Logger& logger_;
};

#endif
