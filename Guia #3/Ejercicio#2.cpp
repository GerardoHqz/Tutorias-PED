// Construir una función recursiva que calcule la suma de los n primeros números naturales.
// suma(n) = 1 , n=1 -----> caso base o condicion de corte
// suma(n) = n + suma(n-1) , n>1 -----> caso recursivo

#include <iostream>

using namespace std;

int suma(int);

int main(){
    int number = 0;
    cout<<"Ingrese el numero natural hasta el que desea sumar: ";
    cin>>number;

    cout<<"La suma de los numeros naturales hata "<<number<<" es "<<suma(number);


    return 0;
}

//funcion recursiva
int suma(int n){
    if(n == 1){
        return 1;
    }
    else{
        return n + suma(n -1);
    }
}


