#include<iostream>

using namespace std;

int main(){
	int numero,resultado,incremento,controle;
	incremento=1;
	controle=0;
	cout<<"Digite o numero que deseja calcular a raiz quadrada ";
	cin>>numero;
	while(numero!=0){
		numero=numero-incremento;
		incremento=incremento+2;
		controle++;
	}
	resultado=controle;
	cout<<"\nA raiz quadrada do numero digitado é \n";
	cout<<resultado;
	cout<<"\n\n";
	return 0;
}