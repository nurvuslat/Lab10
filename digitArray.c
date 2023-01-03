//Write a program thatassign the digits of the maximum 5 digits number to an array and prints it to the screen.

#include <stdio.h>
#define size 5

int main(void) 
{
  	int digits[5];
	int i, num, temp;

	printf("Enter a Number: ");
	scanf("%d", &num);

  	temp = num;
  	
	for (i = 0; i < 5; i++) 
	{
    	digits[i] = temp % 10;
    	temp /= 10;
  	}

  	for (i = 0; i < 5; i++) 
	{
    	printf("digit [%d] = %d\n ", i,digits[i]);
  	}

  	return 0;
}

	
