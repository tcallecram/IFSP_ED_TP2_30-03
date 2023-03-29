#include <iostream>
#include <locale.h>
#include <windows.h>
#include <algorithm>
using namespace std;

/*Declarando variaveis*/
std:: string palindromo, palindromo1;
int i=0;	
	
void espaco(){
	
	for(i=0; i<palindromo.length; i++){
		if(palindromo[i]== " "){
			palindromo.erase(i,1);
			i--;
		}
	}
}


int main (){
	setlocale(LC_ALL, "");
	
	cout << "Digite um provável palíndromo: " << endl;
	cin >> palindromo;
	
	espaco();
	
	palindromo1 = palindromo;
	
	reverse(palindromo.begin(), palindromo.end()); 
	
	
	
	if (palindromo.compare(palindromo1) == 0) 	{
		cout << "E  um palindromo!" << endl;
	}
	else 	{
		cout << "Nao e um palindromo..." << endl;
	}
}