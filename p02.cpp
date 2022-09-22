#include <iostream>
#include <string>
#include "List02.h"


int main()
{

	List testList = List();
	List secondList = List();
	
	testList.Insert("Apple");
	testList.Insert("Banana");


	std::cout << testList.begin << " " << testList.begin->contents << std::endl;
	std::cout << testList.end << " " << testList.end->contents << std::endl;

	return 0;
}