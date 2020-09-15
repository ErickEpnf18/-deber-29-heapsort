#include <iostream>
#include <stdlib.h>
#include <fstream>

using namespace std;

void lectura(){
        ifstream archivo;
        string texto, lect;
        int op2;
        do{
        cout<<"Menu\n1.- Leer Registro\n2.- Salir   → ";
        cin >>op2;
        cin.ignore();
        if(op2==1){
        archivo.open("Heapsort.txt", ios::in);
        if(archivo.fail()){
                cout<<"No se logro encontrar el archivo...";
                exit(1);
        }

        while(!archivo.eof()){    //leyendo todo
                getline(archivo, texto);
                cout<<texto<<endl;
        }cin.ignore();
archivo.close();
        }
        }while(op2!=2);
cout <<"Gracias por utilizar el programa..";
}

void escritura(){
        ofstream archivo2;
        string lectura, texto1,nombre,apellido,telefono;
        int op, x, a[x];
        cout<< "Ingrese el tamaño del arreglo: ";
        cin>>x;
        for(int i=0; i<x; i++){
                cout<<"Posicion["<<i<<"]: ";
                cin>>a[i];
        }
        archivo2.open("Heapsort.txt", ios::app);

        if(archivo2.fail()){
                cout << "No se pudo crear...";
                exit(1);
        }

        cout<<"1.- Guardar registro\n2.- salir: ";
        cin>>op;
        if(op == 1){
                archivo2<<"\nOriginal: ";
                for(int i=0; i<x;i++)
    {
        archivo2<<"|"<<a[i]<<"|";
    }   
    heapSort(a,x);

        //////////////////
        archivo2<<"\nOrdenado: ";
                for(int i=0; i<x;i++)
    {
        archivo2<<"|"<<a[i]<<"|";
    }
                cin.ignore();
                system ("cls");
                  cout << "Guardado con exito...\n";
                  /*system ("pause");
                  system ("cls");*/
        }
        archivo2.close();
}

void heapSort(int b[], int n)
{
   int valor,temp,a;

    for(int i=n; i>0; i--)
    {
        for(int j=1; j<=i; j++)
        {
            valor=b[j];
            a=j/2;
            while(a>0 && b[a]<valor)
            {
                b[j]=b[a];
                j=a;
                a=a/2;
            }
            b[j]=valor;
        }
        temp=b[1];
        b[1]=b[i];
        b[i]=temp;
    }
    for(int i=0; i<n ; i++)
    {
            cout<<b[i]<<endl;
    }
    return b[i];

}