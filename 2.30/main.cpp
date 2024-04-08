#include <iostream>
#include <vector>
#include <ctime>
/*Losuj liczby całkowite z przedziału <1;100> tak długo, aż suma trzech ostatnich
liczb będzie większa lub równa 80 i mniejsza lub równa 90. Podaj ilość wyloso-
wanych liczb. Wylosowane liczby wkładaj na koniec wektora, o ile wkładana
liczba jest większa lub równa ostatniej w wektorze. Pokaż wektor. */
const int NUM_OF_ITERATIONS = 50;

int main(){
    srand(time(nullptr));
    int random;
    int num_of_times{};
    std::vector<int> v;
    int sum;
    do{
        random = rand() % 100 + 1;
        num_of_times++;
        std::cout << random << "\n";
        if(v.empty()){
            v.push_back(random);
            continue;
        }
        if(v.back() > random) continue;
        if(v.size() > 1){
        v.push_back(random);
        auto it = v.end() - 3;
        sum = 0;
        for(; it != v.end(); it++){
            sum += (*it);
            if(sum >= 80 && sum <=90)
            break;
        }}

    if(num_of_times > NUM_OF_ITERATIONS) break;
    if(sum > 90) break;

    }while(true);

    std::cout << "STATYSTYKI:\n\t" << "końcowa suma: " << sum << "\n\tilość wylosowanych liczb: " << num_of_times
              << "\nkońcowy wektor wygląda tak:\n";
    for(const auto k : v){
        std::cout << k << " ";
    }
}