#include <iostream>
#include <string>

void printCard(char card, char suit)
{
    system("cls");
    for (int i = 1; i <= 14; i++) {
        for (int j = 1; j <= 14; j++) {
            if (i == 1 || i == 14)
                std::cout << "*";
            else if (i == 2 && j == 3)
            {
                std::cout << suit;
            }
            else if (i == 13 && j == 12)
            {
                std::cout << suit;
            }
            else if (i == 7 && j == 7)
            {
                if (card == '1')
                {
                    std::cout << 10;
                    j++;
                    continue;
                }
                std::cout << card;
            }
            else if (j == 1 || j == 14) {
                std::cout << "*";
            }
            else
                std::cout << " ";
        }
        std::cout << std::endl;
    }
}
