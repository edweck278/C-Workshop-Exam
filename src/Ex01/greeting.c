#include "greeting.h"
#include <stdlib.h>
#include <string.h>

char* greeting() {
	char message[] = "Hello, world!\n";
	char* result = malloc(sizeof(message));
	strcpy(result, message);
	return result;
}
