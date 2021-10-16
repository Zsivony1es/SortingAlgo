#include "Sorters.h"

void Sorters::bubbleSort(std::vector<sf::RectangleShape>& bars, sf::RenderWindow& window, sf::Time t){
    window.clear();
    Functions::drawRectangles(bars, window);

    bool swap{true};
    while (swap) {
        swap = false;
        for (size_t i{0}; i < bars.size()-1; ++i){
            if (bars[i].getSize().y > bars[i+1].getSize().y){
                swap = true;
                window.clear();

                std::swap(bars[i],bars[i+1]);

                Functions::drawRectangles(bars,window);
                window.display();
                sf::sleep(t);
            }
        }
    }

    //Color the bars green
    for (auto& sh : bars)
        sh.setFillColor(sf::Color(0,200,0));
    window.display();

}

void Sorters::selectionSort(std::vector<sf::RectangleShape>& bars, sf::RenderWindow& window, sf::Time t){
    window.clear();
    Functions::drawRectangles(bars, window);

    for (size_t i{0}; i < bars.size(); ++i){

        auto min_rect = bars[i];
        for (size_t j{i}; j < bars.size(); ++j){
            if (bars[j].getSize().y < bars[i].getSize().y){
                window.clear();

                std::swap(bars[i],bars[j]);

                Functions::drawRectangles(bars,window);
                window.display();
                sf::sleep(t);
            }
        }
    }

    for (auto& sh : bars)
        sh.setFillColor(sf::Color(0,200,0));
    window.display();

}