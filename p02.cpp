#include <iostream>
#include <string>
#include "List02.h"


int main()
{

	List testList = List();
	List secondList = List();
	
	testList.ParseFile("i021.dat");
	secondList.ParseFile("i022.dat");

	List result = testList.CartersianProduct(secondList);
	result.Print();

	return 0;
}