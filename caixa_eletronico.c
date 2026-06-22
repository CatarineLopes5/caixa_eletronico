#include <stdio.h>
#include <stdlib.h>

void main(){
   float saldo = 1000.00;
   float deposito,saque,emprestimo,pagamento;
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
		   printf("\n___________________________________________\n");
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
		   printf("\n_________________________________________\n");
		   printf("\nDigite o valor para o emprestimo: \n");
		   scanf("%f", &emprestimo);

		   saldo = saldo + emprestimo;
		   printf("\nEmprestimo realizado com sucesso!\n");
		   printf("\nConsulte seu saldo no MENU INICIAL\n"); 
		   printf("\n___________________________________________\n");
		   break;


	   //Pagar o Empréstimo
	   case 5: 
		   printf("\n-------------------------------------------\n");
		   if (emprestimo <= 0){
			   printf("\n Você não realizou nenhum Empréstimo até o momento\n");
		   }else{
			   printf("\n Digite o valor do Empréstimo que será pago:");
			   scanf("%f", &pagamento);

			   emprestimo = emprestimo - pagamento;
			   saldo = saldo - pagamento;

			   printf("\n Pagamento recebido com sucesso!\n");
			   printf("\n COnsulte seu saldo ou o seus empréstimos no MENU INICIAL\n");

		   printf("\n____________________________________________\n");
		   break;
		   }

	   //Consultar os empréstimos feitos
	   case 6:
		   printf("\n___________________________________________\n");
		   if (emprestimo <= 0){
			  printf("\n Você não realizou nenhum empréstimo até o momento\n");
		   }else{
			  printf("\n Você possui de empréstimo R$ %.2f reais.\n",emprestimo); 
		   printf("\n______________________________________________\n");	  
		   break;
		   }

	   //Sair do sistema
	   case 7: printf("\nVolte sempre!!");
		   break;

	   default:
		   printf("\nOpcao invalida. Tente novamente.\n");
    }

  } while (opcao != 7);

}
