//Write a program that takes a 10 element array from the keyboard and writes it in reverse to the screen.

#include <stdio.h>
#include <stdlib.h>
#define size 10

int main()
{
	int array[size];
	int i, num;
	
	for (i = 0; i < 10; i++)
	{
		printf("Enter a Number: ");
		scanf("%d", &num);
		array[i] = num;
	} 
	
	for (i = 9; i >= 0; i--)
	{
		printf("%d\n", array[i]);
	}
	return 0;
	
	
	
	
	
	
}
