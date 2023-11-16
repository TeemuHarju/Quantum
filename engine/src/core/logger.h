#pragma once

#include "defines.h"
#include "spdlog/spdlog.h"

class ENGINE_API Logger
{
public:
	Logger() = default;
	~Logger() = default;

	enum class LogLevel
	{
		Trace,
		Debug,
		Info,
		Warning,
		Error,
		Critical
	};

	void Initialize();
	void Shutdown();

	static void Log(LogLevel level, const char* message, ...);

private:
	static std::shared_ptr<spdlog::logger> GetLogger();
};


#define QCRITICAL(message, ...)	Logger::Log(Logger::LogLevel::Critical, message, __VA_ARGS__ );
#define QERROR(message, ...)	Logger::Log(Logger::LogLevel::Error, message, __VA_ARGS__ );
#define QWARN(message, ...)		Logger::Log(Logger::LogLevel::Warning, message, __VA_ARGS__ );
#define QINFO(message, ...)		Logger::Log(Logger::LogLevel::Info, message, __VA_ARGS__ );
#define QDEBUG(message, ...)	Logger::Log(Logger::LogLevel::Debug, message, __VA_ARGS__ );
#define QTRACE(message, ...)	Logger::Log(Logger::LogLevel::Trace, message, __VA_ARGS__ );