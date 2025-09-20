#include<iostream>
using namespace std;
#include "Animal.h"
void Animal::eat(){
    cout<<"动物吃东西"<<endl;
}
void Animal::sleep(){
    cout<<"动物睡觉"<<endl;
}
Animal::Animal(){
    cout<<"创建动物"<<endl;
}
Animal::~Animal(){
    cout<<"销毁动物"<<endl;
}