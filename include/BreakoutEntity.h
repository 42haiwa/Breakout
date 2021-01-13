#ifndef __BREAKOUT__ENTITY__H__
#define __BREAKOUT__ENTITY__H__

#include <SFML/Graphics.hpp>

class BreakoutEntity {
    protected:
        sf::Vector2f m_position;
    
    public:
        BreakoutEntity(sf::Vector2f const & position);
        virtual void update() = 0;
        virtual void render(sf::RenderWindow & renderWindow) = 0;
};

#endif
