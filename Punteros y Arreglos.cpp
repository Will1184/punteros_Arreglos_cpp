#include<iostream>
#include<conio.h>

using namespace std;
int main (){
	int array[] = {1,2,3,4,5};
	int *puntero = array;
	
	cout<<"Direccion de memoria de Array: "<<puntero<<endl;
	for(int i=0; i<5;i++){
		cout<<"Elemento: "<<i<<", Direccion: "<<puntero+i<<endl;
	}
	
	return 0;
}
