#include "Player.hpp"


Player::Player()
{
    shape.setSize({40.f, 40.f});
    shape.setFillColor(sf::Color::Green);

    shape.setPosition({400.f, 300.f});

    speed = 1.f;
}


void Player::update(){
    
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Z)){
        shape.move({0.f, -speed});
    }

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S)){
        shape.move({0.f, speed});
    }

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Q)){
        shape.move({-speed, 0.f});
    }

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D)){
        shape.move({speed, 0.f});
    }
}




void Player::draw(sf::RenderWindow& window)
{
    window.draw(shape);
}