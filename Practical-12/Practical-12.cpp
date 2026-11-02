#include <iostream>
namespace A
{
int add(int a, int b)
{
return a + b;
}
void display()
{
std::cout << "Addition using namespace A: " << add(5, 4) << "\n";
}
}
namespace B
{
int add(int a, int b)
{
return a + b;
}
void display()
{
std::cout << "Addition using namespace B: " << add(10, 20) << "\n";
}
}
int main()
{
A::display();
B::display();
return 0;
}
