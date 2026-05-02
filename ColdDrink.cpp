#include "ColdDrink.h"
#include "Drink.h"
#include <iostream>

using namespace std;

ColdDrink::ColdDrink(string name, int volume, double price, bool hasIce) : 
Drink(name, volume, price) {
    this->hasIce = hasIce;
}

bool ColdDrink::getHasIce(){
    return this->hasIce;
}

void ColdDrink::showInfo(){
    Drink::showInfo();
    cout << "Ice: " << hasIce << endl;
}

void ColdDrink::addIce(){
    if (!hasIce) {
        this->hasIce = true;
        cout << "Adding ice..." << endl;
    }
}