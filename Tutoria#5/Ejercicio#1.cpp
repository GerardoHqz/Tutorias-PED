// #1 Realizar un programa que contenga un menú con las opciones 
// de ingresar un elemento a la cola, sacar un elemento y mostrar los 
// elementos de la cola

#include <iostream>
#include <stdlib.h>

using namespace std;

struct Nodo{
    int elemento;
    Nodo* siguiente;
};

struct Cola{
    Nodo* frente;
    Nodo* final;
};

void initialize(Cola*);
bool empty(Cola*);
void push(Cola*,int);
void pop(Cola*);
void ShowQueue(Cola*);


int main(){
    Nodo node;
    Cola queue;

    //Crear e inicializar nuestra cola
    initialize(&queue);

    int opcion = 0, dato = 0;
    bool status = true;

    do{
        system("cls");
        cout<<"*****Menu de opciones*****\n"<<endl;
        cout<<"1. Ingresar un elemento a la cola"<<endl;
        cout<<"2. Sacar un elemento de la cola"<<endl;
        cout<<"3. Mostrar los elementos de la cola"<<endl;
        cout<<"4. Salir"<<endl;
        cout<<"Ingrese una opcion: ";
        cin>>opcion;

        switch(opcion){
            case 1: 
                cout<<"Ingrese un numero: ";
                cin>>dato;
                push(&queue,dato);
                system("pause");
                break;
            case 2:
                pop(&queue);
                system("pause");
                break;
            case 3:
                ShowQueue(&queue);
                system("pause");
                break;
            case 4:
                status = false;
                break;
            default:
                cout<<"Opcion no valida"<<endl;
                system("pause");
                break;
        }

    }while(status);

    return 0;
}

void initialize(Cola *queue){
    queue->frente = NULL;
    queue->final = NULL;
}

bool empty(Cola *queue){
    return(queue->frente == NULL) ? true:false;
}

void push(Cola *queue, int dato){
    Nodo *aux = new Nodo;
    aux->elemento = dato;
    aux->siguiente = NULL;

    if(queue->final == NULL){
        queue->frente = aux;
    }
    else{
        (queue->final)->siguiente = aux;
    }     
    queue->final = aux;
}

void pop(Cola *queue){
    if(empty(queue)){
        cout<<"Underflow!\n";
        return;
    }
    Nodo *aux = queue->frente;
    queue->frente = aux->siguiente;
    
    if(queue->frente == NULL){
        queue->final = NULL;
    }
    delete(aux);
}

void ShowQueue(Cola *queue){
    Nodo *aux = queue->frente;
    if(empty(queue)){
        cout<<"La cola esta vacia\n";
    }
    else{
        while(aux){
            cout<<aux->elemento<<" ";
            aux = aux->siguiente;
        }
    }
    cout<<endl;
}