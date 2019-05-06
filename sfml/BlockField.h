#ifndef BLOCKSFIELD_H_
#define BLOCKSFIELD_H_

#include <list>
#include "Ball.h"

class BlockField
{
private:
    std::list<Block> blocks;

public:
    BlockField(const sf::Vector2f & size, const sf::Vector2f & position, const sf::Color & color, int columns, int rows);

    void Update(Ball & ball);

    void Draw(sf::RenderWindow & window);
};

#endif // BLOCKSFIELD_H_
