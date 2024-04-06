#include <iostream>
#include <vector>
/*
Wypełnij wektor losowymi liczbami całkowitymi, następnie wszystkie liczby
parzyste wyzeruj, a nieparzystym zmień znak, po czym wyświetl ten wektor od
tyłu (od elementu ostatniego do pierwszego). Ilość liczb w wektorze ma być
również losowa: od 10 do 100 włącznie, a same liczby — dowolne.
*/
int main(){
    srand(time(nullptr));
    int random_number = rand() % 91 + 10;
    std::vector<int> v;
    for(size_t i {}; i < random_number; ++i){
        v.push_back(rand());
    }
    for(int &k : v){
        if(k%2==0) {
            k=0;
        }
        else{
            k = -k;
        }
    }
    std::cout << "Wylosowano liczbę " << random_number << "\n" << "Wyświetlam wektor od tyłu:\n";
    for(int i {(random_number-1)}; i>=0; --i){
        std::cout << v[i] << " ";
    }
}