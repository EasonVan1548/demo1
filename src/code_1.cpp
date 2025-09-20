#include<iostream>
#include <memory>
#include "Cat.h"
using namespace std;
int main(){
    cout<<"Hello, World!"<<endl;
    unique_ptr<Animal> cat_1=make_unique<Cat>();
    cat_1->eat();
    
    return 0;
}