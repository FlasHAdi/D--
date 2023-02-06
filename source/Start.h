#ifndef START_H
#define START_H

#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
#include <string>
#include <vector>
#include <windows.h>
#include <Mmsystem.h>
//these two headers are already included in the <Windows.h> header
#pragma comment(lib, "Winmm.lib")
#include "Jucator.h"
#include "Dungeons.h"


class START : public JUCATOR , public DUNGEONS
{
public:
    START();
    virtual ~START();

    void intro();

};
#endif