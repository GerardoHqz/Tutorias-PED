//#1. Escribir un programa en C++ que reciba una cadena de caracteres, luego escribir 
// una función que reciba la dirección de inicio de la cadena y devuelva el número de vocales 
// que hay en la cadena.
#include <iostream>
#include <cstring>

using namespace std;

int CountVowels(char *);

int main(){

    char word[10];

    cout<<"Digite una palabra: ";
    cin>>word;
    cout<<"La palabra "<<word<<"tiene "<<CountVowels(word)<<" vocales";



    return 0;
}

int CountVowels(char *word){
    int contador = 0;
    for (int i =0; i<strlen(word); i++){
        if(word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u'){
            contador++;
        }
    }

    return contador;
}