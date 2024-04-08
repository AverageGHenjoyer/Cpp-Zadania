#include <iostream>

double abs_val(double num){
    if(num < 0) return -num;
    else return num;
}

int main(){
    double number {-3.14};
    std::cout << "Wartość bezwzględna z " << number << " to " << abs_val(number);
}