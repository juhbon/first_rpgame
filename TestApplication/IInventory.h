#ifndef IINVENTORY_H
#define IINVENTORY_H

#include <vector>
#include "IItem.h"
#include <vector>
#include <iterator>
using namespace std;
class IInventory
{
protected:
	vector<IItem> items;
	vector<IItem>::iterator iter;
	int size = 0;
public:
	IInventory();
	std::string Info() const;
	void setSize(const int& size);
	void addItem(const IItem& item);
	IItem& getItem(const int& point);
	virtual ~IInventory();
};

#endif IINVENTORY_H