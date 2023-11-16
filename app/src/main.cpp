#include "core/logger.h"

int main() {

	Logger logger;

	logger.Initialize();

	QFALTAL("Test");

	return 0;
}