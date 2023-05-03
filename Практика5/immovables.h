#pragma once
#include <iostream>

class immovables
{
private:
	int LS;
public:
	static int count_of_immovables;
	immovables();
	immovables(int LS);

	~immovables();

	virtual void Description();

	int getLS() const;

	void setLS(int LS);
	
};

