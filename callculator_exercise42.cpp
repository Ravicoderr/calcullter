#include <iostream>
#include <math.h>
using namespace std;
class calci
{
protected:
    int a, b;

public:
    void setnum(int c, int d)
    {
        a = c;
        b = d;
    }
    void process()
    {
        cout << "the sum of num1 and num2 is " << a + b << endl;
        cout << "the multiplication of num1 and num2 is " << a * b << endl;
        cout << "the division of num1 and num2 is " << a / b << endl;
        cout << "the substraction of num1 and num2 is " << a - b << endl;
    }
};

class hicalci
{
protected:
    int e, f;

public:
    void setdata(int g, int h)
    {
        e = g;
        f = h;
    }
    void hiprocess()
    {
        cout << "the sqr root of num1 is " << sqrt(e) << endl;
        cout << "the sqr root of num2 is " << sqrt(f) << endl;
        cout << "the cube root of num1 is " << cbrt(e) << endl;
        cout << "the cube root of num1 is " << cbrt(f) << endl;
        cout << "the cube root of num1 is " << pow(f, 2) << endl;
    }
};

class scintificcalci : public calci, public hicalci
{
public:
    void print(int p, int q)
    {
        calci::setnum(p, q);    //  :: ---> this is Ambiguity Resolution
        hicalci::setdata(p, q); // ye class ko btata h ki konse class s object ko lene h
        process();              // ---> we can write like this also, preffer writting the name
        hicalci::hiprocess();   // of class if two objects have same name in the class to avoid Ambiguity
    }
};
int main()
{
    int p, q;
    cout << "enter num1 and num2 " << endl;
    cin >> p >> q;
    scintificcalci ravi;
    ravi.print(p, q);
    return 0;
}