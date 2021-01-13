#ifndef __PLAYER__H__
#define __PLAYER__H__

#include <SFML/Graphics.hpp>
#include "BreakoutEntity.h"

class Player : public BreakoutEntity {
    private:
        sf::RectangleShape m_rectangle;
        sf::Clock m_clock;

        static constexpr float playerWidth{120.f};
        static constexpr float playerHeight{50.f};
        static constexpr float playerSpeedMove{200.f};
    public:
        Player(sf::Vector2f const & position);
        void update() override;
        void render(sf::RenderWindow & renderWindow) override;
        void checkKeyboard(sf::Time dt);
};

#endif
