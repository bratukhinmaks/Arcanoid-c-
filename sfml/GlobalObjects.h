#ifndef GLOBALOBJECTS_H_
#define GLOBALOBJECTS_H_

#include <SFML/Graphics.hpp>

class GlobalObjects
{
public:
    GlobalObjects() = delete;
    static const float windowWidth, windowHeight;
    static sf::RenderWindow window;
};

#endif // GLOBALOBJECTS_H_
