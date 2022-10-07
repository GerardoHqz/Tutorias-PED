// #2 Se le solicita realizar un programa para poder cobrar a los 
// clientes, donde por cada cliente pedirá su nombre y el monto a 
// cobrar, el programa debe tener la opción de ingresar el nombre de 
// un cliente para registrarlo y la opción de cobrar cliente y tener una 
// opcion para ver todos los clientes en cola.

#include <iostream>
#include <string>
#include <stdlib.h>
//Libreria para las colas
#include <queue>

using  namespace std;

struct Cliente{
    string nombre;
    float monto;
};

void ShowQueue(queue<Cliente>);

int main(){
    //creamos e inicializamos la cola
    queue<Cliente> cola;

    Cliente client, ClientAux;
    int opcion = 0;
    bool status = true;

    do{
        system("cls");
        cout<<"*****Menu de opciones*****\n"<<endl;
        cout<<"1. Ingresar un cliente a la cola"<<endl;
        cout<<"2. Cobrar cliente"<<endl;
        cout<<"3. Mostrar los clientes de la cola"<<endl;
        cout<<"4. Salir"<<endl;
        cout<<"Ingrese una opcion: ";
        cin>>opcion;

        switch(opcion){
            case 1:
                cin.ignore();
                cout<<"Ingrese el nombre del cliente: ";
                getline(cin,client.nombre);
                cout<<"Ingrese el monto a cobrar: ";
                cin>>client.monto;

                //añadimos el cliente a al cola
                cola.push(client);

                cout<<"\nCliente agregado correctamente!\n";
                system("pause");
                break;
            case 2:
                if(cola.empty()){
                    cout<<"No hay clientes en la cola\n";
                }
                else{
                    client = cola.front();
                    cout<<"\nCliente: "<<client.nombre<<endl;
                    cout<<"Monto a cobrar: "<<client.monto<<endl;
                    cola.pop();
                    cout<<"\nCliente cobrado correctamente!\n";
                }
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
                cout<<"Opcion no valida!\n";
                system("pause");
                break;
        }
    }while(status);


    return 0;
}

void ShowQueue(queue<Cliente> cola){
    queue<Cliente>clone = cola;

    while(!clone.empty()){
        if(clone.empty()){
            cout<<"No hay clientes en la cola\n";
        }
        else{
            cout<<"Nombre: "<<clone.front().nombre<<endl;
            cout<<"Monto: "<<clone.front().monto<<endl;
            clone.pop();
        }
    }
    cout<<"\n";
}