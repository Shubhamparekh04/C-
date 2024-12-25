#include <iostream>
using namespace std;
template <typename T>
class collection
{
private:
    int size;
    T *arr;

public:
    void createCollection(int size)
    {
        this->size = size;
        arr = new T[size];
        if (arr != NULL)
        {
            cout << "Array created successfully" << endl;
        }
        else
        {
            cout << "Array creation failed" << endl;
        }
    }
    void displayCollection()
    {
        cout << "Collection is : " << endl;
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << endl;
        }
    }

    void addItem(int index, T element)
    {
        if (int index, T element)
        {
            if (index >= 0 && index < thi->size)
            {
                arr[index] = element;
                cout << "Added succesfully";
            }
            else
            {
                cout << "Error out of bound";
            }
        }
    }
};
int main()
{
    collection<int> int_array;
    int_array.createCollection(5);
    return 0;
}