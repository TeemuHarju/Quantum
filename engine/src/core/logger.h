#include <iostream>
#include <cassert>
#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"

class Logger {
public:
    static void initialize();

	static std::shared_ptr<spdlog::logger>& get_logger() { return console_logger; }

private:
    static inline std::shared_ptr<spdlog::logger> console_logger = nullptr;
};

#define LOG_CRITICAL(...) Logger::get_logger()->critical(__VA_ARGS__)
#define LOG_ERROR(...)    Logger::get_logger()->error(__VA_ARGS__)
#define LOG_WARN(...)     Logger::get_logger()->warn(__VA_ARGS__)
#define LOG_INFO(...)     Logger::get_logger()->info(__VA_ARGS__)
#define LOG_DEBUG(...)    Logger::get_logger()->debug(__VA_ARGS__)
#define LOG_TRACE(...)    Logger::get_logger()->trace(__VA_ARGS__)

#define ENGINE_ASSERT(condition, message) \
    if (!(condition)) { \
        if (Logger::get_logger()) { \
            LOG_CRITICAL("Assertion failed at {}:{} - {}", __FILE__, __LINE__, message); \
        } \
        assert(condition && message); \
    }