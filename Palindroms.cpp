// Palindroms.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<stdio.h>

int main()
{
	int n = 100;
	int* ptr = (int*)malloc(sizeof(int) * n);
	ptr[0] = getchar();
	int i = 1;
	for ( ; ptr[i - 1] != '\n'; i++)
	{
		ptr[i] = getchar();
	}
	int* second = (int*)malloc(sizeof(int) * n);
	for (int a = 0; a <= (i - 1); a++)
	{
		second[a] = ptr[i - 2 - a];
	}
	for (int k = 0; k <= i - 1; k++)
	{
		if (ptr[k] != second[k])
		{
			printf("\nNO");
			break;
		}
		else if(k = i - 1)
		{
			printf("\nYES");
		}
	}
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
