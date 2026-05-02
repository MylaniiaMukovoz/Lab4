#ifndef COLD_DRINK_H
#define COLD_DRINK_H 
#include <string>
#include "Drink.h"

using namespace std;

class ColdDrink : public Drink{
    protected:
        bool hasIce;
    public:
        ColdDrink(string name, int volume, double price, bool hasIce);
        void addIce();
        bool getHasIce();
        void showInfo() override;
};
#endif