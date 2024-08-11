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
    auto line = new DrawAbleObject(0,20,5,1280);
    line->addToScene(0);
    line->mTextureManager.setTextureIndex(1);

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
    EngineBase::addTexture("BLACK",1,0);
    EngineBase::addTexture("WHITE",1,1);
}
