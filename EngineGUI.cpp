//
// Created by Elias Aggergaard Larsen on 01/08/2024.
//

#include "EngineGUI.h"

#include <DrawAbleObject.h>
#include <EngineBase.h>
#include <iostream>

#include "Utility.h"

void EngineGUI::launch()
{
    std::cout << "Appliation Starting" << std::endl;
    createUI();
    while (!EngineBase::shouldAppClose())
    {
    }
}

void EngineGUI::createUI()
{
    auto drawAble = new DrawAbleObject(20,20,50,50);
    auto lamda = [](DrawAbleObject* button)
    {
        std::cout << Utility::getRandomInt(5,10) << std::endl;
        button->deleteObject();
    };
    drawAble->mButton.setOnClick(lamda);
    drawAble->addToScene(0);
}

void EngineGUI::loadLocalTextures()
{
    EngineBase::addTexture("Textures/MissingTexture.png",0,0);
}
