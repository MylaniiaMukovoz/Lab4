#include "Drink.h"
#include <iostream>

using namespace std;

Drink::Drink(string name, int volume, double price){
    this->name = name;
    this->volume = volume;
    this->price = price;
}

void Drink::showInfo(){
    cout << "Name: " << name << endl;
    cout << "Volume: " << volume << endl;
    cout << "Price: " << price << endl;
}

