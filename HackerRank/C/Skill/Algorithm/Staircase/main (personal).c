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
	for (int i = 0; i < n; i++)
	{
		for (int j = n - 1 - i; j >= 1; j--)
		{
			printf(" "); // Printing Spaces
		}
		for (int j = 1; j < i + 2; j++)
		{
			printf("#"); // Printing Hashes
		}
		printf("\n");
	}
}