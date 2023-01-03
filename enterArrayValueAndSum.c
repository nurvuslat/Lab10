//Enter a value from the keyboard to the 8 element float array. Calculate the average of the entered values and print it on the screen.

#include <stdio.h>
#define size 8

int main(void)
{
	float array[size];
	float sum, result;
	int i;
	
	for(i=0; i<8; i++)
	{
		printf("Enter 8 number: ");
		scanf("%f", &array[i]);
		sum += array[i];
	}
		result = sum / 8;
		printf("Sum: %.2f", result);
	
	return 0;
	
}
