#include "engine.h"
#include <iostream>

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
	std::cout << "Engine test\n";
}
