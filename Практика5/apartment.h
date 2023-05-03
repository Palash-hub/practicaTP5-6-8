#pragma once
#include "immovables.h"
#include "townhouse.h"
class apartment :
    private immovables
{
    std::string Name;
    int LS;
public:
    static int count_of_apartmants;
    apartment();
    apartment(std::string Name);
    ~apartment();

    std::string getName() const;
    void setName(std::string Name);

    int getLS() const;
    void setLS(int LS);
    void Description();


    bool operator > (apartment& a);

    friend int maxLS(apartment a[]);
};

