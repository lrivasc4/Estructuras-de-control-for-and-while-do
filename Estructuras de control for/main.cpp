//
//  main.cpp
//  Estructuras de control for
//
//  Created by Luis Rivas on 27/02/24.
//
/*
#include <iostream>
using namespace std;
int main() {
    

    int tam = 0;
    int contar=0;
    int i =0;
    int datos[] = {10,40,100,250,3000};
    tam = sizeof(datos) / sizeof(datos[0]);
    cout<<sizeof(datos)<<endl;
    cout<<sizeof(datos)[0]<<endl;
    
    for (i=0;i<tam;i++){
        if(i==5){
            cout<<"if"<<endl;
            continue;
        }
        cout<<i<<endl;
        contar++;
    }
    cout<<"i fuera: "<<i<<endl;
    cout<<"ciclos: "<<contar<<endl;
    return 0;
}

#include <iostream>
using namespace std;
int main(){
    
    int inicio = 0, fin = 0,res =0;
    
    cout<<"ingrese tabla inicial: ";
    cin>>inicio;
    cout<<"Ingrese tabla final: ";
    cin>>fin;
    
    for(int rango=inicio;rango<=fin;rango++){
        cout<<"tabla del "<<rango<<endl;
        
        for(int i=1;i<=10;i++){
            res = rango * i;
            cout<<rango<<" x " << i <<" = "<<res<<endl;
    }
        
    }
    return 0;
}
*/

#include <iostream>
using namespace std;
int main(){
    /*
    int i = 0;
    while(i<5){
        
        i++;
        cout<<i<<endl;
        
    
    char respuesta;
    
    do{
        cout<<"Desean ingresar otro valor (s/n) ";
        cin>>respuesta;
        
    }while(respuesta=='s' || respuesta=='S');
    */
    
    char respuesta='s';
    
    while(respuesta=='s' || respuesta=='S'){
        cout<<"Desea ingresar otro valor (s/n) ";
        cin>>respuesta;
    }
    return 0;
}
    
