#include <iostream>
#include "Drink.h"
#include "HotDrink.h"
#include "ColdDrink.h"
#include "Juice.h"
#include "Cocktail.h"

using namespace std;

int main() {

    cout << endl << "Inheritance" << endl;
    Drink *drink = new Drink("Water", 500, 20.5);
    drink->showInfo();
    cout << endl;

    HotDrink *tea = new HotDrink("Tea", 300, 35.0, 5);
    tea->showInfo();
    tea->heatUp(4);
    tea->showInfo();
    cout << endl;

    ColdDrink *cola = new ColdDrink("Cola", 500, 36.0, false);
    cola->showInfo();
    cola->addIce();
    cola->showInfo();
    cout << endl;

    Juice *juice = new Juice("Orange juice", 250, 50.0, true, "Orange");
    juice->showInfo();
    juice->squeeze();
    cout << endl;

    Cocktail *cocktail = new Cocktail("Mojito", 300, 120.0, true, 12.5);
    cocktail->showInfo();
    cocktail->decorate();
    cout << endl;

    cout << endl << "Polymorphism" << endl;

    Drink *drink1 = new ColdDrink("Cola", 250, 32.0, false);
    drink1->showInfo();
    cout << endl;

    return  0;
}