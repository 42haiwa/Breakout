#include <SFML/Graphics.hpp>
#include "Player.h"

int main(void) {
	sf::RenderWindow window{sf::VideoMode(800, 600), "Breakout", sf::Style::Close};
	auto player = Player{sf::Vector2f{100, 100}};

	// window.setVerticalSyncEnabled(true);

	while (window.isOpen()) {
		sf::Event event;

		while (window.pollEvent(event)) {
			switch (event.type) {
				case sf::Event::Closed:
					window.close();
					break;

				case sf::Event::KeyReleased:
					if (event.key.code == sf::Keyboard::Escape) {
						window.close();
					}
					break;

				default:
					break;
			}
		}
		
		window.clear();
		player.update();
		player.render(window);
		window.display();
	}

	return 0;
}
