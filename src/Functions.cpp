#include "Functions.h"

void Functions::shuffleVector(std::vector<sf::RectangleShape>& bars, const size_t mix_am){
    for (size_t i{0}; i < mix_am; ++i)
        for (size_t i{0}; i < bars.size(); ++i)
            std::swap(bars[0],bars[std::rand() % bars.size()]);
}

void Functions::drawRectangles(std::vector<sf::RectangleShape>& bars, sf::RenderWindow& window){
    window.clear();
    for (size_t i{0}; i < bars.size(); ++i){
        bars[i].setPosition( bars[i].getSize().x * i, window.getSize().y-bars[i].getSize().y);
        window.draw(bars[i]);
    }
}