#include <iostream>
#include "Metric.h"


int main(int argc, char* argv[])
{
	if (argc < 2) {
		Metric metric;
	}
	else if(argc == 2) {
		Metric metric(argv[1]);
	}
	else {
		std::cout << " слишком много аргументов. " << std::endl;
	}
	
	for (int i = 0; i < 100; ++i) {
		metric.increment();
		std::cout << metric.get_value() << std::endl;
	}

	
	return 0;
}