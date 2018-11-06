#include <iostream>


int main()
{	//TODO: #1.2 call your fib function, print the result
	fib(5);

	//TODO: #2.2 call your fact function, print the result
	fact(500);
	return 0;
}



//TODO #2.3: add your recursive fib function from class
int fib(int n)
{
	if (n <= 1)
	{
		return n;
	}
	else
	{
		return fib(n - 1) + return fib(n - 2)
	}
}


//TODO #2.4: add your recursive fact function from class
int fact(int n)
{
	cout << fib(n) << endl;
	return n * 2;
}
