#include <iostream>
#include <iomanip>

bool is_even(int num){
    if(num & 1 == 1){return false;}
    else {return true;}
}

int main(){
    int number = 11111111;
    std::cout << "Czy parzysta jest " << number << "? " << std::boolalpha << is_even(number);
}