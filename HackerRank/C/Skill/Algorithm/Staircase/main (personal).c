#include <stdio.h>

void staircase(int n); // Function Prototype

int main(void)
{
	// Getting Important Stuff
	int height = 0; // Staircase Base/Height

	printf("Height/Base: ");
	scanf("%i", &height);

	// Printing Staircase
	staircase(height);
}

// Printing Function
void staircase(int n)
{
	for (int i = 0, spaces = n - 1, hs = 1; i < n; i++, spaces--, hs++)
	{
		for (int j = 0; j < spaces; j++)
		{
			printf(" "); // Printing Spaces
		}
		for (int j = 0; j < hs; j++)
		{
			printf("#"); // Printing Hashes
		}
		printf("\n");
	}
}