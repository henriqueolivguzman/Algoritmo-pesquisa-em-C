#include <stdio.h>
#include <stdlib.h>

int pesquisa_sequencial(int vetor[], int tamanho, int elementoProcurado) {
    int i;
    for (i = 0; i < tamanho; i++) {
        if (vetor[i] == elementoProcurado) {
            return i;
        }
    }

    return -1;
}

int pesquisa_binaria (int vet[], int chave, int Tam)
{
    int inf = 0;
    int sup = Tam-1;
    int meio;
    while (inf <= sup)
    {
        meio = (inf + sup)/2;
        if (chave == vet[meio])
            return meio;
        if (chave < vet[meio])
            sup = meio-1;
        else
            inf = meio+1;
    }
    return -1;
}

int pesquisa_ordenada(int vet[] , int n , int elemento )
{
    for (int i = 0 ; i<n ; i++){
        if(vet[i] == elemento){
            return i;
        }
        else if (elemento < vet[i]){
            return -1;
        }
    }
    return -1;
}

void menu_principal()
{
        printf("ESCOLHA O TIPO DE PESQUISA DESEJADA : \n");
        printf("1 - PESQUISA SEQUENCIAL OU LINEAR\n");
        printf("2 - PESQUISA ORDENADA\n");
        printf("3 - PESQUISA BINARIA\n");
        printf("4 - SAIR\n");
}

void menu_pesquisa_sequencial(int vet[],int tamanho_vetor , int valor_procurado ){
    int posicao_vetor_procurado = pesquisa_sequencial(vet, tamanho_vetor, valor_procurado);

    if (posicao_vetor_procurado == -1) {
        printf("VALOR PROCURADO NAO EXISTE !\n");
    } else {
        printf("A POSIÇÃO DO VALOR PROCURADO E %d\n", posicao_vetor_procurado);
    }
}

void menu_pesquisa_ordenada(int vet[],int tamanho_vetor , int valor_procurado ){
    int posicao_vetor_procurado = pesquisa_ordenada(vet, tamanho_vetor, valor_procurado);

    if (posicao_vetor_procurado == -1) {
        printf("VALOR PROCURADO NAO EXISTE !\n");
    } else {
        printf("A POSIÇÃO DO VALOR PROCURADO E %d\n", posicao_vetor_procurado);
    }
}

void menu_pesquisa_binaria(int vet[],int tamanho_vetor , int valor_procurado ){
    int posicao_vetor_procurado = pesquisa_binaria(vet, valor_procurado, tamanho_vetor);

    if (posicao_vetor_procurado == -1) {
        printf("VALOR PROCURADO NAO EXISTE !\n");
    } else {
        printf("A POSIÇÃO DO VALOR PROCURADO E %d\n", posicao_vetor_procurado);
    }
}

int main()
{
    int opcao_escolhida = 0 , vet[] = {2,4,8,22,15,78,9,7,5,8,54,27,88,65,75,100}, tamanho_vetor = 16;

    while(opcao_escolhida != 4 ) {
        int valor_procurado;

        menu_principal();
        scanf("%d", &opcao_escolhida);

        if(opcao_escolhida == 4){
            printf("OBRIGADO POR USAR A APLICACAO !");
            break;
        }

        printf("ESCOLHA O VALOR PROCURADO : ");
        scanf("%d", &valor_procurado);

        switch(opcao_escolhida){
            case 1 :
                menu_pesquisa_sequencial(vet , tamanho_vetor , valor_procurado);
                break;
            case 2 :
                menu_pesquisa_ordenada(vet , tamanho_vetor , valor_procurado);
                break;
            case 3 :
                menu_pesquisa_binaria(vet , tamanho_vetor , valor_procurado);
                break;
            default:
                printf("VALOR INVALIDO !");
                break;
        }

    }







    return 0;
}
