#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int cambiarDictado(string frase){
	
	int cont=frase.size()-1;
	
	return cont;
}

int main( ){
	string msg;
	int cont;
	
	cout<<"ingresar una palabra"<<endl;
	cin>>msg;
	
	cont=cambiarDictado(msg);
	
	cout<<"las letras que le faltan para ser palindroma son :"<<cont<<endl;
	
	system("PAUSE");
	
	return 0;
}
