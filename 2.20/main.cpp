#include <iostream>
#include <string>

void triangle(char znak, int n){
    for(int w = 1; w <= n; w++){
        std::cout << std::string(n - w, ' ');
        std::cout << std::string(2 * w - 1, znak) << "\n";
    }
    
}
void diamond(char znak, int n){
    for(int w = 1; w <= n; w++){
        std::cout << std::string(n - w, ' ');
        std::cout << std::string(2 * w - 1, znak) << "\n";
    }
    
    for(int w = n; w >= 1; w--){
        std::cout << std::string(n - w, ' ');
        std::cout << std::string(2 * w - 1, znak) << "\n";
    }
}

int main(){
    int r=5;
    //do { r = rand() % 3 + 7; } while (r % 2 == 0);

    triangle('#', r);
    std::cout << "\n";
    diamond('#', r);
    
}