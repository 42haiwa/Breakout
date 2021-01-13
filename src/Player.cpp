#include "Player.h"

Player::Player(sf::Vector2f const & position) : BreakoutEntity(position) {
    m_rectangle = sf::RectangleShape{sf::Vector2f{playerWidth, playerHeight}};
    m_rectangle.setFillColor(sf::Color{100, 250, 50});

    m_position = sf::Vector2f{800 / 2, 580};

    m_rectangle.setPosition(m_position);
}

void Player::update() {
    sf::Time dt = m_clock.restart();
    checkKeyboard(dt);
}

void Player::render(sf::RenderWindow & renderWindow) {
    renderWindow.draw(m_rectangle);
}

void Player::checkKeyboard(sf::Time dt) {
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) {
        m_position.x += playerSpeedMove * dt.asSeconds();
    }

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) {
        m_position.x -= playerSpeedMove * dt.asSeconds();
    }

    m_rectangle.setPosition(m_position);
}
