#include <iostream>
#include <string>
#include <typeinfo>

using namespace std;

class testStaticMem
{
    public:
    static constexpr char a = 'a';
};
static string a;

int main()
{
    cout<< testStaticMem::a<<endl;
    return 0;
}