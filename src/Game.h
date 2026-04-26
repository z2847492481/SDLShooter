#ifndef GAME_H
#define GAME_H

#include "Scene.h"

class Game
{
public:
    Game();
    ~Game();
    void run();
    void init();
    void update();
    void clean();
    void changeScene(Scene *scene);

private:
    bool isRunning = true;
    Scene *currentScene = nullptr;
};

#endif
