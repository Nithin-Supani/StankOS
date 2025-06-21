#include <iostream>
#include "bootloader.hpp"

int main() {
	auto state = stankos::bootloader::run();
	return static_cast<int>(state);          // returns 4 for OK
}
