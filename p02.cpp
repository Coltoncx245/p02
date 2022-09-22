#include <iostream>
#include <string>
#include "List02.h"


int main()
{

	List testList = List();
	List secondList = List();
	
	testList.Insert("Apple");
	testList.Insert("Banana");
	testList.Insert("Cocount");
	testList.Insert("Djemba");
	testList.Insert("Eggplant");


	testList.Print();

	return 0;
}