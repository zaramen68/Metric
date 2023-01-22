
#pragma once

#include <iostream>
#include <vector>
#include "Digit.h"


class Metric {
public:

	Metric(){}
	void increment();

private:
	std::vector<Digit> digits;
};
