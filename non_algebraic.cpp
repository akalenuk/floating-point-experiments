#include <assert.h>
#include <limits>
#include <string>

void assert_associativity()
{
	// associativity
	double a = 1.;
	double b = 9007199254740992.; // 2 ^ 53
	double c = -9007199254740992.;
	double d = (a + b) + c;
	double e = a + (b + c);
	assert(d != e);
}

void assert_identity()
{
	// identity element
	double a = 0.;
	double b = -0.;
	assert(a == b);
	// 0. != -0.
	auto a_string = std::to_string(a);
	auto b_string = std::to_string(b);
	assert(a_string != b_string);
}


void assert_integers()
{
	// not a superset on integers
	uint64_t a = std::numeric_limits<uint64_t>::max();
	uint64_t b = std::numeric_limits<uint64_t>::max() - 1;
	double double_a = static_cast<double>(a);
	double double_b = static_cast<double>(b);
	assert(sizeof(a) == sizeof(double_a));
	assert(a == b + 1);
	assert(double_a == double_b); // lost one
}

int main()
{	
	assert_associativity();
	assert_identity();
	assert_integers();
}
