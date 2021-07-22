/* Program to take user input in order to create a file that 
	can easily be formatted in to long python lists*/

#include <stdio.h>

void create_list(int x, char y[]);

int main(int argc, char *argv[]){

	char list_name[50];
	int list_lines;

	printf("Enter list variable name: ");
	/* you don't need to add & when taking string input from a user*/
	scanf("%s", list_name);

	printf("Enter number of list items: ");
	scanf("%d", &list_lines);

	create_list(list_lines, list_name);

	return 0;
}

void create_list(int x, char y[]) {

	FILE * fpointer = fopen("hello.txt", "a");

	for (int i = 1; i <= x; ++i) {
		fprintf(fpointer, "%s\n", y);
	}

	fclose(fpointer);
}