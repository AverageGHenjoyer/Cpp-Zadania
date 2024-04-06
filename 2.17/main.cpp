#include <iostream>

void draw_chessboard(int &given_number)
{
    std::cout << "Dano liczbę: " << given_number << "\n";
    for (int i{}; i < given_number; i++)
    {
        for(int j{}; j < given_number; j++){
            if((j % 2 == 0 && i % 2 == 0) or (j % 2 != 0 && i % 2 != 0)){
                std::cout << "#";
            }
            else{
                std::cout << " ";
            }
        }
        std::cout << "\n";
    }
}

int main()
{
    srand(time(nullptr));
    int random = rand() % 8 + 5;
    int num = 5;
    draw_chessboard(num);
}