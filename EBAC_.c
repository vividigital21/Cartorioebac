#include <stdio.h> //bibioteca de comunica��o com o usu�rio
#include <stdlib.h> //biblioteca de aloca��o de espa�o em mem�ria
#include <locale.h> //biblioteca de aloca��o de texto por regi�o
#include <string.h> // biblioteca respons�vel por cuidar das string

int registro ()
{
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	
	printf("Digite o CPF a ser cadastrado: ");
	scanf("%s", cpf);
	
	strcpy(arquivo, cpf); //Respons�vel por copiar os valores das strings
	
	FILE *file; // Cria o arquivo
	file = fopen(arquivo, "w"); //cria o arquivo
	fprintf(file,cpf); //Salva o valor da vari�vel
	fclose(file); //fecha o arquivo
	
	file = fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);
	
	printf("Digite o nome a ser cadastrado: ");
	scanf("%s",nome);
	
	file = fopen(arquivo, "a");
	fprintf(file,nome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf( file, ",");
	fclose(file);
	
	printf("Digite o sobrenome a ser cadastrado: ");
	scanf("%s",sobrenome);
	
	file = fopen(arquivo, "a");
	fprintf(file,sobrenome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf( file, ",");
	fclose(file);
	
	printf("Digite o cargo a ser cadastrado: ");
	scanf("%s",cargo);
		
	file = fopen(arquivo, "a");
	fprintf(file,cargo);
	fclose(file);	
	
	system("pause");
	
}

int consulta()
{
	setlocale(LC_ALL, "Portuguese"); //Definindo as linguagens
		
	char cpf [40];
	char conteudo[200];
	printf("Digite o CPF a ser consultado: ");
	scanf("%s", cpf);
	
	
	FILE *file;
	file = fopen(cpf,"r");
	
	if(file == NULL)
	{
		printf("N�o foi poss�vel abrir o arquivo, n�o localizado!. /n");
	}
	
	while(fgets(conteudo, 200, file) != NULL)
	{
		printf("\nEssas s�o as informa��es do usu�rio/n");
		printf("%s",conteudo);
		printf("\n\n");
	}
	
	system("pause");
	
	
}

int deletar()
{
		
	char cpf[40];
	
	printf("Digite o CPF do usu�rio a ser deletado: ");
	scanf("%s",cpf);
	
	remove(cpf);
	
	FILE *file; 
	file = fopen(cpf,"r");
	
	if(file == NULL)
	{
		printf("Usu�rio n�o se encontra no sistema!./n");
		system("pause");
		
		
	}
	
	
	
}


int main ()
    {

	int opcao=0; //Definindo as vari�veis
	
	int laco=1;
	
	for(laco=1;laco=1;)
	{
		
		system("cls");
		
		setlocale(LC_ALL, "Portuguese"); //Definindo as linguagens
		
		printf("### Cart�rio de EBAC ###\n\n"""); //Inicio do menu
		printf("Escolha a op��o desejada do menu \n\n");
		printf("\t1 - REGISTRAR NOMES\n");
		printf("\t2 - CONSULTAR NOMES\n");
		printf("\t3 - DELETAR NOMES\n\n");
		printf("\t4 - SAIR DO SISTEMA\n\n");
		printf("Op��o:"); //Fim do menu
	
		scanf("%d", &opcao); //Armazenando a escolha do usuario	
	
		system("cls");
		
		switch(opcao)
		{
			
			case 1:
			printf("VOC� ESCOLHEU REGISTRO DE NOMES\n");
			system("pause");
			break;
			
			case 2:
			printf("VOC� ESCOLHEU CONSULTAR NOMES\n");
			system("pause");
			break;
			
			case 3:
			printf("VOC� ESCOLHEU DELETAR NOMES\n");
			system("pause");
			break;
			
			case 4:
			printf("Obrigado por utilizar o sistema!\n");
			return 0;
			break;
			
			default:
			printf("ESTA OP��O N�O EST� DISPON�VEL\n");
			system("pause");
			break;

		} //fim da sele��o
	 
	 
	 switch(opcao)
		{
			
			case 1:
			registro();
			system("pause");
			break;
			
			case 2:
			consulta();
			system("pause");
			break;
			
			case 3:
			deletar();
			system("pause");
			break;
			
			default:
			printf("ESTA OP��O N�O EST� DISPON�VEL");
			system("pause");
			break;
				

		} //fim da sele��o
	 
}

}

