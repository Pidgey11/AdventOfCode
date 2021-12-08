#include<stdlib.h>
#include<stdio.h>
/*
int main() {
	
	FILE* inputfile;
	inputfile = fopen("Data.txt", "r");
	if (inputfile == NULL) {
		exit(1);
	}
	int numberArray[2000];
	int i;
	int counter = 0;

	for (i = 0; i < 2000; i++)
	{
		fscanf(inputfile, "%d", &numberArray[i]);
		if (numberArray[i] > numberArray[i-1]) {
			counter++;
		}
	}
	printf("The number increased: %d", counter-1);

	fclose(inputfile);
}
//correct outcome
*/
