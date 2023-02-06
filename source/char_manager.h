#ifndef CHAR_MANAGER_H
#define CHAR_MANAGER_H

#pragma once
#include <iostream>
#include<string>
#include <conio.h>
using namespace std;

enum class Rasa 
{
    shaman, 
    razboinic, 
    sura
};

class CHAR_MANAGER
{
public:
    CHAR_MANAGER();
    virtual ~CHAR_MANAGER();

    void Shaman();
    void Razboinic();
    void Sura();
private:
    Rasa rasa;
};

#endif