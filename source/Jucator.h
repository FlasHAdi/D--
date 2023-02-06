#ifndef JUCATOR_H
#define JUCATOR_H
#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "char_manager.h"
using namespace std;


class JUCATOR : public CHAR_MANAGER
{
public:
    
    JUCATOR(){};
    JUCATOR(string nume);

    virtual ~JUCATOR();

    string getNume() { return nume;}

    void selectRasa();
    void alegeNume();
    vector<std::string> inventory;
    
private:
    string nume;
    int hp = 200;
    int sp = 200;
    int dmg = 200;
};

#endif