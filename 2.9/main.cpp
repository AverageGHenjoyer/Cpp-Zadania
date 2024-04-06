#include <iostream>
#include <vector>
#include <iomanip>

int main(){
    srand(time(nullptr));
    std::vector<double> v;
    for(size_t i {}; i < 20; i++){
        double random_num = ((rand() % 2101) / 1000.0) - 1;
        v.push_back(random_num);
    }
    for(const auto& k : v){
        std::cout << k << " ";
    }
    double result {};
    for(const auto& k : v){
        result += k;
    }
    std::cout << std::setprecision(3) <<"\nŚrednia liczb wynosi: " << result/20 << "\n";


    double w[20];
    for(size_t i {}; i < 20; i++){
        double random_num = ((rand() % 2101) / 1000.0) - 1;
        w[i] = random_num;
    }
    for(const auto& k : w){
        std::cout << k << " ";
    }
    double result2 {};
    for(const auto& k : w){
        result2 += k;
    }
    std::cout << std::setprecision(3) <<"\nŚrednia liczb wynosi: " << result2/20;
}