#include <iostream>
using namespace std;

class Tpoint{
public:
    inline int square(int a);
};

inline int Tpoint::square(int a)
{
    return a*a;
}

int main()
{
    Tpoint obj;
    cout << "The Square of a Number is : " << obj.square(10);
    return 0;
}