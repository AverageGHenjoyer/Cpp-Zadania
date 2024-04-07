#include <iostream>

int main(){
    srand(time(nullptr));

    int random = rand() % 8 + 5;
    int rzad = rand() % (random-1) + 2;
    std::cout << "Wylosowano: \n\trandom: " << random << "\n\trzad i kolumna: " << rzad << "\n";
    for(int i {1}; i <= random; i++){
        for(int j {1}; j <= random; j++){
            if(j == rzad && i == rzad){
                std::cout << "@";
            }else
                std::cout << "#";
        }
        std::cout << "\n";
    }
    
    std::cout << "\n";

    for(int i {1}; i <= random; i++){
        for(int j {1}; j <= random; j++){
            if(j == rzad && i == rzad){
                std::cout << "@";
            }else if((i == 1 || i == random) || (j == 1 || j == random))
                std::cout << "#";
            else 
            {
                std::cout << " ";
            }
        }
        std::cout << "\n";
    }


}