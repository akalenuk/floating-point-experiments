#include <iostream>
#include <cmath>

static const double delta = 1e-5;
static const double epsilon = 1e-5;

bool almost_equal(double x, double y){
	return std::abs(x-y) < epsilon;
}

int main(){
	for(double x = 2.; x < 3.; x += delta)
		if(almost_equal(5., x*x)){
			std::cout << x << std::endl;
			return 0;
		}
	return 1;
}

