/*Escribir un programa que pida al usuario dos números y los sume. ¡Pero esta vez hazlo en C++! :)*/

#include<iostream>
using namespace std;


int main(){

int i,j,suma;

cout<<"Ingrese los numeros que desea sumar:  "<<endl;
cin>> i; cin>> j;


suma = i + j;

cout<<i<<" + "<<j<<"= "<<suma<<endl;

return 0;

}