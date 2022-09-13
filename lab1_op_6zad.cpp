//интернекка корбутум тугу да сатаабаппын иьин
#include <iostream>
using namespace std;
int main()
{
    int a = 0, b = 0;
    char simvol;
    cin >> a >> simvol >> b;
    switch (simvol)
    {
    case '+':
        cout << a + b << endl;
        break;
    case '-':
        cout << a - b << endl;
        break;
    default:
        break;
    }
}