// spaceship.cpp
// just testing the c++20 operator
// 16-Jul-2021
//

#include <iostream>
#include <compare>
#include <complex>

auto operator <=> (const std::complex<double>& u, const std::complex<double>& v)
{
	double ur = std::abs(u);
	double vr = std::abs(v);

	if (ur < vr)
		return std::weak_ordering::less;
	else if (ur > vr)
		return std::weak_ordering::greater;
	else 
		return std::weak_ordering::equivalent;
}

int main()
{
	using namespace std;

	complex a(1.0, 0.0), b(cos(45), sin(45));

	if ((a <=> b) > 0)
		cout << "greater than";
	else if ((a <=> b) < 0)
		cout << "less than";
	else 
		cout << "equivalent";
}
