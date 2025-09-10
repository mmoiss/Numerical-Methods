#include <iostream>
#include <iomanip>
#include <cmath>

double eval_function(double input){
	return 3*pow(input, 3)-2*pow(input,2)+5*input-2*exp(input)+1;
}

bool check_accuracy(double value, int requiredDecimals) {
    std::ostringstream out;
    out.precision(requiredDecimals + 1);
    out << value;
    std::string strValue = out.str();
    
    size_t pos = strValue.find('.');
    if (pos != std::string::npos) {
        return (strValue.length() - pos - 1) >= requiredDecimals;
    }
    return false;
}

double bisection(double lowerBound, double upperBound, int decimals){
	double a  = lowerBound;
	double b = upperBound;
	double p = 0.5*(a+b);
	double factor = std::pow(10, decimals);
	double fa = eval_function(a);
	double fp = eval_function(p);
	int count = 0;

	for(int i = 0; i<1;){
		++count;
		if (fa*fp < 0.0){
			b = p;
			std::cout << "B is: " << b << std::endl;			
		} else if (fa*fp >0.0){
			a = p;
			std::cout << "A is: " << a << std::endl;
		} else if (fa*fp == 0.0 || count > 10000 ){
			std::cout << "Unable to find the root";
			++i;
		}
		p = 0.5*(a+b);
		fa = eval_function(a);
		fp = eval_function(p);
		if (check_accuracy(p, decimals)){
			++i;
		}
		
	}
	return p;
}

int main(){
	std::cout<< std::fixed <<std::setprecision(5)<< bisection( -1.0, 2.0, 15);	
	return 0;
}

