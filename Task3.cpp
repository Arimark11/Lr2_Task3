#include <iostream>
#include <iomanip>

int main(){

    double b1 = 0;
    double q = 0;
    int n = 8;

    std::cin >> b1;

    q = 1.0 / (n+1);

    double S = b1 * ( n + 1 ) / n;

    std::cout << std::setprecision(20) << S << std::endl;

    return 0;
}