#ifndef LOGGER_H
#define LOGGER_H

#include <iostream>
#include <string>

/**
 * @file Logger.h
 * @brief Declares a small threshold-based logging utility.
 */

/**
 * @enum LogLevel
 * @brief Severity level for a log message.
 */
enum class LogLevel {
    Debug,   /**< Detailed diagnostic information. */
    Info,    /**< Normal application information. */
    Warning, /**< A recoverable warning. */
    Error    /**< An error that needs attention. */
};

/**
 * @class Logger
 * @brief Prints messages whose severity meets a configured threshold.
 *
 * @details The logger is intentionally small so that the Doxygen
 *          documentation syntax can be demonstrated clearly.
 */
class Logger {
public:
    /**
     * @brief Constructs a Logger.
     * @param threshold Minimum severity level that should be printed.
     */
    explicit Logger(LogLevel threshold = LogLevel::Info)
        : threshold_(threshold) {}

    /**
     * @brief Writes one message to standard output.
     * @param level Severity of the current message.
     * @param message Text to print.
     * @return void
     */
    void log(LogLevel level, const std::string& message) const {
        if (static_cast<int>(level) < static_cast<int>(threshold_)) {
            return;
        }
        std::cout << '[' << name(level) << "] " << message << '\n';
    }

private:
    LogLevel threshold_;

    /**
     * @brief Converts a severity enum to a printable string.
     * @param level Severity level.
     * @return Name of the severity.
     */
    static const char* name(LogLevel level) {
        switch (level) {
            case LogLevel::Debug:   return "DEBUG";
            case LogLevel::Info:    return "INFO";
            case LogLevel::Warning: return "WARNING";
            case LogLevel::Error:   return "ERROR";
        }
        return "UNKNOWN";
    }
};

#endif
