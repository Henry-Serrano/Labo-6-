#include<iostream>

using namespace std;

int main(){
    int n1,n2,resultado,opcion;
    cout<<"bienvenido a mi calculadora"<<endl;
    cout<<"1. suma "<< endl;
    cout<<"2.resta"<< endl;
    cout<<"3. multiplicacion"<< endl;
    cout<<"4. division"<< endl;
    cin>>opcion;
    switch (opcion){
        case 1:
            cout<<"ingrese los nunmeros con los que desea sumar"<<endl;
            cin>>n1>>n2;
            resultado=n1+n2;
            cout<<"el resultado es: "<<resultado<<endl;
            break;
        case 2:
            cout<<"ingrese los nunmeros con los que desea restar"<<endl;
            cin>>n1>>n2;
            resultado=n1-n2;
            cout<<"el resultado es: "<<resultado<<endl;
            break;
        case 3:
            cout<<"ingrese los nunmeros con los que desea multiplicar"<<endl;
            cin>>n1>>n2;
            resultado=n1*n2;
            cout<<"el resultado es: "<<resultado<<endl;
            break;
        case 4:
            cout<<"ingrese los nunmeros con los que desea dividir"<<endl;
            cin>>n1>>n2;
            resultado=n1/n2;
            cout<<"el resultado es: "<<resultado<<endl;
            break;
        default:
            cout<<"opcion no valida"<<endl;
            break;
    }
    return 0;
}