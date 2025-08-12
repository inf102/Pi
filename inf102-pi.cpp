////////////////////////////////
// pi c++ Ver
// inf102 S.H
////////////////////////////////

#include <iostream>
#include <time.h>
#include <random>
#include <chrono>
#include <windows.h>

using namespace std;

int main() {

    double X, Y;
    long long c = 0;

    std::random_device rd;
    std::default_random_engine eng(rd());
    std::uniform_real_distribution<double> distr(0.1, 1.0);

    SYSTEMTIME lt;

    double long g = 0;
    long long f;
    long long n;

    cout << "Monte Carlo method for calculating pi. (c)inf102 2025.\r\nloop 1,000,000,000\r\n\r\n";

    f = 1000000000L;
    GetLocalTime(&lt);

    printf("Start %02d:%02d:%2d\n", lt.wHour, lt.wMinute, lt.wSecond);
    for (n = 0; n < f; ++n) {
        X = distr(eng);
        Y = distr(eng);

        if ((X * X + Y * Y) < 1.0) c++;
            // g= (4.0 * c / n);
            // std::cout << n <<" " << g << "\n";
        }

        GetLocalTime(&lt);
        printf("End   %02d:%02d:%2d", lt.wHour, lt.wMinute, lt.wSecond);

        g = (4.0 * c / f);
        std::cout << "\nabout Pi " << g << "\n\n";


    int a;
    std::cin >> a;

}
