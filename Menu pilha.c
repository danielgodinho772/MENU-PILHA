#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define TAMANHO 5

/*Utilizado o a pilha estática utilizada em sala de aula, implemente um menu que permita ao usuário escolher 
entre as ações de empilhar (push), desempilhar (pop) e imprimir a pilha.*/


int tamanho = 5;
int stack[TAMANHO];
int top = -1;



bool isEmpty(){
	/*bool isEmpty;
	
	 if(top == -1){
		isEmpty = true;
	} else{
		isEmpty = false;
	}
	
	return isEmpty;*/
	
	return top == -1;
	
}

// data = 10
void push(int data){
	
	if(top == TAMANHO - 1){
		printf("Pilha Cheia!");
		return;
	}
	
	top++;
	stack[top] = data;

}

void imprime_pilha(){
	
	if(isEmpty()){
		printf("Pilha Vazia\n");
		return;
	}

	int i;
	
	for(i = 0; i <= top; i++){
		printf("%d -> ", stack[i]);
	}
	
	printf("topo");
}

void topo(){
	if(isEmpty()){
		printf("Pilha Vazia!\n");
		return;
	}
	
	printf("\n\nTopo => %d", stack[top]);
}

int pop(){

	if(isEmpty()){
		printf("Pilha Vazia!\n");
		return -1;
	}
	
	int temp = stack[top];
	top--;
	return temp;	

}


 int main(){
	
	int dado, option;
	
    do
    {
        printf("---------------------------\n");
        printf("1 - EMPILHAR\n");
        printf("2 - DESEMPILHAR\n");
        printf("3 - IMPRIMIR PILHA\n");
        printf("4 - SAIR\n");

        printf("Escolha uma opcao!: ");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            printf("Informe um valor a ser empilado: \n");
            scanf("%d", &dado);
            push(dado);
            break;

        case 2:
            dado = pop();
            if (dado != -1){
                printf("Valor removido com sucesso!: %d\n", dado);
            }
            break;

        case 3:
            imprime_pilha();
            break;

        case 4:
            printf("Fechando menu!");
            break;
        
        default:
            printf("Opcao invalida, tente novamente!");
            break;
        }

    } while (option != 4);
    
    return 0;
	
}