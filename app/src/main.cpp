#include "../src/engine.h"

int main() {
	Engine engine;

	engine.initialize();
	engine.update();
	engine.shutdown();
	engine.test();

	return 0;
}