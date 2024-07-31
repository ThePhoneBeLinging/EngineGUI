#include "EngineBase.h"
#include "EngineGUI.h"

int main()
{
    auto thread = std::thread(EngineGUI::launch);
    EngineBase::addTexture("dean",3,2);
    EngineBase::startGUI();
    return 0;
}
