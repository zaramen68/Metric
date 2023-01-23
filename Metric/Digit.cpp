#include "Digit.h"

int Digit::increment() {
	if (i < 9) { i++; return 0; }
	else if (j < 26) { j++; return 0; }
	else { i = 1; j = 1; return 1; }
}

std::string Digit::get_value() const {
	std::string value(1, alphabet[j]);
	value = value + std::to_string(i);
	return value;
}

std::pair<int, int> Digit::get_indexes() const {
	std::pair<int, int> indexes(i, j);
	return indexes;
}