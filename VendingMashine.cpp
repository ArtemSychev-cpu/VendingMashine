#include "VendingMashine.h"

VendingMachine::VendingMachine(int sum)
{
	EmptySlotsCount = sum;
}

VendingMachine::~VendingMachine()
{
}

void VendingMachine::addSlot(Slot*name)
{
	--EmptySlotsCount;
}

int VendingMachine::getEmptySlotsCount()
{
	return EmptySlotsCount;
}



