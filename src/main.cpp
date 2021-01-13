#include <SFML/Graphics.hpp>

int main(void) {
	sf::RenderWindow window{sf::VideoMode(800, 600), "Breakout", sf::Style::Close};

	window.setVerticalSyncEnabled(true);

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

			window.clear();
			window.display();
		}
	}

	return 0;
}
