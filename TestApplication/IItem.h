#ifndef IITEM_H
#define IITEM_H

#include <string>

class IItem
{
protected:
	std::string name = "";
	int cost = 0,
		condition = 10;
public:
	IItem();
	std::string getName() const;
	int getCost() const;
	int getCondition() const;
	void setName(const std::string& name);
	void setCost(const int& cost);
	void setCondition(const int& condition);
	virtual std::string Info() = 0;
	virtual ~IItem();
};

#endif IITEM_H