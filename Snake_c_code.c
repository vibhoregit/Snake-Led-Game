#include<stdio.h>



char LED_matrix[16][16] = {0};
char lost = 0;				// This flag is set one if the player looses
			
void update()				// This function will update the matrix based on the
{							// direction the snake is moving. It should also check
							// snake eating itself. and increment the length when 
							// snake eats food. Also it should place new food whenever
							// snake eats food.
}

void initiate()				// This function initiates the LED_matrix array to a  
{							// snake of length 3 and set the default direction of 
							// movement.
}

void main()
{
	while(1)
	{
		initiate();
		while(lost != 1)
			update();
			//some delay functions
	}
	
}