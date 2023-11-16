#include "logger.h"

#include "spdlog/sinks/stdout_color_sinks.h"

#include <memory>

void Logger::Initialize()
{
	auto consoleSink = std::make_shared<spdlog::sinks::stderr_color_sink_mt>();
	consoleSink->set_pattern("%+");

	std::vector<spdlog::sink_ptr> sinks{ consoleSink };
	auto logger = std::make_shared<spdlog::logger>("QuantumEngine", sinks.begin(), sinks.end());

	logger->set_level(spdlog::level::trace);
	logger->flush_on(spdlog::level::trace);

	spdlog::register_logger(logger);
}

void Logger::Shutdown()
{
	spdlog::shutdown();
}

void Logger::Log(LogLevel level, const char* message)
{	
	if (level == LogLevel::Fatal) {

		spdlog::get("QuantumEngine")->critical(message);
	}
}
