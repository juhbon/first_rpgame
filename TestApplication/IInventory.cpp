
#include "stdafx.h"
#include "IInventory.h"

IInventory::IInventory() {

}

IInventory::~IInventory() {

}

std::string IInventory::Info() const {
    //TODO: read Mayers' Advices by STL: #26 & #27 
	std::vector<IItem>::const_iterator iter = items.begin();

	while (iter != items.end()) {
		iter->Info();
		iter++;
	}

    return "Inventory...";
}

void IInventory::setSize(const int& size) {
	this->size = size;
}

void IInventory::addItem(const IItem& item) {
	items.push_back(item);
}

IItem& IInventory::getItem(const int& point) {
	return items[point];
}

