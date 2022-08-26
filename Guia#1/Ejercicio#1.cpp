#include <iostream>

using namespace std;

int main(){

    int a = 5;
    int *p;

    p = &a;
    cout<<"direccion: "<<p;

    *p = a;
    cout<<"direccion: "<<p;

    cout<<"El valor del dato es: "<<*p;

    //*p = &a; //incorrecto
    //p = a; //incorrecot


    return 0;
}