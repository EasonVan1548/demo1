#include<iostream>
using namespace std;
#include "Animal.h"
void Animal::eat(){
    cout<<"����Զ���"<<endl;
}
void Animal::sleep(){
    cout<<"����˯��"<<endl;
}
Animal::Animal(){
    cout<<"��������"<<endl;
}
Animal::~Animal(){
    cout<<"���ٶ���"<<endl;
}