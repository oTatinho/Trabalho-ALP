#include <stdio.h>
#include "menu.h"
#include "manipulacao_registros.h"
#define TAM_MODELO 90

struct Veiculo {
    int codigo, ano;
    char placa[7];
    char modelo[TAM_MODELO];
    float km_atual;
    char situacao;

};

struct Abastecimento {
    int dia, mes, ano, veiculo;
    float litros, valor_litro, km_abastecimento;
};


int main()
{
    int opcao;
    opcao = apresentar_menu();
    printf("%d",opcao);

    return 0;
}
