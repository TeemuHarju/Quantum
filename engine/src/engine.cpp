#include "engine.h"
#include <iostream>
#include "spdlog/spdlog.h"

Engine::Engine() {
	std::cout << "Engine constructor\n";
}

Engine::~Engine() {
	std::cout << "Engine destructor\n";
}

void Engine::initialize() {
	std::cout << "Engine initialized\n";
}

void Engine::update() {
	std::cout << "Engine updated\n";
}

void Engine::shutdown() {
	std::cout << "Engine shutdown\n";
}

void Engine::test()
{
	spdlog::critical("Support for int: {0:d};  hex: {0:x};  oct: {0:o}; bin: {0:b}", 42);
}
