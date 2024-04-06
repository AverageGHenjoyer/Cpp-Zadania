#include <iostream>
/*Dla losowego całkowitego n z zakresu <5;12> narysuj „trójkąt prostokątny”.*/
int main(){
    srand(time(nullptr));
    int random = rand() % 8 + 5;
    std::cout << "Wylosowano liczbę: " << random << "\n";
    for(int i {}; i <= random; i++){
        for(int j {}; j < i; j++){
            std::cout << "#";
        }
        std::cout << "\n";
    }
std::cout << "\n";
    for(int i {}; i <= random; i++){
        for(int j {random}; j > i; j--){
            std::cout << "#";
        }
        std::cout << "\n";
    }

}