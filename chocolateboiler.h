#ifndef CHOCOLATEBOILER_H
#define CHOCOLATEBOILER_H

#include "iostream"
using namespace std;

class ChocolateBoiler
{
private:
    bool empty;
    bool boiled;
    static ChocolateBoiler *uniqueInstance;
    ChocolateBoiler();
public:
    static ChocolateBoiler* getInstance();
    void fill();
    void drain();
    void boil();
    bool isEmpty();
    bool isBoiled();
};

#endif // CHOCOLATEBOILER_H
