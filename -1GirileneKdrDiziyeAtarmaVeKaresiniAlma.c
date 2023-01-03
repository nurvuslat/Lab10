//Write a program that transfers the numbers given until -1 entered from the keyboard, and then prints the square of each elements to the screen.  

#include <stdio.h>
#include <stdlib.h>
#define size 10


int main(void) {

  	int numbers[size];
  	int count = 0;
	int i, j, number, square;
  	printf("Enter numbers (-1 to stop):\n");
  	
	while (1) 
	{
    	scanf("%d", &number);

    	if (number == -1) 
		{
      		break;
    	}
    	numbers[count] = number;
    	count++;
    	j++;
    	
    	if(j == 10)
    	{
    		break;
		}
  	}

  	printf("Squares:\n");
  
  	for (i = 0; i < count; i++) 
	{
    	square = numbers[i] * numbers[i];
    	printf("%d\n", square);
  	}
  	
  	return 0;
}

