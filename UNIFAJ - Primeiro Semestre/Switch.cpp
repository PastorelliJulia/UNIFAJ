#include <iostream>
#include <locale>
using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num = 1;
	
	switch(num)
	{
		case 1: cout << "Opcao 1"; break;
		case 2: cout << "Opcao 2"; break;
		case 3: cout << "Opcao 3"; break;
		default: cout << "Selecione uma das opcoes"; break;
	}
}
