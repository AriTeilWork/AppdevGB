#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int rows;
	printf("Welcome to Pascal\n"); 
	printf("Enter the number of rows of Pascal Triangle: ");
	scanf("%d", &rows);
	pascal_triangle(rows);
}