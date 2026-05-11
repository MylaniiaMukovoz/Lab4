#ifndef DRINK_H
#define DRINK_H 
#include <string>

using namespace std;

class Drink {
    private:
        string name;
        int volume;
        double price;
    public:
        Drink(string name, int volume, double price);
        virtual void showInfo();
};
#endif