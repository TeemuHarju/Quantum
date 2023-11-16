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
		Fatal
	};

	void Initialize();
	void Shutdown();

	static void Log(LogLevel level, const char* message);

private:
};


#define QFALTAL(message)	Logger::Log(Logger::LogLevel::Fatal, message );