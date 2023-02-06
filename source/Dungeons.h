#ifndef DUNGEONS_H
#define DUNGEONS_H

#pragma once
#include <iostream>
#include <string>
#include <vector>

using namespace std;

enum Temnita
{
    none,
    padure,
    oras,
    castel
};
    
class DUNGEONS
{

public:
    DUNGEONS();
    virtual ~DUNGEONS();

    void crossRoads();
    void padureFermecata();
    void orasulPierdut();
    void castelulBantuit();
};

#endif
