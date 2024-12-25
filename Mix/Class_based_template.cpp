// it will work for both INTEGER & DOUBLE as well
#include <iostream>
using namespace std;
template <typename T1, typename T2>
class Pair
{
private:
    // int x;
    // int y;
    T1 x;
    T2 y;

public:
    Pair(T1 x, T2 y)
    {
        this->x = x;
        this->y = y;
    }

    void getData()
    {
        cout << "x: " << this->x << ", y: " << this->y;
    };
};
int main()
{
    Pair<int, double> obj(5, 7.2);

    obj.getData();
    return 0;
}