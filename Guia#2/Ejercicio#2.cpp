/*Ejercicio 2: Realice un programa que calcule la suma de dos matrices dinámicas.*/

#include <iostream>

using namespace std;

//***** PROTOTIPOS DE FUNCIONES *****
void pedirDatos();
void sumarMatrices(int **matriz1, int **matriz2, int filas, int columnas);
void mostrarMatriz(int **matriz, int filas, int columnas);

//Variables globales
int **ptr_matriz1, **ptr_matriz2, filas, columnas;

int main(){

    pedirDatos();
    sumarMatrices(ptr_matriz1, ptr_matriz2, filas, columnas);
    mostrarMatriz(ptr_matriz1, filas, columnas);

    //Liberar el espacio en memoria 
    for(int i = 0; i < filas ; i++){
        delete[] ptr_matriz1[i];
    }
    delete [] ptr_matriz1;
    for(int i = 0; i < filas ; i++){
        delete[] ptr_matriz2[i];
    }
    delete [] ptr_matriz2;


    return 0;
}

void pedirDatos(){
    cout<<"Digite el numero de filas: ";
    cin>>filas;
    cout<<"Digite el numero de columnas: ";
    cin>>columnas;

    //Reservando memoria para las matrices
    ptr_matriz1 = new int*[filas];
    for (int i = 0; i < filas; i++){
        ptr_matriz1[i] = new int[columnas];
    }

    cout<<"\tDigitando los elementos de la Matriz [1]\n";
    for(int i = 0; i < filas; i++){
        for(int j = 0; j < columnas; j++){
            cout<<"Digite un numero ["<<i<<"]["<<j<<"]: ";
            //asi nos desplazamos con punteros dobles en una matriz
            cin>>*(*(ptr_matriz1+i)+j);
        }
    }

    ptr_matriz2 = new int*[filas];
    for (int i = 0; i < filas; i++){
        ptr_matriz2[i] = new int[columnas];
    }

    cout<<"\tDigitando los elementos de la Matriz [2]\n";
    for(int i = 0; i < filas; i++){
        for(int j = 0; j < columnas; j++){
            cout<<"Digite un numero ["<<i<<"]["<<j<<"]: ";
            //asi nos desplazamos con punteros dobles en una matriz
            cin>>*(*(ptr_matriz2+i)+j);
        }
    }
}

void sumarMatrices(int **matriz1, int **matriz2, int filas, int columnas){
    for(int i = 0; i < filas ; i ++){
        for (int j = 0; j < columnas; j++){
            *(*(matriz1+i)+j) = *(*(matriz1+i)+j) + *(*(matriz2+i)+j);
        }
    }
}

void mostrarMatriz(int **matriz, int filas, int columnas){
    for(int i = 0; i < filas ; i ++){
        for (int j = 0; j < columnas; j++){
            cout<<*(*(matriz+i)+j)<<" ";
        }
        cout<<endl;
    }
}
