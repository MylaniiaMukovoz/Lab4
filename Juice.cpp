#include "Juice.h"
#include "ColdDrink.h"
#include "Drink.h"

#include <iostream>

using namespace std;

Juice::Juice(string name, int volume, double price, bool hasIce, string type) :
    ColdDrink(name, volume, price, hasIce) {
    this->type = type;
}

void Juice::squeeze(){
    cout << "Making fresh juice..." << endl;
}

void Juice::showInfo(){
    ColdDrink::showInfo();
    cout << "Type of juice: " << this->type << endl;
}