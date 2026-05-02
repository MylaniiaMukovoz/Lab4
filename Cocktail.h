#ifndef COCKTAIL_H
#define COCKTAIL_H 
#include <string>
#include "ColdDrink.h"

using namespace std;

class Cocktail : public ColdDrink {
    protected:
        double percentOfAlco;
    public:
        Cocktail(string name, int volume, double price, bool hasIce, double percentOfAlco);
        void decorate();
        void showInfo() override;
};
#endif