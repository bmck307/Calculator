// Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>

/*
	Adds two floats
*/
float addition(float x, float y)
{
	return x + y;
}
/*
	Subtracts two floats
*/
float subtraction(float x, float y)
{
	return x - y;
}
/*
	Multiplies two floats
*/
float multiplication(float x, float y)
{
	return x * y;
}
/*
	Divides two floats
*/
float division(float x, float y)
{
	return x / y;
}
/*
	Calculates the Logarithm for any given base and number
*/
float logarithm(int base, int x)
{
	if (base == 10)
	{
		return log10(x);
	}
	return log10(x) / log10(base);
}
/*
	Calculates the Greatest Common Divisor between two ints
*/
int EuclideasAlgorithm(int x, int y)
{
	if (x < 0 || y < 0)
	{
		x = abs(x);
		y = abs(y);
	}

	if (y > x) //If b is greater than b, switches the values
	{
		int temp = x;
		x = y;
		y = x;
	}

	int remainder = x % y;
	int q = x / y;

	if (remainder == 0)
	{
		return y;
	}
	if (x = y * q + remainder) //Confirms that the numbers still fit the form, Not needed
	{
		EuclideasAlgorithm(y, remainder);
	}
}

int main()
{
	//Variables
	int selectedInput = 0;
	float first = 0;
	float second = 0;
	std::string prompt = "Please enter the two numbers you would like to ";
	std::string form = " in the form \"firstNum secondNum \" \n";
	std::string logForm = " in the form \"baseNum secondNum \" \n";
	std::string warning = "This function only takes in whole numbers \n";

	//Beginning of User Interface (Will likely improve)
	std::cout << "Menu: \n 1. Addition \n 2. Subtration \n 3. Multiplication \n 4. Division \n 5. Logarithms \n 6. GCD \n";
	std::cin >> selectedInput;

	while (true)
	{
		/*
			This is ineffecient. But I like switch statements and this is just for easy access to needed functions
		*/
		switch (selectedInput)
		{
			case 1:
				std::cout << prompt << "add" << form;
				std::cin >> first;
				std::cin >> second;
				std::cout << "The result is " << addition(first, second) << std::endl;
				break;
			case 2:
				std::cout << prompt << "subtract" << form;
				std::cin >> first;
				std::cin >> second;
				std::cout << "The result is " << subtraction(first, second) << std::endl;
				break;
			case 3:
				std::cout << prompt << "multiply" << form;
				std::cin >> first;
				std::cin >> second;
				std::cout << "The result is " << multiplication(first, second) << std::endl;
				break;
			case 4:
				std::cout << prompt << "divide" << form;
				std::cin >> first;
				std::cin >> second;
				std::cout << "The result is " << division(first, second) << std::endl;
				break;
			case 5:
				std::cout << prompt << "find the logarithm for" << logForm;
				std::cin >> first;
				std::cin >> second;
				std::cout << "The result is " << logarithm(first, second) << std::endl;
				break;
			case 6:
				std::cout << warning;
				std::cout << prompt << "find the greatest common divsor for" << form;
				std::cin >> first;
				std::cin >> second;
				std::cout << "The result is " << EuclideasAlgorithm(first, second) << std::endl;
				break;
			default:
				std::cout << "Dude you wrote this, run it back";
				break;
		}
	}
}

