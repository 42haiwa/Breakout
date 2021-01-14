#include "Ball.h"

Ball::Ball(sf::Vector2f const & position) : BreakoutEntity(position) {
    m_rectangle = sf::RectangleShape{sf::Vector2f{ballSize, ballSize}};
    m_rectangle.setFillColor(sf::Color::White);

    m_rectangle.setPosition(m_position);
}

void Ball::update() {
}

void Ball::render(sf::RenderWindow & renderWindow) {
    renderWindow.draw(m_rectangle);
}
