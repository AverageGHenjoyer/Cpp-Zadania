#include <iostream>

double round(double num){
    double temp = num;
    if(num > 0){
        temp = num - int(num);
        if(temp >= 0.50){
            temp = 1.0 - temp;
            return num + temp;
        }else if(temp == 0){
            return num;
        }else{
            return num - temp;
        }
    }else if(num == 0) return 0;
    else{
        temp = num - int(num);
        if(temp <= -0.50){
            temp = -1.0 - temp;
            return num + temp;
        }else if(temp == 0){
            return num;
        }else{
            return num - temp;
        }
    }
}

int main(){
    double liczba = 323122.63;
    std::cout << "Zaokraglenie liczby " << liczba << " to " << round(liczba); 
}