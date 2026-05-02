#ifndef JUICE_H
#define JUICE_H 
#include <string>
#include "ColdDrink.h"

using namespace std;

class Juice : public ColdDrink{
    protected:
        string type;
    public:
        Juice(string name, int volume, double price, bool hasIce, string type);
        void squeeze();
        void getType();
        void showInfo() override;
};
#endif