#include <iostream>
// Wylosuj i wyświetl liczbę ułamkową (typ double) w zakresie 0 do 1 włącznie z maksymalnie trzema miejscami po przecinku. Skorzystaj z funkcji rand().
int main(){
    srand(time(nullptr));
    double random_num = (rand() % 1001) /1000.0; 
    std::cout << "Wylosowana liczba to: " << random_num;
}