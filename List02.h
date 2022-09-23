#pragma once
#include <string>
#include <fstream>
#include <iostream>


// Container struct holding string and pointers to next and previous containers in list
struct ListContainer
{
						
	std::string contents; // String contents of the container
	ListContainer* next; // Pointer to the next container in the list
	ListContainer* previous; // Pointer to the previous container in the list



	int index = 0; // This container's current index in the list
	bool isEOL = false; // Returns true if this container is the last one in the list
	bool isBOL = false;// Returns true if this container is the first one in the list

	// Default constructor
	ListContainer();

	/*Constructs container to be placed in list. 
	@param str: The string element held in the container 
	*/ 
	ListContainer(std::string str)
	{
		this->contents = str;
	}

};


class List
{
	int count = 0; // Number of elements currently in list

public:

	ListContainer* begin; // Points to the first container in the list
	ListContainer* end; // Points to the last container in the list
	bool isEmpty = true;

	List();

	// Prints the contents of the list to the console
	void Print();

	// Add new string element to end of list
	void Insert(std::string str);

	// Creates a new list of the cartesian product of two lists
	//@returns a list of the cartesian product of the current list and param list
	List CartersianProduct(List l);

	// Reads strings from input file into list
	//@param fileName: Name of file in local dir to read
	//@returns Void
	void ParseFile(std::string fileName);


};