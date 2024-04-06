#include <iostream>
/*Dla losowego całkowitego n z zakresu <5;12> narysuj „kwadrat” składający się
z n wierszy i n kolumn, którego krawędź to znak '#', a wnętrze jest puste (spacje).*/
int main(){
    srand(time(nullptr));
    int random = rand() % 8 + 5;
    std::cout << "Wylosowano liczbę: " << random << "\n";
    for(int i {}; i < random; i++){
        for(int j {}; j < random; ++j){
            if(i == 0 || i == (random-1) || j == 0 || j == (random-1)){
                std::cout << "#";
            }else{
                std::cout << " ";
            }
        }
        std::cout << "\n";
    }
}