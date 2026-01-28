#include <iostream>
#include <vector>
#include <numeric>

int main(int argc, char* argv[]) // changed static void main to int Main to match C++ int main signature
{
	int factorialNumber = 5;
	int factorialTotal = 1;

	for (int n = 2; n <= factorialNumber; ++n) // this part in the loop was kept the same, as well as the variable declaration.
	{
		factorialTotal *= n;
	}

	std::cout << (factorialTotal) << std::endl;
	// and the system.console.writeline to std::cout... <<  << std::endl

	std::vector<int> numberArr;

	while (true)
	{
		std::cout << "Please enter an int value, then press Enter" << std::endl;
		int number = 0;
		std::cin >> number;
		if (number == 0)
		{
			break;
		}
		numberArr.push_back(number);
	}
	double average = 0.0;
	if (!numberArr.empty())
	{
		int sum = std::accumulate(numberArr.begin(), numberArr.end(), 0);
		average = static_cast<double>(sum) / numberArr.size();
	}

	std::cout << "The average is: " << average << std::endl;


}