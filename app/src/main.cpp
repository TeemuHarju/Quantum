#include <core/logger.h>
#include "assert.h"

int main() {

	Logger logger;

	logger.Initialize();

	assert(false);

	QCRITICAL("Test critical");
	QERROR("Test error");
	QWARN("Test warn");
	QINFO("Test info");
	QDEBUG("Test debug");
	QTRACE("Test trace");

	return 0;
}