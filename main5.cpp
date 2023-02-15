#include <iostream>
#include "Slot.h"
#include "Snack.h"
#include "VendingMashine.h"
#include <string>

using namespace std;

int slotCount = 8;

int main()
{
	Snack* bounty = new Snack("Bounty");
	Snack* snickers = new Snack("Snickers");
	Slot* slot = new Slot(10/*количество батончиков, которые помещаютс€ в слот*/);
	slot->addSnack(bounty); //ƒобавл€ем батончик в слот
	slot->addSnack(snickers);
	VendingMachine* machine = new VendingMachine(slotCount /* оличество слотов дл€ снеков*/);
	machine->addSlot(slot); // ѕомещаем слот обратно в аппарат

	cout << machine->getEmptySlotsCount(); // ƒолжно выводить количество пустых слотов дл€ снеков
	delete machine;
	delete slot;
	delete snickers;
	delete bounty;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}

