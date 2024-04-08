#include <iostream>

void round(double &num){
    double temp = num;
    temp = num - int(num);
    num += temp;

}

int main(){
    double liczba = 3.6;
    std::cout << "Podwojenie liczby po przecinku\n\tprzed: " << liczba; 
    round(liczba);
    std::cout << "\n\tpo: " << liczba; 
}