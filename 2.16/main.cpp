#include <iostream>
/*Pobierz lub wylosuj liczbę całkowitą n z zakresu <5;12>. Następnie dla tego n
narysuj „kwadrat” złożony ze znaków #, który ma n wierszy i n kolumn (czyli n
znaków w wierszu). Na przykład dla n=5:
#####
#####
#####
#####
#####
Zrób z tego funkcję rysującą dla podanej liczby i znaku.*/
void draw_hash(int &given_number){
    std::cout << "Dano liczbę: " << given_number << "\n";
    for(int i{}; i < given_number; i++){
        for(int j {}; j < given_number; j++){
            std::cout << "#";
        }
        std::cout << "\n";
    }
}

int main(){
    srand(time(nullptr));
    int random = rand() % 8 + 5;
    draw_hash(random);
    
}