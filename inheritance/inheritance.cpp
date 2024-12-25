/*
//Inheritance

1. Single/simple (one parent one child)
2. multilevel (one parent one child one grand child and so on)
3. multiple (Derive class inherits from more than one base class)
4. Hierarchical (one parent and two or more child classes)
5. Hybrid(Mixture of two or more  type of inheritance [multiple & hierarchical])
*/

/*

//Syntax

class BaseClass
{

};

class DeriveClass : public BaseClass
{

}
*/

#include <iostream>
using namespace std;
class Animal
{
public:
    void eat()
    {
        cout << "Animal eating..." << endl;
    }
};

class Dog : public Animal
{
public:
    void bark()
    {
        cout << "Animal is Barking..." << endl;
    }
};

int main()
{
    Dog obj;

    obj.eat();
    obj.bark();
    return 0;
}