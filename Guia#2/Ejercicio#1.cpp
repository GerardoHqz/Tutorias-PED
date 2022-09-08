// #3. Cree un programa donde se le solicite al usuario que ingrese una cantidad de valores enteros
// formando un arreglo, en dicho arreglo localize el valor máximo y muestre en pantalla el puntero que apunta al valor máximo.
// UTILIZANDO FUNCIONES

#include <iostream>

using namespace std;

//***** PROTOTIPOS DE FUNCIONES *****

//declarando funcion para pedir datos
int pedirDatos(int *array, int size);
//declarando funcion para encontrar el valor maximo
int Maximo(int *array, int size);

int main(){
    int size = 5;
    int array[size];
    array[size] = pedirDatos(array, size);

    //buscando el valor maximo
    int max =  Maximo(array, size);

    cout<<"El valor maximo es: "<<max<<endl;
}

//***** DEFINICION DE FUNCIONES *****
int pedirDatos(int *array, int size){
    for(int i = 0; i < size; i++){
        cout << "Ingrese un numero ["<<i+1<<"]: ";
        cin >> array[i];
    }

    return 0;
}

int Maximo(int *array, int size){
    int max = 0;

    for(int i = 0; i<size;i++){
        if(*array > max){
            max = *array;
        }
        array++;
    }

    return max;
}
