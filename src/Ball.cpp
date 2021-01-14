#include "Ball.h"

#include <iostream>

Ball::Ball(sf::Vector2f const & position) : BreakoutEntity(position) {
    m_rectangle = sf::RectangleShape{sf::Vector2f{ballSize, ballSize}};
    m_rectangle.setFillColor(sf::Color::White);

    m_rectangle.setPosition(m_position);

    m_ballSpeedMove = 600.f;
}

void Ball::update() {
    sf::Time dt = m_clock.restart();
    move(dt);
}

void Ball::render(sf::RenderWindow & renderWindow) {
    renderWindow.draw(m_rectangle);
}

void Ball::move(sf::Time dt) {
    if (m_ballSpeedMove != 600 || m_ballSpeedMove != -600) m_ballSpeedMove = 600.f;
    std::cout << m_ballSpeedMove << std::endl;

    m_position.x += m_ballSpeedMove * dt.asSeconds() * cos((285) / 180.f * M_PI);
    m_position.y += m_ballSpeedMove * dt.asSeconds() * sin((285) / 180.f * M_PI);

    if (m_position.x < 0) m_ballSpeedMove = -m_ballSpeedMove;
    if (m_position.x > 800) m_ballSpeedMove = -m_ballSpeedMove;
    if (m_position.y < 0) m_ballSpeedMove = -m_ballSpeedMove;
    if (m_position.y > 600) m_ballSpeedMove = -m_ballSpeedMove;

    m_rectangle.setPosition(m_position);
}
