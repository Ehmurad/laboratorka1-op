#include<iostream>
using namespace std;
int main()
{
    int n = 0;
    cin >> n;
    cout << (n / 100000 % 10000) % 10 << endl;
}