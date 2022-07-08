#include <stdio.h>
#include <stdlib.h>

struct Node // estrutura da lista linear
{
  int num;
  struct Node *prox;
};
typedef struct Node node;

int tam;

void inicia(node *LISTA);
int menu(void);
void opcao(node *LISTA, int op);
void insereInicio(node *LISTA);
void exibe(node *LISTA);
void libera(node *LISTA);
node *retiraInicio(node *LISTA);
node *retira(node *LISTA);

int main(void)
{
  node *LISTA = (node *)malloc(sizeof(node));
  if (!LISTA)
  {
    printf("Sem memoria disponivel!\n");
    exit(1);
  }
  else
  {
    inicia(LISTA);
    int opt;

    do
    {
      opt = menu();
      opcao(LISTA, opt);
    } while (opt);

    free(LISTA);
    return 0;
  }
}

void inicia(node *LISTA)
{
  LISTA->prox = NULL;
  tam = 0;
}

int menu(void)
{
  int opt;

  printf("Escolha a opcao\n");
  printf("1. Sair\n");
  printf("2. Exibir lista\n");
  printf("3. Adicionar node\n");
  printf("4. Remover node\n");
  printf("Opcao: ");
  scanf("%d", &opt);
  system("cls");
  return opt;
}

void opcao(node *LISTA, int op)
{
  node *tmp;
  switch (op)
  {
  case 1:
    libera(LISTA);
    break;

  case 2:
    exibe(LISTA);
    break;

  case 3:
    insereInicio(LISTA);
    break;

  case 4:
    tmp = retira(LISTA);
    printf("Retirado: %3d\n\n", tmp->num);
    break;

  default:
    printf("Comando invalido\n\n");
  }
}

int vazia(node *LISTA)
{
  if (LISTA->prox == NULL)
    return 1;
  else
    return 0;
}

node *aloca()
{
  node *novo = (node *)malloc(sizeof(node));
  if (!novo)
  {
    printf("Sem memoria disponivel!\n");
    exit(1);
  }
  else
  {
    printf("Novo elemento: ");
    scanf("%d", &novo->num);
    return novo;
  }
}

void insereInicio(node *LISTA)
{
  node *novo = aloca();
  node *oldHead = LISTA->prox;

  LISTA->prox = novo;
  novo->prox = oldHead;

  tam++;
}

node *retiraInicio(node *LISTA)
{
  if (LISTA->prox == NULL)
  {
    printf("Lista ja esta vazia\n");
    return NULL;
  }
  else
  {
    node *tmp = LISTA->prox;
    LISTA->prox = tmp->prox;
    tam--;
    return tmp;
  }
}

void exibe(node *LISTA)
{
  system("cls");
  if (vazia(LISTA))
  {
    printf("Lista vazia!\n\n");
    return;
  }

  node *tmp;
  tmp = LISTA->prox;
  printf("Lista:");
  while (tmp != NULL)
  {
    printf("%5d", tmp->num);
    tmp = tmp->prox;
  }
  printf("\n        ");
  int count;
  for (count = 0; count < tam; count++)
    printf("  ^  ");
  printf("\nOrdem:");
  for (count = 0; count < tam; count++)
    printf("%5d", count + 1);

  printf("\n\n");
}

void libera(node *LISTA)
{
  if (!vazia(LISTA))
  {
    node *proxNode,
        *atual;

    atual = LISTA->prox;
    while (atual != NULL)
    {
      proxNode = atual->prox;
      free(atual);
      atual = proxNode;
    }
  }
}

node *retira(node *LISTA)
{
  int opt,
      count;
  printf("Que posicao, [de 1 ate %d] voce deseja retirar: ", tam);
  scanf("%d", &opt);

  if (opt > 0 && opt <= tam)
  {
    if (opt == 1)
      return retiraInicio(LISTA);
    else
    {
      node *atual = LISTA->prox,
           *anterior = LISTA;

      for (count = 1; count < opt; count++)
      {
        anterior = atual;
        atual = atual->prox;
      }

      anterior->prox = atual->prox;
      tam--;
      return atual;
    }
  }
  else
  {
    printf("Elemento invalido\n\n");
    return NULL;
  }
}
