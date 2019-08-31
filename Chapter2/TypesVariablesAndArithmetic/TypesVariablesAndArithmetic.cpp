#include <iostream>
#include <complex>
#include <vector>

using namespace std;

/* Types
 *
 * bool - possible values are true and false
 * char - character, for example 'c', 'G', '9'
 * int - integer, for example '123', '-20', '83'
 * double - double-precision floating-point number, for example '3.14', '2994832.0'
 *
*/

/*  Arithmetic
 *
 * x+y - plus
 * +x - unary plus
 * x-y - minus
 * -x - unary minus
 * x*y - multiplication
 * x/y - divide
 * x%y - remainder (modulus) for integers
 *
*/

/* Comparison operators
 *
 * x==y - equal
 * x!=y - not equal
 * x<y - less than
 * x>y - greater than
 * x<=y - less than or equal to
 * x>=y - greater than or equal to
 *
*/

// example of arithmetic
void arithmetic_function()
{
	double d = 2.2;
	int i = 7;
	d = d + i;
	i = d * i; 
	cout << "Sum of double and int: " << d << "\n";
	cout << "Product of double and int: " << i << "\n";		// note this truncates to int
}

// example of notations
void notations()
{
	double d1 = 2.3;
	double d2{ 2.3 };
	cout << "d1: " << d1 << " d2: " << d2 << "\n";

	complex<double> z = 1;
	complex<double> z2{ d1, d2 };
	complex<double> z3 = { 1, 2 };
	cout << "z: " << z << " z2: " << z2 << " z3: " << z3 << "\n";

	vector<int> v{ 1,2,3,4,5,6 };	// vector of ints

	int i1 = 7.2;
	cout << i1 << "\n";		// note this drops the decimal
	//int i2{ 7.2 };		// this won't compile
	//int i3 = { 7.2 };		// redundant = sign, also won't compile
}

// example of auto declarations
void auto_function()
{
	// use autos when figuring out type is particularly difficult
	auto b = true;
	auto ch = 'x';
	auto i = 123;
	auto d = 1.2;
	auto z = sqrt(i);

	cout << "autos! b: " << b << " ch: " << ch << " i: " << i << " d: " << d << " sqrt: " << z << "\n";
}

// example of addition arithmetic notations
void more_arithmetic()
{
	int x = 1;
	int y = 2;

	x += y;		// x = x + y
	++x;		// increments: x = x + 1
	x -= y;		// x = x - y
	--x;		// decrements: x = x - 1
	x *= y;		// scaling: x = x * y
	x /= y;		// scaling: x = x / y
	x %= y;		// x = x % y

	cout << "final x value: " << x << " final y value: " << y << "\n";
}

int main()
{
	arithmetic_function();
	notations();
	auto_function();
	more_arithmetic();

	cout << "\n";
	return 0;
}