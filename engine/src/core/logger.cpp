#include "logger.h"

#include "spdlog/sinks/stdout_color_sinks.h"

#include <memory>
#include <cstdarg>

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

std::shared_ptr<spdlog::logger> Logger::GetLogger()
{
	return spdlog::get("QuantumEngine");
}

void Logger::Log(LogLevel level, const char* message, ...)
{
	// Check that we have logger.
	auto logger = GetLogger();
	if (logger != nullptr)
	{
		va_list args;
		va_start(args, message);

		// Log the message based on level.
		switch (level)
		{
		case LogLevel::Trace:
			logger->trace(message, args);
			break;
		case LogLevel::Debug:
			logger->debug(message, args);
			break;
		case LogLevel::Info:
			logger->info(message, args);
			break;
		case LogLevel::Warning:
			logger->warn(message, args);
			break;
		case LogLevel::Error:
			logger->error(message, args);
			break;
		case LogLevel::Critical:
			logger->critical(message, args);
			break;
		}

		va_end(args);
	}
}
