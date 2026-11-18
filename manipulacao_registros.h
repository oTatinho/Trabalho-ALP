#ifndef MANIPULACAO_REGISTROS_H
#define MANIPULACAO_REGISTROS_H

struct veiculo {
    int codigo, ano;
    float km_atual;
    char placa[7], char modelo[TAM_MODELO], char situacao;
};

struct abastecimento {
    int dia, mes, ano, veiculo;
    float litros, valor_litro, km_abastecimento;
};

void incluir_veiculos()
{


}




#endif
