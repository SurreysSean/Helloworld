#include <iostream>
#include <cmath>
#include <string>

using namespace std;


void ex2_4();
void ex2_8();

int main()
{
	ex2_4();
	ex2_8();

	return 0;
}









void ex2_4()
{
	unsigned u = 10, u2 = 42;
	int i = 10, i2 = 42;
	cout << "ex2.4: ";
	cout << u2 - u << ",";
	cout << u - u2 << ",";
	cout << i2 - i << ",";
	cout << i - i2 << ",";
	cout << i - u << ",";
	cout << u - i << endl;
}
void ex2_8()
{
	cout<<"ex2.8: ";
	cout<<"1. ";
	cout<<"\62\115\12";
	cout<<"2. ";
	cout<<"\62\11\115\12";
}
