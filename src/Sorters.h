//
// Created by Peter Ivony on 15.10.21.
//

#ifndef SORTINGALGO_SORTERS_H
#define SORTINGALGO_SORTERS_H

#include <time.h>

#include "Functions.h"

class Sorters {
public:

    static void bubbleSort(std::vector<sf::RectangleShape>& bars, sf::RenderWindow& window, sf::Time t);
    static void selectionSort(std::vector<sf::RectangleShape>& bars, sf::RenderWindow& window, sf::Time t);

};


#endif //SORTINGALGO_SORTERS_H
