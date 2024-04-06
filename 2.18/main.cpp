#include <iostream>

int main(){
    srand(time(nullptr));
    int random = rand() % 8 + 5;
    for(int i {}; i < random; i++){
        for(int j {}; j < random; ++j){
            if(i == 0 || i == (random-1) || j == 0 || j == (random-1)){
                std::cout << "#";
            }else{
                std::cout << " ";
            }
        }
        std::cout << "\n";
    }
}