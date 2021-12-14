#include <stdlib.h>
#include <stdio.h>

int main() {
	FILE* input_file1 = fopen("Data4_1.txt", "r"); //100 input data
	FILE* input_file2 = fopen("Data4_2.txt", "r");


	char data[100];
	int input_data[100];
	char character;
	while (fgets(data, 2, input_file1) != EOF) {
		for (int i = 0; i < 100; i++) {
			input_data[i] =data;
			printf("%d\n", input_data[i]);
			}
	}
}