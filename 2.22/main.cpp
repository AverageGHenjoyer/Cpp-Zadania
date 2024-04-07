#include <iostream>

void triangle(char znak, int n){
    for(int w = 1; w <= n; w++){
        std::cout << std::string(n - w, ' ');
        std::cout << std::string(2 * w - 1, znak) << "\n";
    }
}

int main(){
    int r=5;
    //do { r = rand() % 3 + 7; } while (r % 2 == 0);
    for(int i {}; i < 3; i++)
        triangle('#', r+i);
    
}