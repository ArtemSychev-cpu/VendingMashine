#pragma once
#include <string>
#include <iostream>
#include "Slot.h"
class VendingMachine
{ 

	
	int slot;
	int EmptySlotsCount;
public:
	VendingMachine() = default;
	VendingMachine(int sum);
	~VendingMachine();
	void addSlot(Slot*name);
	int getEmptySlotsCount();
	


};