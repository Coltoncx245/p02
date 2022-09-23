#include <iostream>
#include <string>
#include "List02.h"


int main()
{
	std::string inputFile1;
	std::string inputFile2;
	std::string outputFile;

	std::cout << "Enter the name of input file 1: ";
	std::cin >> inputFile1;
	std::cout << "Enter the name of input file 2: ";
	std::cin >> inputFile2;
	std::cout << "Enter the name of the output file: ";
	std::cin >> outputFile;

	List testList = List();
	List secondList = List();
	
	testList.ParseFile(inputFile1);
	secondList.ParseFile(inputFile2);

	testList.CartersianProduct(secondList, outputFile);


	return 0;
}