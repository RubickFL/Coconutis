#include <stdlib.h>

#include "errors/str.h"
#include "errors/signal.h"


int main() {
	errors::signal::success();
	errors::str::perror();

	errors::signal::cant_run_vm();
	errors::str::perror();

	printf("%s\n", errors::str::error_str());

	errors::signal::critical("Test");
}
