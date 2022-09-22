#include "List02.h"


List::List() 
{ 
	iterator = nullptr;
	this->begin = nullptr;
	this->end = nullptr;
	this->isEmpty = true;
	

};
ListContainer::ListContainer() { void; };

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

	// Otherwise, point new container prev to end of list, then make new container end of list.
	
	else
	{

		c->previous = this->end;
		this->end->next = c;
		this->end = c;
		
	}
	
	this->count++;


}


List List::CartersianProduct(List l)
{
	List productList = List();

	for (int i = 0; i < this->count; i++)
	{
		for (int p = 0; p < l.count; p++)
		{
			productList.Insert("{" + this->elements[i].contents + ", " + l.elements[p].contents + "}");
		}
		
	}

	return productList;

}

void List::ParseFile(std::string fileName)
{
	std::ifstream inputFile = std::ifstream(fileName);
	
	while (inputFile)
	{
		std::string line;
		getline(inputFile, line);

		// Iterate through line, adding non-whitespace chars to list
		
		for (char &c : line)
		{
			if (c != ' ' && c != '\t')
			{
				this->Insert(std::string(1, c));
			}
				
		}
		
	}

}

