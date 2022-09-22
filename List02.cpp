#include "List02.h"


List::List() { void; };
ListContainer::ListContainer() { void; };

void List::Print()
{
	for (int i = 0; i < this->count; i++)
	{
		std::cout << elements[i].contents + "\tIndex: " << elements[i].index << std::endl;
	}
	std::cout << "\n" << std::endl;
}



void List::Insert(std::string str)
{	
	int index = this->count; // Index AFTER last element of array
	
	if (index == MAX_ARR_SIZE)
	{
		std::cout << "Error, max number of elements reached." << std::endl;

	}

	else
	{
		ListContainer c = ListContainer(str, index);
		this->elements[index] = c;

		// Update number of elements currently in the list
		this->count++;
	}

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

