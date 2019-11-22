#include<iostream>
#include<conio.h>

using namespace std;
float suma(int, int);
float prom(float &, int &);
int main(){
    int n, opcion;
    float promedio, r=0;
    cout<<"1. Paso por Referencia\n2. Paso por valor\n"; cin>>opcion;
    switch(opcion){
    case 1:
        cout<<"cuantos valores introduciras: "; cin>>n;
        cout<<prom(r,n);
        break;
    case 2:
        cout<<"cuantos numeros introduciras: "; cin>>n;
        promedio=suma(r, n)/n;
        cout<<"El promedio es: "<<promedio;
        break;
        }
    getch();
    return 0;
}

float suma(int r, int v){
    float dato;
    if (v>0){
        cout<<"Dame el dato: "; cin>>dato;
        v-=1;
        return suma(r+=dato, v);
    }if (v==0)
        return r;
}
float prom( float &r, int &v){
    int dato;
    float p;
    for(int i=0; i<v; i++){
        cout<<"Dame el dato: "; cin>>dato;
        r+=dato;
    }
    p=r/v;
    return p;
}
