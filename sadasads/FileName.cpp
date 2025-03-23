#include <iostream>
#include <locale>
#include <string>
using namespace std;


int sum(int& a, int b = 10, int c = 5)
{
    a = 5;
    return a + b + c;
}

int main()
{
    int a = 1, b = 2, c = 3;
    a = sum(a, b, c);
    cout << a;
    return 0;
}