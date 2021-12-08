#include <stdlib.h>
#include <stdio.h>

int main() {
	int horizontal = 0;
	int depth = 0;

	FILE* inputfile;
	inputfile = fopen("Data2.txt", "r");
	if (inputfile == NULL) {
		exit(1);
	}
	char array[15];
	while (fgets(array, 15, inputfile) != NULL) {
		if (array[0] == 'f') {
			horizontal += array[8] - 48;
		}
		else if (array[0] == 'u') {
			depth -= array[3] - 48;
		}
		else if (array[0] == 'd') {
			depth += array[5] - 48;
		}
		fflush(stdout);
	}
	printf("%d\n", horizontal);
	printf("%d\n", depth);
	int multiply = horizontal * depth;
	printf("%d\n", multiply);
}
//correct outcome 
