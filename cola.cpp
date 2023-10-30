#include<iostream>
#include<conio.h>
using namespace std;

struct Nodo{
	int dato;
	Nodo *ente;
};

Nodo *cola;

void insercola(Nodo *&,Nodo *&,int);
bool cola_vacia(Nodo *);

int main(){
	Nodo *inicio = NULL;
	Nodo *cola = NULL;
	
	int dato;
	
	cout<<"Digite un numero: ";
	cin>>dato;
	insercola(inicio,cola,dato);
	
	getch();
	return 0;
}

void insercola(Nodo *&inicio,Nodo *&fin,int x){
	Nodo *nue_nodo = new Nodo();
	
	nue_nodo->dato = x;
	nue_nodo->ente = NULL;
	
	if(cola_vacia(inicio)){
		inicio = nue_nodo;
	}
	else{
		cola->ente = nue_nodo;
	}
	
	cola = nue_nodo;
	
	cout<<"Elemento "<<x<<" insertado a cola correctamente\n";
}

bool cola_vacia(Nodo *inicio){
	return (inicio == NULL)? true : false;
}
