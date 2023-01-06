#include <stdio.h> //bibliotca de comunicacao com o usuario
#include <stdlib.h> //biblioteca de alocação de espaço em memória
#include <locale.h> //biblioteca de alocaçoes de texto por região
#include <string.h> //biblioteca responsável por cuidar das string

int registro() //Função responsável por cadastrar os usuários no sistema 
{
        //Inicio criação de variáveis/string	
        char arquivo[40];
		char cpf[40];
		char nome[40];
		char sobrenome[40];
		char cargo[40];	
		//Final da criação de variáveis/string
	    
	    printf("Digite o cpf a ser cadastrado: "); //Coletando informação do usuário
	    scanf("%s", cpf); //%s refere-se a string
	    
	    strcpy(arquivo, cpf); //responsável por copiar os valores das string
	    
	    FILE *file; //cria o arquivo
	    file = fopen(arquivo, "w"); //cria o arquivo e o "w" significa escrever
	    fprintf(file,cpf); //salvo o valor da variavel
		fclose(file); //fecha o arquivo
		
		file = fopen(arquivo, "a"); //Cria o arquivo e o "a" significa atualizar
		fprintf(file,",");
		fclose(file);
		
		printf("Digite o nome a ser cadastrado: "); //Coletando informação do usuário
		scanf("%s",nome); //%s refere-se a string
		
		file = fopen(arquivo, "a");
		fprintf(file,nome);
		fclose(file);
		
		file = fopen(arquivo, "a");
		fprintf(file,",");
		fclose(file);
		
		printf("Digite o sobrenome a ser cadastrado: ");
		scanf("%s",sobrenome);
		
		file = fopen(arquivo, "a");
		fprintf(file,sobrenome);
		fclose(file);
			
	    file = fopen(arquivo, "a");
		fprintf(file,",");
		fclose(file);
		
		printf("Digite o cargo a ser cadastrado: ");
		scanf("%s",cargo);
		
		file = fopen(arquivo, "a");
		fprintf(file,cargo);
		fclose(file);
		
			
			
	  	
	
	   
}

	


int consulta()
{
	 setlocale(LC_ALL, "Portuguese"); //Definindo a linguagem
	 
	 char cpf[40];
	 char conteudo[200];
	 
	 printf("Digite o CPF a ser consultado: ");
	 scanf("%s",cpf);
	 
	 FILE *file; //Cria o arquivo
	 file = fopen(cpf,"r"); //Cria o arquivo e o "r" (read) significa ler
	 
	 if(file== NULL);
	 {
	 	printf("Não foi possivel abrir o arquivo, não localizado!.\n");
	 }
	 
	 while(fgets(conteudo, 200, file) != NULL);
	 {
	 	printf("\nEssas são as informações do usuário: ");
	 	printf("%s", conteudo);
	 	printf("\n\n");
	 	
	 	system("pause");
	 }
	 
	
}

int deletar()
{
	 char cpf[40];
	 
	 printf("Digite o CPF do usuário a ser deletado: ");
	 scanf("%s",cpf);
	 
	 remove(cpf);
	 
	 FILE *file;
	 file = fopen(cpf,"r");
	 
	 if(file == NULL);
	 {
	 printf("O usuário não se encontra no sistema!.\n");
	 system("pause"); 	
	   }  
	
}






int main()
     {
	 int opcao=0; //Definindo as variáveis
	 int laco=1;
	 for(laco=1;laco=1;)
     {
	 
	 
	 system("cls"); // Responsavel por limpar a tela
	 
	  	
	 setlocale(LC_ALL, "Portuguese"); //Definindo a linguagem
		
	 printf(" ### cartório da EBAC ###\n\n"); //Inicio do menu
	 printf("Escolha a opção desejada do menu\n\n");
	 printf("\t1 - Registrar nomes\n");
	 printf("\t2 - Consultar nomes\n");
	 printf("\t3 - Deletar nomes\n\n");
	 printf("\t4 - Sair do sistema\n\n");
	 printf("Opção: "); //Fim do menu
	
	 scanf("%d", &opcao); //Armazenando a escolha do usuário
	
	 system("cls");
	
	 switch(opcao) //Inicio da seleção do menu
	 {
	 	case 1:
	    registro(); //Chamada de funções	
	    system("pause");
		break;
		
		case 2:
		consulta();
		break;
		
		case 3:
		deletar();
		break;
		
		case 4:
		printf("obrigado por ultilizar o sistema!\n");
	    return 0;
	    system("pause");
		break; 
			
				
		default:
		printf("Esta opçâo nâo está disponivel!\n");
        system("pause");
		break;	
		//Fim da seleção	
			
			
	 }
	
	
 
     }
 
 
     }
	
