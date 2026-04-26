#ifndef SCENEMAIN_H
#define SCENEMAIN_H

#include "Scene.h"

class SceneMain : public Scene
{
public:
    SceneMain();
    ~SceneMain();
    void init() override;
    void update() override;
    void render() override;
    void handleEvents(SDL_Event *event) override;
    void clean() override;
};

#endif