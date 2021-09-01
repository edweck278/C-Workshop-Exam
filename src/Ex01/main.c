#include <stdio.h>
#include <stdlib.h>
#include "greeting.h"

int main(int argc, char** argv) {
	char* message = greeting();
	printf("%s", message);
	free(message);
	return 0;
}
