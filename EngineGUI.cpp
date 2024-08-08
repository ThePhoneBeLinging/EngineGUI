//
// Created by Elias Aggergaard Larsen on 01/08/2024.
//

#include "EngineGUI.h"

#include <DrawAbleObject.h>
#include <EngineBase.h>
#include <iostream>

void EngineGUI::launch()
{
    std::cout << "Appliation Starting" << std::endl;
    EngineGUI::createUI();
    while (!EngineBase::shouldAppClose())
    {
    }
}

void EngineGUI::createUI()
{
    auto drawAble = new DrawAbleObject(20,20,5,800);
    drawAble->addToScene(0);
}

void EngineGUI::loadLocalTextures()
{
    EngineBase::addTexture("",0,0);
}
