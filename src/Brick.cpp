#include "Brick.h"

Brick::Brick(sf::Vector2f const & position) : BreakoutEntity(position) {
    m_rectangle = sf::RectangleShape{sf::Vector2f{brickWidth, brickHeight}};
    m_rectangle.setFillColor(sf::Color{(int) position.x / 3, (int) position.x / 3, 100}); //TODO replace with static_cast

    m_rectangle.setPosition(m_position);
}

void Brick::update() {
}

void Brick::render(sf::RenderWindow & renderWindow) {
    renderWindow.draw(m_rectangle);
}

void Brick::setPosition(sf::Vector2f const & position) {
    m_position = position;
}
