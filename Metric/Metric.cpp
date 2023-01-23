
#include "Metric.h"
#include <vector>
#include <string>

using namespace std;

void Metric::increment() {
	if (digits.empty()) { digits.push_back(Digit()); return; }
	std::vector<Digit>::iterator iter;
	iter = digits.begin();

	for (; iter < digits.end(); ++iter) {
		if (iter->increment() == 1) { continue; }
		else { return; }
	}
	if (iter == digits.end()) { digits.push_back(Digit()); }
}

std::string Metric::get_value() const {
	std::string value;
	for (auto iter = digits.rbegin(); iter < digits.rend(); ++iter) {
		value = value + iter->get_value();
		if (iter != digits.rend() - 1) { value.append(":"); }
	}
	return value;
}
