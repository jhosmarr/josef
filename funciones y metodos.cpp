#include <iostream>
using namespace std;
// metodos y funciones= ejecutan una porcion de codigos N cantidad de veces 
//metodo= no retorna un tipo de dato 
//funcion retorna un tido de dato determinado 
int suma(int num1,int num2){
	int resultado=0;
	resultado=num1+num2;
	return resultado;
}

main(){
	cout<<suma(10,20)<<endl;
	cout<<suma(50,70)<<endl;
	cout<<suma(90,10)<<endl;
	
	int resta(int num1,int num2){
	int resultado=0;
	resultado=num1-num2;
	return resultado;
	}
	
	cout<<resta(10,20)<<endl;
	cout<<resta(50,70)<<endl;
	cout<<resta(90,10)<<endl;
	
	
	
}