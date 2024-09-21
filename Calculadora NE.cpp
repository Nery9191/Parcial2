#include <iostream>
#include<conio.h>

using namespace std;

int main(){

int num1;

cout<< "Ingrese el numero de la tabla de multiplicar desea realizar" <<endl; 
cin >> num1;
	
	for(int i=1;10<=num1;i*num1){
		cout<< num1; "x" ; i = i*num1;
	}
	 return 0;
}
