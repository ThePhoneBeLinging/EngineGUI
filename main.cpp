#include "EngineBase.h"
#include "EngineGUI.h"

int main()
{
    auto thread = std::thread(EngineGUI::launch);
    EngineBase::startGUI();
    thread.join();
    return 0;
}
