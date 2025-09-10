#include <iostream>
#include <cmath>


double eval_function(double x){
	return (3 * pow(x, 3) - 2 * pow(x, 2) + 5 * x - 2 * exp(x) + 1);
}

double eval_derivative_approximation(double p0, double p1){
	return ((eval_function(p0)-eval_function(p1))/(p0-p1));
}	

void secant(double p0, double p1, int max_iterations){
	double p = p0;
	for (int i = 0; i < max_iterations; ++i){
		p = p - (eval_function(p) / eval_derivative_approximation(p0, p1));
		std::cout<<"Result for iteration "<<(i+1)<<": "<<p<<std::endl;
	} 
	std::cout<<"\n--------------------------------\n"<<std::endl;	
	std::cout<<"Final Result: "<<p<<std::endl;
}

int main(){
	secant(1, 0.99, 50);
	return 0;
}

