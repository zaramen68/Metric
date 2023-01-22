#pragma once
#include <string>

class Digit {
public:
	Digit(): i(1), j(1) {}
	Digit(int i_, int j_): i(i_), j(j_) {}
	int increment();
	std::string get_value() {};
private:
	int i, j;
	const char alphabet[26]{'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 
		'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
};