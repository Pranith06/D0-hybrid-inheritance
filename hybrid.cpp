#include <iostream>
using namespace std;

class collage{
public:
    collage() { cout << "This is a collage\n"; }
};
 
class fourthwheeler : public collage {
public:
    room()
    {
        cout << "Objects with in room \n";
    }
};
class room : public collage {
public:
    room() { cout << "pc is in room\n"; }
};

int main()
{
    room obj;
    return 0;
}
