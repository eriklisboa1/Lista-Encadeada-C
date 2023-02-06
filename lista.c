#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

struct Produtos {
char nome[100];
struct Produtos *prox;
};

struct Produtos *aloca(){
return malloc (sizeof (struct Produtos));
};

void addItem(struct Produtos *cabeca, char *nome){
struct Produtos *aux,*novo;

aux = cabeca;

while(aux->prox!=NULL){
    aux = aux->prox;
}
novo = aloca ();
strcpy(novo->nome,nome);
novo->prox = NULL;

aux->prox = novo;
}

void imprimirLista(struct Produtos *cabeca) {
struct Produtos *atual = cabeca->prox; //inicia com o primeiro item
while(atual != NULL) {
printf("%s\n", atual->nome);
atual = atual->prox;
}
}

void removerItem(struct Produtos *cabeca, char *nome) {
struct Produtos *atual = cabeca;
while(atual->prox != NULL) {
if(strcmp(atual->prox->nome, nome) == 0) {
struct Produtos *temp = atual->prox;
atual->prox = temp->prox;
free(temp);
return;
}
atual = atual->prox;
}
}

int main(){

struct Produtos deposito;
deposito.prox = NULL;
char nomeProdutos[30];
int quant,quant1,op,op1;
bool run = true;

printf("ATACADAO LISBOA\n\n");
while(run){
printf("Voce quer acessar qual estoque?\n1-LIVROS\n2-SMARTPHONE\n3-MERCADO\n4-MOSTRAR TUDO\n5-SAIR\n");
scanf("%d",&op);
switch(op){
    system("cls");
case 1:
    //LIVROS
    system("cls");
printf("Estoque escolhido = LIVROS\n");
printf("1-ADICIONAR LIVRO\n2-REMOVER LIVRO\n3-MOSTRAR\n");
scanf("%d",&op1);
switch(op1){
    case 1:
        system("cls");
printf("quantos livros voce quer adicionar?\n");
scanf("%d",&quant);
for(int i = 0; i < quant; i++){
printf("Digite o nome do livro a ser adicionado:\n ");
scanf("%s", nomeProdutos);
addItem(&deposito, nomeProdutos);
}
system("cls");
break;
    case 2:
        system("cls");
imprimirLista(&deposito);
printf("Quanto livros voce quer remover?\n");
scanf("%d",&quant1);
for(int i =0; i < quant1; i++){
printf("Digite o nome do livro a ser removido:\n ");
scanf("%s", nomeProdutos);
removerItem(&deposito, nomeProdutos);
}
break;
    case 3:
printf("\n\n");
system("cls");
printf("LISTA DE LIVROS:\n");
imprimirLista(&deposito);
return 0;
break;
}
break;
    case 2:
    //SMARTPHONE
    system("cls");
printf("estoque escolhido = SMARTPHONE\n");
printf("1-ADICIONAR SMARTPHONE\n2-REMOVER SMARTPHONE\n3-MOSTRAR\n");
scanf("%d",&op1);
switch(op1){
    case 1:
    system("cls");
printf("quantos smarthphone voce quer adicionar\n");
scanf("%d",&quant);
for(int i = 0; i < quant; i++){
printf("Digite o nome do smartphone a ser adicionado:\n");
scanf("%s",&nomeProdutos);
addItem(&deposito, nomeProdutos);
}
system("cls");
break;
    case 2:
system("cls");
imprimirLista(&deposito);
printf("Quanto smartphone voce quer remover?\n");
scanf("%d",&quant1);
for(int i =0; i < quant1; i++){
printf("Digite o nome do smartphone a ser removido:\n ");
scanf("%s", nomeProdutos);
removerItem(&deposito, nomeProdutos);
imprimirLista(&deposito);
}
system("cls");
break;
    case 3:
printf("\n\n");
system("cls");
printf("LISTA DE SMARTPHONE:\n");
imprimirLista(&deposito);
return 0;
break;
}
break;
    case 3:
    //MERCADO
    system("cls");
printf("Estoque escolhido = MERCADO\n");
printf("1-ADICIONAR PRODUTOS\n2-REMOVER PRODUTOS\n3-MOSTRAR\n");
scanf("%d",&op1);
switch(op1){
    case 1:
        system("cls");
printf("Quanto produtos voce quer adicionar?\n");
scanf("%d",&quant);
for(int i = 0; i < quant; i++){
printf("Digite o nome do produto a ser adicionado:\n");
scanf("%s",&nomeProdutos);
addItem(&deposito, nomeProdutos);
}
system("cls");
break;
    case 2:
        system("cls");
imprimirLista(&deposito);
printf("Quanto produtos voce quer remover?\n");
scanf("%d",&quant1);
for(int i =0; i < quant1; i++){
printf("Digite o nome do produto a ser removido:\n ");
scanf("%s", nomeProdutos);
removerItem(&deposito, nomeProdutos);
}
system("cls");
break;
    case 3:
printf("\n\n");
system("cls");
printf("LISTA DE PRODUTUOS:\n");
imprimirLista(&deposito);
return 0;
break;
}
break;
    case 4:
        //IMPRIMIR TUDO
    system("cls");
imprimirLista(&deposito);
return 0;
break;
    case 5:
    run = false;
    system("cls");
    printf("Programa encerrado");
break;
}

}
}

