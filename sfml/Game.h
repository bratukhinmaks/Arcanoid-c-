#ifndef GAME_H_
#define GAME_H_

#include <SFML/Graphics.hpp>
#include "BlockField.h"

class Game
{
private:
    static Ball * ball;
    static Paddle * paddle;


public:
    Game() = delete;
    static void createBall(const Ball & bll) { ball = new Ball(bll); }
    static void createPaddle(const Paddle & padd) { paddle = new Paddle(padd); }
    static bool Update(float deltaTime, BlockField & blocksField);
    static void Draw(sf::RenderWindow & window);
};

#endif // GAME_H_
