#include "FuncA.h"
#include <cmath>

double FuncA::calculateFuncA() {
	double sum = 1.0;
	double x = 1.0;
	for (int i = 1; i <= 3; ++i) {
		sum += std::pow(x, 2 * i) / std::tgamma(2 * i + 1);
	}
	return sum;
}
