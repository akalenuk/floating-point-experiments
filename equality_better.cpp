#include <iostream>
#include <cmath>

static const double delta = 1e-5;

bool change_sign(double x, double y){
	return x*y < 0;
}

int main(){
	for(double x = 2.; x < 3.; x += delta){
		double x_delta = x + delta;
			if(change_sign(x_delta*x_delta - 5., x*x - 5.)){
				std::cout << x << std::endl;
				return 0;
			}
		}
	return 1;
}

