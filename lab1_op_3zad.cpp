#include <iostream>
using namespace std;
int main()
{
    double r = 0;
    cin >> r;
    const double pi = 3.14;
    cout << ((((r+r)*(r+r))-(pi*r*r))/4)+(((r+r)*(r+r)))/4<< endl;
}