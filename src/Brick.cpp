#include "Brick.h"

Brick::Brick(sf::Vector2f const & position) : BreakoutEntity(position) {
    m_rectangle = sf::RectangleShape{sf::Vector2f{brickWidth, brickHeight}};
    m_rectangle.setFillColor(sf::Color::Red);

    m_position = sf::Vector2f{0, 0};

    m_rectangle.setPosition(m_position);
}

void Brick::update() {
}

void Brick::render(sf::RenderWindow & renderWindow) {
    renderWindow.draw(m_rectangle);
}
