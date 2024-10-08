#include <thread>

#include "EngineBase/EngineBase.h"
#include "EngineGUI.h"

int main()
{
    EngineGUI::loadLocalTextures();
    auto thread = std::thread(EngineGUI::launch);
    EngineBase::startGUI();
    thread.join();
    return 0;
}
