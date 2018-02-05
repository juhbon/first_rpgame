#include "stdafx.h"
#include "IInventory.h"

IInventory::IInventory()
{
}

std::string IInventory::Info() const
{
	items.begin() = iter;
	while (iter != items.end()) {
		iter->Info();
		iter.operator++;
	}
}

void IInventory::setSize(const int& size) 
{
	this->size = size;
}


void IInventory::addItem(const IItem& item) 
{
	items.push_back(item);
}

IItem& IInventory::getItem(const int& point) 
{
	return items[point];
}

IInventory::~IInventory()
{
}
