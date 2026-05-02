#ifndef HOT_DRINK_H
#define HOT_DRINK_H 
#include <string>
#include "Drink.h"

using namespace std;

class HotDrink : public Drink {
    protected:
        int heatLevel;
    public:
        HotDrink(string name, int volume, double price, int heatLevel);
        void heatUp();
        int getHeatLevel();
        void showInfo() override;
};
#endif