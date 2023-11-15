#include "engine.h"
#include <iostream>
#include <fmt/format.h>

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
	uint16_t test = 32;
}
