#include <stdlib.h>
#include <stdio.h>

int main() {
	FILE* inputfile = fopen("Data3.txt", "r");
	int counter[12];
	int gamma = 0;
	int epsilon = 0;
	int result = 0;
	for(int i  = 0; i < 12; i++)
	{
		counter[i] = 0;
	}
	if (inputfile == NULL) {
		exit(1);
	}
	char array[20];
	while (fgets(array, 20, inputfile) != NULL) {
		for (int i = 0; i < 12; i++) {
			if (array[i] > 48) {
				counter[i]++;
			}
		}
	}
	for (int j = 0; j < 12; j++) {
		printf("Wartosc dla rekordu %d: %d\n",j+1, counter[j]);
	}
	for (int n = 0; n < 12; n++) {
		if (counter[n] > 500) {
			gamma += 1 << (11 - n );
		}
		else {
			epsilon += 1 << (11 - n);
		}
	}
	printf("%d\n", gamma);
	printf("%d\n", epsilon);
	result = gamma * epsilon;
	printf("%d", result); // thats correct with the result being 3985686 :) 
	
}
//1000 records
//https://adventofcode.com/2021/day/3