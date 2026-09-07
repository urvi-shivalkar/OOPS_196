#include<iostream>
using namespace std;
class complex
{
    float real, img;
    public:
    void accept(float r, float i)
{
    real = r; img = i;
}
 void display()
{
    if (img > 0)
        cout << real << "+i" << img << endl;
    else if (img < 0)
        cout << real << "-i" << -img << endl;
    else
        cout << real << endl;
}
complex operator+(complex b)
{
    complex sum;
    sum.real=real+b.real;
    sum.img=img+b.img;
    return sum;
}
complex operator-(complex b)
{
    complex sub;
    sub.real=real-b.real;
    sub.img=img-b.img;
    return sub;
}
complex operator*(complex b)
{
    complex prod;
    prod.real = real * b.real - img * b.img;
    prod.img = real * b.img + img * b.real;
    return prod;
}
complex operator/(complex b)
{
    complex quo;
    double denominator = b.real *b.real + b.img * b.img;
    quo.real = (real * b.real + img * b.img) / denominator;
    quo.img  = (img * b.real - real * b.img) / denominator;
    return quo;
}
};
int main()
{
    complex c1,c2,c3;
    c1.accept(5,9);
    c1.display();
    c2.accept(1,3);
    c2.display();
    c3=c1+c2;
    c3.display();
    c3=c1-c2;
    c3.display();
    c3=c1*c2;
    c3.display();
    c3=c1/c2;
    c3.display();
}
