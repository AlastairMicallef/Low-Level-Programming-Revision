#include<stdio.h>

int main(void) {


	char ASCII = 'b';

	printf("Please enter a character. \n");
	scanf_s("%c", &ASCII);
	printf("The code for %c is %c", ASCII, &ASCII);
	getchar();
	getchar();

}