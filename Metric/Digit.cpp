#include "Digit.h"

int Digit::increment() {
	if (i < 9) { i++; return 0; }
	else if (j < 26) { i = 1; j++; return 0; }
	else { i = 1; j = 1; return 1; }
}

std::string Digit::get_value() const {
	std::string s = "";
	s = s + alphabet[j-1] + std::to_string(i);
	return s;
}

std::pair<int, int> Digit::get_indexes() const {
	std::pair<int, int> indexes(i, j);
	return indexes;
}