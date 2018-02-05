#pragma once
#include "IInventory.h"
class Bag : public IInventory, public IItem
{
public:
	Bag();
	virtual ~Bag();
};

