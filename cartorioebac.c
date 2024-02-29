#include <stdio.h> //biblioteca de comunica ção com o usuario
#include <stdlib.h> //biblioteca de alocação de espaço de memoria 
#include <locale.h> // biblioteca de alocaçoes de texto por região
#include <string.h> // biblioteca responsavel por cuidar das strings

int registro() // função responsavel por cadastrar os usuarios no sistema
{ 
   //inicio criações de variaveis/strings
   char arquivo[40];
   char cpf[40];
   char nome[40];
   char sobrenome[40];
   char cargo[40];
   // final da criação de variaveis/strings
   
   printf("Digite o CPF a ser cadastrado: ");  //coletando informações do usuario
   scanf("%s", cpf); //%s  refere-se a uma string
   
   
   strcpy(arquivo, cpf);  // responsavel por copiar os valores das strings
   
   FILE* file; //cria o arquivo 
   file = fopen(arquivo,"w");  //cria o arquivo e o "W" significa escrever
   fprintf(file,cpf); //salvo o valor do arquivo
   fclose(file); // fecha o arquivo
   
   file = fopen(arquivo, "a");
   fprintf(file, ", ");
   fclose(file);
   
   printf("Digite o nome a ser cadastrado: "); // coletando informações do usuario
   scanf("%s", nome);
   
   file = fopen(arquivo, "a");
   fprintf(file, nome);
   fclose(file);
   
   file = fopen(arquivo, "a");
   fprintf(file, ", ");
   fclose(file);
   
   printf("Digite o sobrenome a ser cadastrado: "); //coletando informações do usuario
   scanf("%s", sobrenome);
   
   file = fopen(arquivo, "a");
   fprintf(file, sobrenome);
   fclose(file);
   
   file = fopen(arquivo, "a");
   fprintf(file, ", ");
   fclose(file);
   
   printf("Digite o cargo a ser cadastrado: "); //coletando informações do usuario
   scanf("%s", cargo);
   
   file = fopen(arquivo, "a");
   fprintf(file, cargo);
   fclose(file);
   
   system("pause");
   
}

int consulta()

{
   setlocale(LC_ALL, "portuguese"); // definindo a linguagen 
	 
   char cpf[40];
   char conteudo[200];
   
   printf("Digite o cpf a ser consultado: ");
   scanf("%s",cpf);
   FILE *file;
   file = fopen(cpf, "r");
   
   if(file==NULL) // numero  a ser consultado nao existe
   {
      printf("Nao foi possivel abrir o arquivo, nao localizado!. \n");
   }
   
   while(fgets(conteudo, 200, file)!= NULL)
   {
      printf("\nEssas sao as informacoes do usuario: ");
	  printf("%s", conteudo);
	  printf("\n\n");	
   }
   system("pause");
}

int deletar()
   {
   char cpf[40];
   printf("digite o cpf do usuario  a ser deletado: ");
   scanf("%s", cpf);
   
   remove (cpf);
                  
   FILE *file;
   file= fopen(cpf, "r");
   
   if (file == NULL)
   {
     printf("O usuario nao se encontra no sistema!\n");
	 system("pause");
	 return 0; 
	 remove (cpf);       	
 }  }
   
    int main()
    {
    int opcao=0;   //definido variaveis 
    int laco=1;
	
	for(laco=1;laco=1;)
	{
	  
	 system("cls");
     setlocale(LC_ALL, "portuguese");   // definindo a linguaguem

   
	 printf("\t\t Cartorio da EBAC \n\n");  // inicio do menu 	
	 printf("\tescolha a opcao desejada no menu:\n\n");
 	 printf("\t1- registrar nomes\n");
	 printf("\t2- consultar nomes\n");
	 printf("\t3- deletar nomes\n\n");
	 printf("opcao: ");	// fim do menu
	
	 scanf ("%d", &opcao);   //armazenado a escolha do usuario
	
	 system("cls");  //responsavel por limpar a tela
	
	switch(opcao)  //inicio da escolha
	{
	case 1:
		registro();
		break;
	
	case 2 :
	    consulta();
		break;
	
	case 3:
		deletar();
		break;
	
		
		
	default:
		printf("essa opcao nao esta disponivel!\n");
		system("pause");
		break;  
	}	//final da selecao	

			
}			}