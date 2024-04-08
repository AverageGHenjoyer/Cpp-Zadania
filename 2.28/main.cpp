#include <iostream>

double linear_func_calc(double a, double b, double x){
    return a*x + b;
}

int main(){
    double a {3.5}, b{5}, x{555};
    std::cout << "Wartość y w punkcie x=" << x << " wynosi: " << linear_func_calc(a,b,x);
}