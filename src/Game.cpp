#include "Game.h"

Game::Game()
{
}

Game::~Game()
{
}

void Game::init()
{
}

void Game::run()
{
    while (isRunning)
    {
    }
}

void Game::update()
{
}

void Game::clean()
{
}

void Game::changeScene(Scene *scene)
{
    if (currentScene != nullptr)
    {
        currentScene->clean();
        delete currentScene;
    }
    currentScene = scene;
    currentScene->init();
}
