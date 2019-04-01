#include <iostream>
#include <fstream>
#include <string>
#include "NumberList.h"
using namespace std;

int main()
{
	NumberList *list;
	list = new NumberList;
	/*list->insertNode(10);
	list->appendNode(40);
	list->insertNode(30);
	list->insertNode(25);
	list->deleteNode(30);
	list->displayList();
	list->insertNode(20);
*/
	string tempString;
	int tempInt;
	fstream myFile;
	myFile.open("10Ints.txt");
	if (!myFile)
	{
		cout << "File not found \n";
	}
	else
	{
		while (getline(myFile, tempString))
		{
			list->insertNode(stoi(tempString));
		}

		list->displayList();
	}



	return 0;
}