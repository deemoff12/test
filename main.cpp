#include <SFML/Graphics.hpp>
#include <iostream>
#include <cmath>


int main()
{
    sf::ContextSettings settings;
    settings.antialiasingLevel = 16;

    sf::RenderWindow window(sf::VideoMode(800, 600), "My window" , sf::Style::Default, settings);


    // Start the game loop
    while (window.isOpen())
    {
        sf::CircleShape square(20.f , 4);
        float squaresize = 20.f;

        square.setFillColor(sf::Color::Red);
        square.setOutlineThickness(-1);
        square.setOutlineColor(sf::Color::Black);
        window.clear(sf::Color::Green);
        square.rotate(45);
        for (int i = 0; i < 10 ; ++i) {
            for (int j = 0; j < 10 ; ++j) {
                square.setPosition(50 + i*(squaresize*2)/pow(2, 0.5), 50 + j*(squaresize*2)/pow(2, 0.5));
                window.draw(square);
            }

        }
        sf::Event event;
        while (window.pollEvent(event))
        {
            // Close window : exit
            if (event.type == sf::Event::Closed)
                window.close();
        }





        window.display();
    }

    return EXIT_SUCCESS;
}


