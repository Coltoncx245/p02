#include <iostream>
#include <string>
#include "List02.h"


int main()
{

	List testList = List();
	List secondList = List();


	testList.ParseFile("i021.dat");
	secondList.ParseFile("i022.dat");

	List finalList = testList.CartersianProduct(secondList);

	finalList.Print();
	
	return 0;
}