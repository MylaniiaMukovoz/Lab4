#include "Cocktail.h"
#include "Drink.h"
#include "ColdDrink.h"
#include <iostream>

using namespace std;

Cocktail::Cocktail(string name, int volume, double price, bool hasIce, double percentOfAlco)
    : ColdDrink(name, volume, price, hasIce) {
    this->percentOfAlco = percentOfAlco;
}

void Cocktail::decorate(){
    cout << "Decorating your cocktail..." << endl;
}

void Cocktail::showInfo(){
    Drink::showInfo();
    cout << "Percent of alcohol: " << percentOfAlco << endl;
}

