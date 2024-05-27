#include <stdio.h> //Biblioteca de comunica��o com o usu�rio
#include <stdlib.h> //Biblioteca respons�vel pela mem�ria ou aloca��o de espa�o em mem�ria
#include <locale.h> //Biblioteca de aloca��o de texto por regi�o
#include <string.h>//Biblioteca de String
        int registro()
    //fun��o respons�vel por registrar o usu�rio na plataforma     
                   {  
	//Cria��o de vari�veis e string			                	
                              char arquivo[40];
							  char cpf[40];
                              char nome[40];
                              char sobrenome[40];
                              char cargo[40];
    //fim da cria��o de vari�veis e string                          
                              printf("Digite o CPF a ser cadastrado:");
                              scanf("%s", cpf);
	//"%s" armazenamento de string                          
    //fim da coleta de dados do usu�rio                          
                              strcpy(arquivo, cpf);
    //Respons�vel por copiar os valores das String
                              FILE *file;
                              file = fopen(arquivo, "w");
    //Cria��o de arquivos no banco de dados
                              fprintf(file,cpf);
    //Salva o valor da vari�vel
                              fclose(file);
    //Fechamento do arquivo
                              file = fopen(arquivo, "a");
                              fprintf(file,",");
                              fclose(file);
                              
                              printf("Digite o Nome a ser cadastrado: ");
				              scanf("%s",nome);
				              
				              file = fopen(arquivo, "a");
				              fprintf(file,nome);
				              fclose(file);
				              
				              file = fopen(arquivo, "a");
                              fprintf(file,",");
                              fclose(file);
                              
                              printf("Digite o Sobrenome a ser cadastrado: ");
                              scanf("%s",sobrenome);
                            
                              file = fopen(arquivo, "a");
				              fprintf(file,sobrenome);
				              fclose(file);
				              
				              file = fopen(arquivo, "a");
                              fprintf(file,",");
                              fclose(file);
                              
                              printf("Digite o cargo do usu�rio a ser cadastrado: ");
                              scanf("%s",cargo);
                              
                              file = fopen(arquivo, "a");
                              fprintf(file,cargo);
                              fclose(file);
                            
                              system("pause");
				              
                                
				   }
	//fim da fun��o de registrar no sistema
		
        int consulta()
    //fun��o respons�vel por consultar os dados do usu�rio    
                   {
                
				   	
                             setlocale(LC_ALL, "Portuguese");
    //Defini��o de Linguagem
							 char cpf[40];
                             char conteudo[300];
    //fim da cria��o de vari�veis e string                         
                             printf("Digite o CPF do usu�rio que deseja consultar: ");
                             scanf("%s", cpf);
    //coleta de dados para exclus�o                         
                             FILE *file;
                             file = fopen(cpf,"r");
    //abertura de arquivo e o "r" tem o significado de ler,do ingles "read"                          
                             if(file == NULL)
    //fun��o "se" e fun��o "NULL" caso o resultado desejado chegue a ser nulo
                    {
                    	     printf("CPF n�o registrado no sistema de cadastro!\n");
					}
		while(fgets(conteudo, 300, file) != NULL)
		            {
		            	     printf("\nEssas s�o as informa��es do usu�rio: ");
                             printf("%s", conteudo);
                             printf("\n\n");
                    
    //fim do comando "while",comando de repeti��o
					}
					
		                     system("pause");
					         
				   }
	//fim da fun��o de consultar
				             
	    int deletar()
	//Fun��o respons�vel por deletar o Usu�rio
		           {
		           	
		           	
		                     setlocale(LC_ALL, "Portuguese");
							 
							 char cpf[40];
	//fim da cria��o de vari�veis						 
							 printf("Digite o CPF do usu�rio a ser deletado: ");
							 scanf("%s",cpf);
							 printf("Usu�rio deletado com sucesso!\n");
							
							 system("pause");
							 
							 remove(cpf);
	//coleta e exclus�o de dados do sistema
							 
							 system("cls");
	//respons�vel por limpar a tela						 
							 FILE *file;
							 file = fopen(cpf,"r");
	//abertura e leitura de arquivo solicitado
							 
							 if(file == NULL)
                    {
                    	     printf("CPF inexistente no sistema de cadastro!\n");
                    	     
                    	     system("pause");
    //fim da fun��o "se"
                    	     
					}				
					
				   }
	//fim da fun��o de deletar			   
    
        int main()
                  {
	    int opcao=0;
	    int x=1;	
	//Vari�veis                         
        for(x=1;x=1;)
                  {
	
	//Fun��o de repeti��es pr�-estabelecidas	
							  system("cls");
							  setlocale(LC_ALL, "Portuguese");
    //Defini��o de Linguagem	                        
	                          printf("### Cart�rio da Ebac ###\n\n");
	//Iniciando o Menu                        
	                          printf("Escolha a op��o desejada do menu:\n\n");
	//Op��es de Menu                        
                              printf("\t1 - Registrar Nomes\n");
	                          printf("\t2 - Consultar Nomes\n");
	                          printf("\t3 - Deletar Nomes\n\n");
	                          printf("Op��o: ");
	//Fim do Menu                          
	                          scanf("%d", &opcao);
	//Escaneamento e armazenamento de Vari�vel                         
	                          system("cls");
	//Fun��o de limpar a tela
	    switch(opcao)
	                 {
	                 	      case 1:
	                 	      registro();
							  break;
	//Chamada da Fun��o Registrar
							  
							  case 2:
							  consulta();
	                	      break;
	//Chamada da fun��o Consultar
	               	      
	                	      case 3:
	                	      deletar();
		            	      break;
	//Chamada da fun��o deletar
		            	      
		            	      default:
		            	      printf("Essa op��o n�o est� dispon�vel!\n");
						      system("pause");
						      break;
	
						      
					 }
	//Sistemas de Decis�es
                	} 
	//Fim da Fun��o "for"            	
}
