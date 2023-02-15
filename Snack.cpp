#include "Snack.h"
#include <iostream>
#include <string>
using namespace std;

	
	Snack::Snack(const char* name)
	{
		this->snackname = name;
	}

	Snack::~Snack()
	{
	}
	const char* Snack:: getsnackName() 
	{
		return snackname;
	}
	void Snack:: setsnackName(const char* value)
	{
		snackname = value;
	}
	int Snack::snackSlot(int value)
	{
		return SnackSlot = value;
	}
	

	
	


