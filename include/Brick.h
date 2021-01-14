#ifndef __BRICK__H__
#define __BRICK__H__

#include <SFML/Graphics.hpp>
#include "BreakoutEntity.h"

class Brick : public BreakoutEntity {
    private:
        sf::RectangleShape m_rectangle;
        sf::Clock m_clock;

        int m_life;

        static constexpr float brickWidth{800.f / 8};
        static constexpr float brickHeight{20.f};

    public:
        Brick(sf::Vector2f const & position);
        void update() override;
        void render(sf::RenderWindow & renderWindow) override;
        void setPosition(sf::Vector2f const & position);
};

#endif
