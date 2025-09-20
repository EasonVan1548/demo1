#include<iostream>
#include"Cat.h"
using namespace std;
void Cat::eat(){
    cout<<"猫吃鱼"<<endl;
}
void Cat::sleep(){
    cout<<"猫睡觉"<<endl;
}
Cat::Cat(){
    cout<<"生成一只猫"<<endl;
}
Cat::~Cat(){
    cout<<"销毁一只猫"<<endl;
}