#include <iostream>

auto potega(double liczba, int potega){
    if(potega < 0){
        potega = -potega;
        liczba = 1.0/liczba;
    }
auto wynik = liczba;
    for(auto i {1}; i < potega; i++){
        wynik *= liczba;
    }
    return wynik;
}

auto ptg_rekurencyjnie(double liczba, int potega){
    if(potega == 1) return liczba;
    else{
        return liczba * ptg_rekurencyjnie(liczba, potega-1);
    }
}

int main(){
    int first = 3;
    int second = 3;
    std::cout << first << " do potęgi " << second << ": " << potega(first,second) << "\n";
    std::cout << first << " do potęgi " << second << ": " << ptg_rekurencyjnie(first,second);
}