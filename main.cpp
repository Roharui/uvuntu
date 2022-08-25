
#include <raylib.h>
#include <iostream>

#include "driver/driver.hpp"

int main()
{
	std::cout << "Application running..." << std::endl;

	Driver driver;

	driver.init();

	return driver.run();
}