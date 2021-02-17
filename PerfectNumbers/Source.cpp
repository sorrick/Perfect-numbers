/*
AUTHOR: Richard Soria
Descr:  This file creates a list of perfect numbers 0 to 10,000.
*/

#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
using namespace std;


bool isPerfectnum(long int n)
{
	long int sum = 1;

	for (long int i = 2; i*i <= n; i++)
	{
		if (n%i == 0)
		{
			if (i*i != n)
				sum = sum + i + n / i;
			else
				sum = sum + i;
		}
	}

	if (n != 1 && sum==n)
		return true;
	else
		return false;
}


int main()
{
	cout << "Here is the list for all perfect numbers from 0 to 10,000:\n";

	for (int n = 2; n < 10000; n++)
		if (isPerfectnum(n))
			cout << right << setw(40) << n << "\n";

	return 0;

}
