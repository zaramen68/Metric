#include <iostream>
#include "Metric.h"


int main()
{
	Metric metric;
	for (int i = 0; i < 100; ++i) {
		metric.increment();
		std::cout << metric.get_value() << std::endl;
	}

	
	return 0;
}