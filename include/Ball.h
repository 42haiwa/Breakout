#ifndef __BALL__H__
#define __BALL__H__

#include <SFML/Graphics.hpp>
#include "BreakoutEntity.h"

class Ball : public BreakoutEntity {
    private:
        sf::RectangleShape m_rectangle;
        sf::Clock m_clock;

        static constexpr float ballSize{10.f};
        static constexpr float ballSpeedMove{600.f};

    public:
        Ball(sf::Vector2f const & position);
        void update() override;
        void render(sf::RenderWindow & renderWindow) override;
};

#endif
