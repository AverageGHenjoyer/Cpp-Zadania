#include <iostream>

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