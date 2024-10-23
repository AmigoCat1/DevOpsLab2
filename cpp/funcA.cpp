#include "FuncA.h"
#include <cmath>

//Function calculate sum first n elements
double FuncA::calculateFuncA(int n) {
	double sum = 1.0;
	double x = 1.0;
	for (int i = 1; i <= n; ++i) {
		sum += std::pow(x, 2 * i) / std::tgamma(2 * i + 1);
	}
	return sum;
}
