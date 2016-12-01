#ifndef ANIMAL_H
#define ANIMAL_H



//虚析构  就是为了析构完全(在delete 父类指针的时候，将子类对象析构完全)
//当一个类中有虚函数的进候，请将其析构函数一并virtual

class Animal
{
public:
    Animal();
    virtual ~Animal();
    virtual void voice() = 0;
};

#endif // ANIMAL_H
