#include <stdio.h> //Biblioteca de comunicação com o usuário
#include <stdlib.h> //Biblioteca responsável pela memória ou alocação de espaço em memória
#include <locale.h> //Biblioteca de alocação de texto por região
#include <string.h>//Biblioteca de String


int registro() //função responsável por registrar o usuário na plataforma     
                   {  
	       //Criação de variáveis e string			                	
               char arquivo[40];
	       char cpf[40];
               char nome[40];
               char sobrenome[40];
               char cargo[40];
               //fim da criação de variáveis e string  

			   
               printf("Digite o CPF a ser cadastrado:");
               scanf("%s", cpf); //"%s" armazenamento de string                          
               //fim da coleta de dados do usuário  
			   
               strcpy(arquivo, cpf); //Responsável por copiar os valores das String
               FILE *file;
               file = fopen(arquivo, "w"); //Criação de arquivos no banco de dados
               fprintf(file,cpf); //Salva o valor da variável
               fclose(file); //Fechamento do arquivo
			   
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
                              
               printf("Digite o cargo do usuário a ser cadastrado: ");
               scanf("%s",cargo);
                              
               file = fopen(arquivo, "a");
               fprintf(file,cargo);
               fclose(file);
                            
               system("pause");
				              
                                
				   }
	      //fim da função de registrar no sistema
		
int consulta() //função responsável por consultar os dados do usuário    
                   {
                
				   	
              setlocale(LC_ALL, "Portuguese"); //Definição de Linguagem
	      char cpf[40];
              char conteudo[300];
              //fim da criação de variáveis e string
			   
              printf("Digite o CPF do usuário que deseja consultar: ");
              scanf("%s", cpf);
              //coleta de dados para exclusão                         
              FILE *file;
              file = fopen(cpf,"r"); //abertura de arquivo e o "r" tem o significado de ler,do ingles "read"                          
              if(file == NULL) //função "se" e função "NULL" caso o resultado desejado chegue a ser nulo
                    {
              printf("CPF não registrado no sistema de cadastro!\n");
					}
	      while(fgets(conteudo, 300, file) != NULL)
		            {
	      printf("\nEssas são as informações do usuário: ");
              printf("%s", conteudo);
              printf("\n\n");
                    
              //fim do comando "while",comando de repetição
					}
					
	      system("pause");
					         
				   }
	      //fim da função de consultar
				             
int deletar()
	      //Função responsável por deletar o Usuário
		           {
		           	
		           	
	      setlocale(LC_ALL, "Portuguese");
							 
	      char cpf[40];
	      //fim da criação de variáveis						 
	      printf("Digite o CPF do usuário a ser deletado: ");
	      scanf("%s",cpf);
	      printf("Usuário deletado com sucesso!\n");
							
	      system("pause");
							 
	      remove(cpf); //coleta e exclusão de dados do sistema
							 
	      system("cls"); //responsável por limpar a tela						 
	      FILE *file;
	      file = fopen(cpf,"r"); //abertura e leitura de arquivo solicitado
							 
	      if(file == NULL)
                    {
              printf("CPF inexistente no sistema de cadastro!\n");
                    	     
              system("pause");
              //fim da função "se"
                    	     
					}				
					
				   }
	      //fim da função de deletar			   
    
int main()
                  {
	      int opcao=0;
	      int x=1;	
	      //Variáveis                         
              for(x=1;x=1;)
                  {
	
	      //Função de repetições pré-estabelecidas	
	      system("cls");
	      setlocale(LC_ALL, "Portuguese"); //Definição de Linguagem	                        
	      printf("### Cartório da Ebac ###\n\n");
	      //Iniciando o Menu                        
	      printf("Escolha a opção desejada do menu:\n\n");
	      //Opções de Menu                        
              printf("\t1 - Registrar Nomes\n");
	      printf("\t2 - Consultar Nomes\n");
	      printf("\t3 - Deletar Nomes\n\n");
	      printf("Opção: ");
	      //Fim do Menu                          
	      scanf("%d", &opcao);
	      //Escaneamento e armazenamento de Variável                         
	      system("cls");
	      //Função de limpar a tela

			  
	      switch(opcao)
	                 {
	      case 1:
	      registro();
	      break;
	      //Chamada da Função Registrar
							  
	      case 2:
	      consulta();
	      break;
	      //Chamada da função Consultar
	               	      
	      case 3:
	      deletar();
	      break;
	      //Chamada da função deletar
		            	      
	      default:
	      printf("Essa opção não está disponível!\n");
	      system("pause");
	      break;
	
						      
					 }
	      //Sistemas de Decisões
                	} 
	      //Fim da Função "for"            	
}
