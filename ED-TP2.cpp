#include <iostream>
#include <locale.h>
#include <windows.h>
#include <algorithm>
using namespace std;

/**Declarando vari�veis*/

string msg, msg1;
int x, y;




void gotoxy(short x, short y) 
{
	COORD coord = {x, y};
	SetConsoleCursorPosition(GetStdHandle ( STD_OUTPUT_HANDLE ), coord);
}

void cascata(){
	for(x=0;x <= msg.size(); x++){
		
		gotoxy(60, 0);
		cout << msg1;
		
		msg1.replace(x, 1, " ");/*linha: posi��o que a string ser� realocada; 2: n�meros de caracteres que ser�o reclocados da string principal; " ": ser� a string que ser� colocada no lugar da velha*/	
		gotoxy(60,0);
		cout <<msg1;/*mostra o valor msg1, que agora est� realocado como " "*/
		
		
		for(y=1; y <=20; y++){
			gotoxy(60 + x, y);
			cout<< msg[x];/*mostra o caracter de posi��o x do array string*/
			
			Sleep(50);/*permite a "anima��o" das letras caindo*/
			
			gotoxy(60 + x, y); /*aponta a localiza��o certa para o if funcionar*/				
			if (y < 20) /*caso y menor q linha 20, coloque " "*/
			{
				cout << " ";
			}
		}
	}
	
}

int main()
{
	gotoxy(45,0);
	cout << "Entre uma mensagem: " << endl;
	gotoxy(45,1);
	cin >> msg;
	
	msg1 = msg;
	
	system("cls");
	
	cascata();
	
	return 0;
	
}