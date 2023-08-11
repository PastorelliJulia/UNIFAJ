//--------------------------------------------------------------------------------------------------------------//
//-----------------------|      Data       |---|      Aula      |---|      Professor      |---------------------//
//----------------------|     08/08/23     |---|       02       |---|   Carlos Miglinski  |---------------------//
//--------------------------------------------------------------------------------------------------------------//
// OBS: Conteudo basico C++ - MEDIA, IF e ELSE                                                                  //
//--------------------------------------------------------------------------------------------------------------//

#include <iostream>
#include <locale>

using namespace std;

float nota1, nota2, media;

void crescente(){
	
	if (nota1<nota2){
		
		nota1 = nota1+nota2;
		nota2 = nota1 - nota2;
		nota1 = nota1 - nota2;
		
	}
		
	}
	

int main(){
	
	setlocale (LC_ALL, "Portuguese");
	
	cout<<"Informe a primeira nota:"<<endl;
	cin>>nota1;
	cout<<"Informe a segunda nota:"<<endl;
	cin>>nota2;
	
	crescente();
	
	cout<<"Sua nota maior foi: "<<nota1<<endl;
	
	cout<<"Sua nota menor foi: "<<nota2<<endl;
	
	media = (nota1+nota2)/2;
	
	cout<<"Sua média foi de: "<<media<<endl;
	
	if (media<6){
		
		cout<<"Ficou abaixo da média, informe a nota da substitutiva"<<endl;
		cin>>nota2;
		media = (nota1+nota2)/2;
		cout<<"Sua nova média foi de: "<<media<<endl;
		if (media<6){
			cout<<"Reprovado!"<<endl;
		}else{
			cout<<"Aprovado!"<<endl;
		}
		
	}else{
			cout<<"Aprovado!"<<endl;
		}

	
	return 0;
}
