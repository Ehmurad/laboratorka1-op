#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double x = 0;
    cin >> x;
    int a = pow(x, 4), b = pow(x, 3), c = pow(x, 2);
    cout << 2 * a - 4 * b + c + 3 * x + 2 << endl;
}