#include "Drink.h"
#include "HotDrink.h"
#include <iostream>

using namespace std;

HotDrink::HotDrink(string name, int volume, double price, int heatLevel) : 
Drink(name, volume, price) {
    this->heatLevel = heatLevel;
}

int HotDrink::getHeatLevel(){
    return this->heatLevel;
}

void HotDrink::showInfo(){
    Drink::showInfo();
    cout << "Heat level: " << heatLevel << endl;
}

void HotDrink::heatUp(){
    heatLevel++;
}