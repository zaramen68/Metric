
#pragma once

#include <iostream>
#include <vector>
#include <string>
#include "Digit.h"


class Metric {
public:

	Metric(){}
	void increment();
	std::string get_value() const;

private:
	std::vector<Digit> digits;
};
