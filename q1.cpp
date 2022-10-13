#include <iostream>
#include <iomanip>
using namespace std;

//********************
// Declare Function Prototypes
//********************


int main()
{
	int num1, num2;
	float fnum1, fnum2;
	getinput(num1, num2);
	cout << " Before Swap" << setw(5) << num1 << setw(5) << num2 << setw(5) << endl;
	swapTwoValues(num1, num2);
	cout << " After Swap" << setw(5) << num1 << setw(5) << num2 << setw(5) << endl;

	// -- Call overloaded function with float parameters
	getinput(fnum1, fnum2);
	cout << setw(5) << fnum1 << setw(5) << fnum2 << setw(5) << endl;
	swapTwoValues(fnum1, fnum2);
	cout << setw(5) << fnum1 << setw(5) << fnum2 << setw(5) << endl;
}

// ******************************
// Implement all your functions here
// ******************************

void getinput(int num1, int num2)
{
	int num1, num2;
	cout << "Enter in two integers values to swap them: ";
	cin >> num1 >> num2;
}

void getinput(float num1, float num2)
{
	float num1, num2;
	cout << "Enter in two floats values to swap them: ";
	cin >> num1 >> num2;
}


void swapTwoValues(int num1, int num2)
{
	int a = num1, b = num2;
	num1 = b; 
	num2 = a; 
}

void swapTwoValues(float num1, float num2)
{
	int a = num1, b = num2; 
	num1 = b; 
	num2 = a;
}