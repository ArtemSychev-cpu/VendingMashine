#pragma once
#include <string>
class Snack
{ 

	const char* snackname;
	int SnackSlot;
	int snackSlot(int value);
public:
	Snack() = default;
	Snack(const char* name);
	~Snack();
	const char* getsnackName();
	void setsnackName(const char* value);
	
	
	




};


