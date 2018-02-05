#include "stdafx.h"
#include "IItem.h"


IItem::IItem() {}

std::string IItem::getName() const	{	return name;	}
int IItem::getCost() const {	return cost;	};
int IItem::getCondition() const	{	return 0;	}

void IItem::setName(const std::string& name)
{
	this->name = name;	
}
void IItem::setCost(const int& cost)
{
	this->cost = cost;
}
void IItem::setCondition(const int& condition)
{
	this->condition = condition;
}

IItem::~IItem()
{
}
