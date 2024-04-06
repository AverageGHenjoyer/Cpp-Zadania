#include <iostream>
#include <vector>
/*
Utwórz pętlę, która losuje liczbę z zakresu od 1 do 1000 włącznie, ale po każ-
dym kroku zmienia zakres losowania od ostatnio wylosowanej liczby do 1000
włącznie. Pętla przerywa się, gdy wylosujesz 1000. Przykładowo, pierwsze lo-
sowanie jest z zakresu <1;1000> i np. wypada 200. Zatem drugie losowanie jest
z zakresu <200;1000> i np. wypada 254. Zatem trzecie losowanie ma być doko-
nane z zakresu <254;1000> itd. Wylosowane liczby mają być zwracane w wek-
torze przez funkcję
*/

void returnthousand(std::vector<int> &v){
    int rand_num;
    int helper{};
    while(rand_num != 1000){
        rand_num = rand() % (1000-helper) + 1;
        rand_num += helper;
        v.push_back(rand_num);
        helper = rand_num;
    }
}
int main(){
    srand(time(nullptr));
    std::vector<int> v;
    returnthousand(v);
    for(const auto &k : v){
        std::cout << k << " ";
    }
}