#include "Game.hpp"


Game::Game()
    : window(sf::VideoMode({800, 600}), "MiniAdventure"){
}


void Game::run(){
    while (window.isOpen()){
        processEvents();
        update();
        render();
    }
}
void Game::processEvents(){
    while (const std::optional event = window.pollEvent()){
        if (event->is<sf::Event::Closed>()){
            window.close();
        }
    }
}
void Game::update(){
    player.update();
}
void Game::render(){
    window.clear();
    player.draw(window);
    window.display();
}