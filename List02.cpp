#include "List02.h"


List::List() 
{ 
	this->begin = nullptr;
	this->end = nullptr;
	this->isEmpty = true;
	

};

ListContainer::ListContainer() 
{
	this->next = nullptr;
	this->previous = nullptr;
};

void List::Print()
{
	ListContainer* iterator = this->begin;

	for (int i = 0; i < this->count; i++)
	{
		std::cout << iterator->contents << std::endl;
		iterator = iterator->next;
	}
	std::cout << "\n" << std::endl;
}


void List::Insert(std::string str)
{	
	ListContainer* c = new ListContainer(str);

	// If  empty list, set pointers for beginning and end of list to new container
	if (this->isEmpty)
	{
		this->begin = c;
		this->end = c;
		this->isEmpty = false;
	}

	// Otherwise, point new container.previous to end of list, then make new container end of list.
	else
	{

		c->previous = this->end;
		this->end->next = c;
		this->end = c;
		
	}
	
	// Increment count to keep track of number of elements in list
	this->count++;

}


List List::CartersianProduct(List l)
{
	List productList = List();

	ListContainer* iterator1 = this->begin; // Iterator for list 1
	ListContainer* iterator2 = l.begin; // Iterator for list 2


	for (int i = 0; i < this->count; i++)
	{
		for (int x = 0; x < l.count; x++)
		{
			// Insert element pair
			productList.Insert("(" + iterator1->contents + "," + iterator2->contents + ')');

			// advance second list iterator
			if (iterator2 != l.end) iterator2 = iterator2->next;
		}
		// advance first list iterator
		if (iterator1 != this->end) iterator1 = iterator1->next;

		// reset second list iterator to beginning of list
		iterator2 = l.begin;
	}

	return productList;
}

void List::ParseFile(std::string fileName)
{	
	

		std::ifstream inputFile = std::ifstream(fileName);
		// catch errors in file input

		if (inputFile.fail())
		{
			std::cout << "Error: Could not find file " << fileName << std::endl;
		}
		while (inputFile)
		{
			std::string w;
			while (inputFile >> w)
			{
				this->Insert(w);
			}
		}


}

