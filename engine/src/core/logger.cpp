#include "logger.h"

void Logger::initialize() {
	spdlog::set_pattern("[%H:%M:%S.%e] [%^%L%$] [thread %t] [%s:%#] %v");
	console_logger = spdlog::stdout_color_mt("console");
	console_logger->set_level(spdlog::level::trace);
}