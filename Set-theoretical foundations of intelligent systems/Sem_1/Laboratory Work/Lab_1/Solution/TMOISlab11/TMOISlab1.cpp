#include <iostream>
#include "Header.h"

int main() {

	CL MyCL;
	MyCL.setStrenght();
	MyCL.showStrenght();
	MyCL.setNumbers();
	MyCL.showNumbers();
	MyCL.choseOp();

	std::cout << std::endl << std::endl;
	std::cin.get();
}