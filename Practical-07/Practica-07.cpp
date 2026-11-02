#include <iostream>
#include <cstring>
using namespace std;

class String
{
private:
    char* str;

public:

    // Default constructor
    String()
    {
        str = new char[1];
        str[0] = '\0';
    }

    // Parameterized constructor
    String(const char* s)
    {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }

    // Copy constructor
    String(const String& s)
    {
        str = new char[strlen(s.str) + 1];
        strcpy(str, s.str);
    }

    // Accept string
    void Accept()
    {
        char temp[100];

        cout << "Enter string: ";
        cin.getline(temp, 100);

        delete[] str;

        str = new char[strlen(temp) + 1];
        strcpy(str, temp);
    }

    // Display string
    void Display()
    {
        cout << "String: " << str << endl;
    }

    // Destructor
    ~String()
    {
        delete[] str;
    }
};

int main()
{
    String s1;
    s1.Accept();
    s1.Display();

    String s2("parametrized string");
    s2.Display();

    String s3 = s2;
    s3.Display();

    return 0;
}
