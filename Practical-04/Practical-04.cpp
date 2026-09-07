#include <iostream>
using namespace std;
class Complex {
    int real, img;
public:
    void accept(int r, int i) {
        real = r;
        img = i;
    }
    void display() {
       
        if (img >= 0) {
            cout << real << "+" << img << "i" << endl;
        } else {
            cout << real << img << "i" << endl;
        }
    }
    Complex operator+ (Complex c) {
        Complex temp;
        temp.real = real + c.real;
        temp.img = img + c.img;
        return temp;
    }
    Complex operator- (Complex c) {
        Complex temp;
        temp.real = real - c.real;
        temp.img = img - c.img;
        return temp;
    }
    Complex operator* (Complex c) {
        Complex temp;
        temp.real = (real * c.real) - (img * c.img);
        temp.img = (real * c.img) + (img * c.real);
        return temp;
    }
    Complex operator/(Complex c) {
        Complex temp;
        int denominator = (c.real * c.real) + (c.img * c.img);
       
        if (denominator == 0) {
            cout << "Error: Division by zero!" << endl;
            temp.real = 0;
            temp.img = 0;
            return temp;
        }
       
        temp.real = ((real * c.real) + (img * c.img)) / denominator;
        temp.img = ((img * c.real) - (real * c.img)) / denominator;
        return temp;
    }
};

int main() {
    Complex c1, c2, result;
   
    c1.accept(6, 8);
    c2.accept(2, 4);

    cout << "First Complex Number: ";
    c1.display();

    cout << "Second Complex Number: ";
    c2.display();

    result = c1+c2;
    cout << "Addition: ";
    result.display();

    result = c1-c2;
    cout << "Subtraction: ";
    result.display();

    result = c1*c2;
    cout << "Multiplication: ";
    result.display();

    result = c1/c2;
    cout << "Division: ";
    result.display();

    return 0;
}
