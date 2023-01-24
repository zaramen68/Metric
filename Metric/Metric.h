
#pragma once

#include <iostream>
#include <vector>
#include <string>

#include "Digit.h"

const std::string delimeter = ":";

class Metric {
public:
	Metric(){}
	Metric(const char* s[]) {

		int count = 0;
		int di;
		int dj;

		for (int idx = sizeof(s)/sizeof(s[0])-1; idx >= 0; idx--) {
			++count;
			if (s[idx] == delimeter) { 
				count = 0; 
				digits.push_back(Digit());
			}
			if (count == 1) { di = atoi(s[idx]); }
			if (count == 2) { dj = }
			
		}
	}
	void increment();
	std::string get_value() const;

private:
	std::vector<Digit> digits;
	std::string s_value;
};
