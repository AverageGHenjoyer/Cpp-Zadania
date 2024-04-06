#include <iostream>
// Pobierz z klawiatury dwie liczby całkowite a, b. Utwórz funkcję zwracającą liczbędouble, gdzie a to część całkowita, a wartość bezwzględna z b to część ułamkowa zwracanej liczby. Na przykład dla 45 i –11 zwróć 45.11.
double get_modified_number(int &a, int &b){
    double A = static_cast<double>(a); // works but looks pretty ugly
    double B = static_cast<double>(b);
    if(B < 0) B = -B;
    while(B > 1){
        B /= 10.0;
    }
    if(A < 0) 
        return A - B;
    else 
        return A + B; 
}

int main(){
    int a, b;
    std::cout << "Podaj dwie liczby całkowite: ";
    std::cin >> a;
    std::cin >> b;
    std::cout << "Końcowa liczba: " << get_modified_number(a, b);
}