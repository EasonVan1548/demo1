#include"animal.h"
class Cat:public Animal{
public:
    Cat();
    void eat() override;
    void sleep() override;
    ~Cat();
};