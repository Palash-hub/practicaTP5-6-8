#pragma once
#include "immovables.h"
#include "apartment.h"
class townhouse :
    public immovables
{
    std::string Name;
    int LS;
public:
    static int count_of_townhouse;
    townhouse();
    townhouse(std::string Name);
    ~townhouse();

    std::string getName();
    void setName(std::string Name);

    int getLS() const;
    void setLS(int LS);
    void Description();
    bool operator > (townhouse& t1);

    friend int maxLS(townhouse t[]);
};

