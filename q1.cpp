#include <iostream>
#include <iomanip>
using namespace std;

//********************
// Declare Function Prototypes
//********************
void getinput(int, int)
void getinput(float, float)
void swapTwoValues(int, int)
void swapTwoValues(float, float)


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

void getinput(int &a, int &b)
{
	int num1, num2;
	cout << "Enter in two integers values to swap them: ";
	cin >> num1 >> num2;
}

void getinput(float &c, float &d)
{
	float num1, num2;
	cout << "Enter in two floats values to swap them: ";
	cin >> num1 >> num2;
}


void swapTwoValues(int &a, int &b)
{
	int num1, num2;
	int c = num1, d = num2;
	num1 = d; 
	num2 = c; 
}

void swapTwoValues(float &c, float &d)
{
	int num1, num2;
	int a = num1, b = num2; 
	num1 = b; 
	num2 = a;
}