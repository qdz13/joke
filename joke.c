#include <stdio.h>

int main(void) {

	const char *text = "It is a joke program!";
	printf("%c%c%c%c\n", 8??(text??), 9??(text??), 10??(text??), 11??(text??));

	return 0;
}
