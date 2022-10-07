// #3 Realizar un programa con colas en el cual se almacenen 
// caracteres ingresados por el usuario, debe contener una opción para 
// poder buscar un carácter en especifico dentro de la cola dicho 
// carácter es dado por el usuario

#include <iostream>
#include <stdlib.h>
#include <queue>

using namespace std;

void ShowQueue(queue<char>);
void SearchChar(queue<char>, char);

int main(){
    queue<char> cola;
    char dato, buscar;
    int opcion = 0;
    bool status = true;

    do{
        system("cls");
        cout<<"*****Menu de opciones*****\n"<<endl;
        cout<<"1. Ingresar un caracter a la cola"<<endl;
        cout<<"2. Buscar un caracter en la cola"<<endl;
        cout<<"3. Mostrar los caracteres de la cola"<<endl;
        cout<<"4. Salir"<<endl;
        cout<<"Ingrese una opcion: ";
        cin>>opcion;

        switch(opcion){
            case 1:
                cout<<"Ingrese un caracter: ";
                cin>>dato;
                //Agregamos el dato a la cola
                cola.push(dato);
                cout<<"\nCaracter agregado correctamente!\n";
                system("pause");
                break;
            case 2:
                cout<<"Ingrese el caracter a buscar: ";
                cin>>buscar;
                SearchChar(cola, buscar);
                system("pause");
                break;
            case 3:
                ShowQueue(cola);
                system("pause");
                break;
            case 4:
                status = false;
                break;
            default:    
                cout<<"Opcion no valida!"<<endl;
                system("pause");
                break;
        }
    }while(status);

    
    return 0;
}

void SearchChar(queue<char>cola, char dato){
    queue<char>clone = cola;
    int posicion = 1;
    bool status = false;

    while(!clone.empty()){
        if(clone.front() == dato){
            cout<<"El caracter se encuentra en la posicion: "<<posicion<<endl;
            status = true;
            break;
        }
        else{
            clone.pop();
            posicion++;
        }
    }

    //status == false
        if(!status){
            cout<<"El caracter no se encuentra en la cola"<<endl;
        }
}



void ShowQueue(queue<char>cola){
    queue<char>clone = cola;

    while(!clone.empty()){
        if(clone.empty()){
            cout<<"La cola esta vacia!\n";
        }
        else{
            cout<<clone.front()<<" ";
            clone.pop();
        }
    }
    cout<<"\n";
}