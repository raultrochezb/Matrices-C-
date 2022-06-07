#include<iostream>
#include<conio.h>
using namespace std;
// RAUL TROCHEZ
void pedirDatos();
void mostrarMatriz(int **,int,int);
int **apuntador_matriz,nFilas,nCol;

int main(){
	pedirDatos();
	mostrarMatriz(apuntador_matriz,nFilas,nCol);
	//liberar memoria de matriz
	for(int i=0;i<nFilas;i++){
		delete[] apuntador_matriz[i];
	}
	
	delete[] apuntador_matriz; 
	
	getch();
	return 0;
}
void pedirDatos(){
	
	cout<<"Inserte numero de filas: ";
	cin>>nFilas;
	cout<<"Inserte numero de columnas:";
	cin>>nCol;
	
	//reservar memoria
	apuntador_matriz = new int*[nFilas]; //memoria para filas
	for(int i=0;i<nFilas; i++){
		apuntador_matriz[i] = new int[nCol]; //memoria para columna
	}
	
	cout<<"\nDigitando datos de la matriz: \n ";
	for(int i=0; i<nFilas;i++){
		for(int j=0; j<nCol;j++){
			cout<<"Inserte un numero ["<<i<<"]["<<j<<"]: ";
			cin>>*(*(apuntador_matriz+i)+j);
		}
	}
}
void mostrarMatriz(int **apuntador_matriz,int nFilas, int nCol){
	cout<<"\nMostrando Matriz:\n";
	for(int i=0;i<nFilas; i++){
		for(int j=0; j<nCol;j++){
		cout<<*(*(apuntador_matriz+i)+j)<<" ";
		}
		cout<<"\n";
	}
}