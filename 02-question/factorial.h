//SAMPLE FUNCTION - DON'T CHANGE
int multiply_numbers(int, int);

//write factorial function prototype here
void find_factoral()
{
	int n = 0;
	long long int factorial = 1;

	std::cout << "please enter a number : ";
	std::cin >> n;

	for (int i = 1; i <= n; ++i)
	{
		factorial *= i;
	}

	std::cout << "Factorial of " << n << " = " << factorial;

	return (n, factorial);
}


