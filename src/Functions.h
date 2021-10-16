#ifndef SORTINGALGO_FUNCTIONS_H
#define SORTINGALGO_FUNCTIONS_H

#include <SFML/Graphics.hpp>
#include <vector>
#include <cstdlib>

class Functions {

public:

    static void shuffleVector(std::vector<sf::RectangleShape>& bars, const size_t mix_am);
    static void drawRectangles(std::vector<sf::RectangleShape>& bars, sf::RenderWindow& window);

};


#endif //SORTINGALGO_FUNCTIONS_H
