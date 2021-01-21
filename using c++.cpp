#include <iostream>
using namespace std;

int main()
{
	int n;
  cin>>n;
  
  int octalNum = 0, countval = 1;

	while (n != 0) 
  {

		// decimals remainder is calculated
		int remainder = n % 8;

		// storing the octalvalue
		octalNum += remainder * countval;

		// storing exponential value
		countval = countval * 10;
		n /= 8;
	}
	cout << octalNum << endl;

	
	return 0;
}
