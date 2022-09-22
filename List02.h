#pragma once
#include <string>
#include <fstream>
#include <iostream>

// Maximum number of elements in the array
#define MAX_ARR_SIZE 50


// Container struct holding string, bool if EOL
struct ListContainer
{
	std::string contents;
	ListContainer* next;
	ListContainer* previous;



	int index = 0; // This container's current index in the list
	bool isEOL = false; // Returns true if this container is the last one in the list
	bool isBOL = false;// Returns true if this container is the first one in the list

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
	ListContainer c;
	ListContainer elements[MAX_ARR_SIZE]; // Array holding ListContainer struct for each element

	int count = 0; // Number of elements currently in list
	

public:

	ListContainer* iterator; // Points to currently accessed element of list
	ListContainer* begin; // Points to the first container in the list
	ListContainer* end; // Points to the last container in the list
	bool isEmpty = true;

	List();

	// Prints the contents of the list to the console
	void Print();

	// Add new string element to end of list
	void Insert(std::string str);

	//@returns a list of the cartesian product of the current list and param list
	List CartersianProduct(List l);

	void ParseFile(std::string fileName);



};