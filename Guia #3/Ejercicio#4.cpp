//Algoritmo de Busqueda Binaria: SOLO ARRAYS ORDENADOS

#include <iostream>

using namespace std;

int main(){
    //SOLO ARRAYS ORDENADOS
    int array[10] = {1,2,3,4,5,6,7,8,9,10};

    int inferior = 0, superior = 10, medio = 0, cont = 0, buscado = 0;
    bool band = false;

    cout<<"Ingrese el numero a buscar: ";
    cin>>buscado;

    while((inferior <= superior ) && (cont < 10)){
        medio = (inferior + superior) / 2;

        if(array[medio] == buscado){
            band = true;
            break;
        }
        else if (array[medio] > buscado){
            superior = medio - 1;
        }
        else{
            inferior = medio + 1;
        }
        cont ++;
    }

    //1,2,3,4,5 
    //6,7,8,9,10
    //medio = 4
    //buscado = 4
    //superior = 4
    //inferior = 4

    if(band){
        cout<<"el numero "<<buscado<<" se encuentra en la posicion: "<<medio+1<<endl;
    }
    else{
        cout<<"no se encontro el numero";
    }

    return 0;
}