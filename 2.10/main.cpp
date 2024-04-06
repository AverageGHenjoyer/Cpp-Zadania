#include <iostream>
#include <cwchar>
// Wylosuj liczbę całkowitą L między 20 a 30 włącznie oraz pobierz z klawiatury znak Z. Wyświetl L-krotnie znak Z.
int main(){
    srand(time(nullptr));
    int random = (rand() % 11) + 20;
    std::cout << "Wylosowano " << random << ".\nPodaj znak\n";
    wchar_t z;
    std::wcin >> z;
    for(size_t i {}; i < random; ++i){
        std::wcout << z;
    }
}