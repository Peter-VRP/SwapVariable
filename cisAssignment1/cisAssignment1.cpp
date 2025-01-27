#include <iostream>
using namespace std;

int main()
{
    int var1 = 5;
    int var2 = 10;
    int holder = 0;

    holder = var1;
    var1 = var2;
    var2 = holder;

    cout << var1 << " " << var2;
    return 0;
}