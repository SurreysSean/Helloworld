#include <iostream>
#include <string>
#include <typeinfo>

using namespace std;
class testClass
{
private:
int a;
    /* data */
public:
    testClass(int w=5);
    void showthis();
    ~testClass();
};

testClass::testClass(int w)
{
    a = w;
}

testClass::~testClass()
{
}

void testClass::showthis()
{
    cout<<this<<endl;
}

int main()
{
    testClass tc(10);
    tc.showthis();
    cout<<&tc<<endl;
    return 0;
}