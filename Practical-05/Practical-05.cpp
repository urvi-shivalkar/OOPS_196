#include <iostream>
using namespace std;
int add(int a, int b)
{
    return a + b;
}
int add(int x, int y, int z)
{
    return  x + y +z;
}
float add(float m, float n)
{
    return m + n; 
}
int main()
{
    int a, b;
    int x, y, z;
    float m, n;
    cout << "Enter two integers: ";
    cin >> a >> b;
    cout << "Enter three integer values: ";
    cin >> x >> y >> z;
    cout << "Enter 2 decimal values: ";
    cin >> m >> n;
    cout << "Addition of two integers = " << add(a, b) << endl;
    cout << "Addition of three integers = " << add(x, y, z) << endl;
    cout << "Addition of two floats is = " << add(m, n) << endl;
    return 0;
}
