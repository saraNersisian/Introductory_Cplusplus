#include "pch.h"
#include <iostream>
using namespace std;

void Fib_general(int F[], int fib_num)
{
	
	F[0] = 0;
	F[1] = 1;

	cout << "\n "<<F[0] << ", " << F[1]<<", ";

	for (int i = 2; i < fib_num; i++)
	{
		F[i] = F[i - 1] + F[i - 2];
		cout << F[i]<<", ";
	}

}

int main()
{
	int fib_num;
	cout << "\n Where you want to stop the Fiboacci sequence? (enter an integer number) ";
	cin >> fib_num;
	

	int *F = new int[fib_num];
	
	
	Fib_general(F, fib_num);

	return 0;
}

