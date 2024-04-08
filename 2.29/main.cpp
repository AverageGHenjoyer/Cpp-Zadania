#include <iostream>
/*Utwórz funkcję obliczającą wartość funkcji liniowej dla podanego x i podanych
współczynników (wszystko double). Następnie utwórz losową tablicę dwuwymia-
rową [100] [2] (sto wierszy, dwie kolumny) i potraktuj wiersz jak punkt w układzie
współrzędnych. Punkty to losowe liczby z zakresu od –10 do 10 z dokładnością
do jednego miejsca po przecinku. Dla funkcji liniowej 2x+3 sprawdź, które z punk-
tów są nad jej wykresem, które są pod wykresem, a które leżą na nim. Podaj
statystykę, ile punktów leży pod wykresem funkcji, ile leży nad nim i ile na linii
utworzonej przez ten wykres. Jeżeli Twój algorytm jest dobry, to dla funkcji
2x+3 podane punkty:
punkty = { {0,1},{1,10},{2,7} };
będą leżały: jeden nad wykresem funkcji liniowej, jeden pod nim, jeden na wy-
kresie.*/
double linear_func_calc(double a, double b, double x){
    return a*x + b;
}

int main(){
    srand(time(nullptr));
    double above_func{}, under_func{}, inline_func{}; 

    double tab[100][2];
    for(int i {}; i < 100; i++){
        for (int j {}; j < 2; j++){
            tab[i][j] = (rand() % 201) / 10.0 - 10.0;
        }
    }
    for(int i {}; i < 100; i++){
        if(linear_func_calc(tab[i][0], tab[i][1], i) > linear_func_calc(2, 3, i))
            above_func++;
        
        else if(linear_func_calc(tab[i][0], tab[i][1], i) < linear_func_calc(2, 3, i)) 
            under_func++;
        else 
            inline_func++;
    }
    std::cout << "\n~~~STATYSTYKA~~~\n\tpowyżej wykresu jest " << above_func << " punktów\n\t"
              << "poniżej wykresu jest " << under_func << " punktów\n\t"
              << "a na wykresie leży " << inline_func << " punktów\n"
              << "~~~Dziękujemy za uwagę!:)~~~\n"; 

}