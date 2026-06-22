#include <stdio.h>
#include <stdlib.h>

void main(){
   float saldo = 1000.00;
   float deposito,saque;
   int opcao;

   printf("Boa noite!\n");


  do{
	  printf("\n _____|MENU INICIAL|_____\n");
  	  printf("\n |1|-Verificar Saldo\n |2|-Depositar Valor\n |3|-Sacar Valor\n |4|-Solicitar Empréstimo\n |5|-Pagar Empréstimo\n |6|-Consultar Empréstimo\n |7|-SAIR\n"); 
  	  printf("\nDigite um numero correspondente a sua necesidade:");
 
  	   scanf("%d", &opcao);

   	   switch(opcao){

	   //verificar saldo
	   case 1:
		   printf("\n_________________________________________\n");
		   printf("\nSeu saldo é de R$ %.2f reais.\n",saldo);
		   printf("\n__________________________________________\n");
		   break;


	   //Despositar valor
	   case 2:
		   printf("\n________________________________________\n");
		   printf("\nDigite o valor que você quer depositar:\n");
		   scanf("%f", &deposito);

		   saldo = saldo + deposito;
		   printf("\n Seu Deposito foi realizado!\n");
		   printf("\n Consulte seu saldo no MENU INICIAL \n");
		   printf("___________________________________________\n");
		   break;

	   
	   //Sacar valor
	   case 3:
		   printf("\n___________________________________________\n");
		   printf("\nDigite o valor que você quer sacar: \n");
		   scanf("%f", &saque);

		   saldo = saldo - saque;
		   printf("\n Seu Saque foi realizado com sucesso!\n");
		   printf("\n Consulte seu saldo no MENU INICIAL\n");
		   printf("\n___________________________________________\n");
		   break;


	   //Solicitar um  Empréstimo
	   case 4:
		   printf("\nOpção para pedir um empréstimo.\n");
		   printf("___________________________________________\n");
		   break;


	   //Pagar o Empréstimo
	   case 5: 
		   printf("\nOpção para pagar o empréstimo.\n");
		   printf("____________________________________________\n");
		   break;

	   //Consultar os empréstimos feitos
	   case 6:
		   printf("\nOpção para consultar empréstimos.\n");
		   printf("______________________________________________\n");	  
		   break;

	   //Sair do sistema
	   case 7: printf("\nVolte sempre!!");
		   break;

	   default:
		   printf("\nOpcao invalida. Tente novamente.\n");
    }

  } while (opcao != 7);

}
