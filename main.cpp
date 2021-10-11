//using an inline function
#include <iostream>
#include <ctime>
using namespace std;

inline double square(double x) { return x * x; }   //inline function
int main()
{
    clock_t start_time, finish_time;
    double a, b;
    start_time = clock();
    a = square(5);
    b = square(67);
    finish_time = clock();

    cout << "a=" << a << "   b=" << b << endl;
    cout << (double)(finish_time - start_time) << endl;   //display times that called use
    // system("pause");
    return 0;
}