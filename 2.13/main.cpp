#include <iostream>
// Pobierz znak z klawiatury, a następnie wylosuj dwie liczby całkowite a, b w zakresie od 5 do 10 każda. Utwórz funkcję, która otrzyma te wartości jako argumenty i narysuje a wierszy, w których będzie b znaków (znak pobrany z klawiatury na początku). Na przykład dla znaku # i liczb 3 i 8 narysuj trzy wiersze w każdym po osiem znaków #.
void draw(char znak, int &a, int &b){
    for(size_t i {}; i < a; ++i){
        for(size_t j {}; j < b; ++j){
            std::cout << znak;
        }
        std::cout << "\n";
    }
}

int main(){
    srand(time(nullptr));
    int a = (rand() % 6) + 5, b = (rand() % 6) + 5;
    std::cout << "Wylosowano a = " << a << " i b = " << b << "\n";
    char znak;
    std::cout << "Podaj znak: ";
    std::cin >> znak;
    draw(znak, a, b);
    

}