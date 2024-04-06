#include <iostream>
#include <iomanip>
//Wykorzystuj operator bitowy &, aby sprawdzać, czy liczba nieujemna jest parzysta. Utwórz funkcję sprawdzającą w ten sposób parzystość i zwracającą true/false(parzysta/nieparzysta)
bool is_even(int num){
    return !(num & 1);
}

int main(){
    int number = 11111111;
    std::cout << "Czy parzysta jest " << number << "? " << std::boolalpha << is_even(number);
}