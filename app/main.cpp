#include <iostream>

#include <Sorters.h>

int main()
{
    sf::RenderWindow window(sf::VideoMode(1080, 720), "Sorting Algo");

    // =========== Can be modified ===========
    const int num_of_bars = 60;
    sf::Color bar_color = sf::Color(125,0,0);
    std::srand(static_cast<int>(time(NULL)));
    sf::Time speed = sf::milliseconds(0);
    const size_t mix_am = 5;
    // =======================================


    int bar_width{static_cast<int>(window.getSize().x / num_of_bars)};
    int bar_height;

    std::vector<sf::RectangleShape> bars;

    //Adding bars to sort
    for (size_t i = 0; i < num_of_bars; ++i){
        bar_height = (window.getSize().y / num_of_bars) * (i+1);
        sf::RectangleShape sh(sf::Vector2f(bar_width, bar_height));
        sh.setFillColor(bar_color);
        bars.push_back(sh);
    }

    Functions::shuffleVector(bars, mix_am);

    //Saving shuffled vector for reset
    std::vector<sf::RectangleShape> reset_bars(bars);

    while (window.isOpen())
    {
        sf::Event evnt;
        while (window.pollEvent(evnt))
        {
            switch(evnt.type) {

                case sf::Event::Closed:
                    window.close();
                    break;

                case sf::Event::Resized:
                    std::cout << "Resolution has been changed!\nNew size is: " << evnt.size.width << "x" << evnt.size.height << std::endl;
                    break;

                case sf::Event::TextEntered:
                    if (evnt.text.unicode == 98){
                        printf("Bubblesort key pressed.\n");
                        sf::Clock timer;
                        Sorters::bubbleSort(bars, window, speed);
                        std::cout << "The sorting algorithm took " << timer.getElapsedTime().asSeconds() << " seconds to run." << std::endl;
                    } else if (evnt.text.unicode == 115) {
                        printf("Selectionsort key pressed.\n");
                        sf::Clock timer;
                        Sorters::selectionSort(bars, window, speed);
                        std::cout << "The sorting algorithm took " << timer.getElapsedTime().asSeconds() << " seconds to run." << std::endl;
                    } else if (evnt.text.unicode == 114) {
                        bars = reset_bars;
                        window.clear();
                        Functions::drawRectangles(bars,window);
                        window.display();
                        printf("Vector reset.\n");
                    } else if (evnt.text.unicode == 109) {
                        Functions::shuffleVector(bars, mix_am);
                        std::cout << "Shuffled vector." << std::endl;
                        window.clear();
                        Functions::drawRectangles(bars,window);
                        window.display();
                    } else if (evnt.text.unicode < 128)
                        printf("%i", evnt.text.unicode);
                    break;
            }

        }

        //window.draw(bar);
        Functions::drawRectangles(bars,window);

        window.display();
    }

    return 0;
}