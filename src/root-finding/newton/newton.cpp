#include <iostream>
#include <cmath>


double eval_function(double x){
	return (3 * pow(x, 3) - 2 * pow(x, 2) + 5 * x - 2 * exp(x) + 1);
}

double eval_derivative(double x){
	return (9 * pow(x, 2) - 4 * x + 5 - 2 * exp(x));
}	

void  newton(double p0, int max_iterations){
	double p = p0;
	for (int i = 0; i < max_iterations; ++i){
		p = p - (eval_function(p) / eval_derivative(p));
		std::cout<<"Result for iteration "<<(i+1)<<": "<<p<<std::endl;
	} 
	std::cout<<"\n--------------------------------\n"<<std::endl;	
	std::cout<<"Final Result: "<<p<<std::endl;
}

int main(){
	newton(1.0, 50);
	return 0;
}

