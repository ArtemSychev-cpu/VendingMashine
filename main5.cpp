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
	Slot* slot = new Slot(10/*���������� ����������, ������� ���������� � ����*/);
	slot->addSnack(bounty); //��������� �������� � ����
	slot->addSnack(snickers);
	VendingMachine* machine = new VendingMachine(slotCount /*���������� ������ ��� ������*/);
	machine->addSlot(slot); // �������� ���� ������� � �������

	cout << machine->getEmptySlotsCount(); // ������ �������� ���������� ������ ������ ��� ������
	delete machine;
	delete slot;
	delete snickers;
	delete bounty;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}

