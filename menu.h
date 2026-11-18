#ifndef MENU_H
#define MENU_H

int apresentar_menu()
{
    int opcao;
    printf("Escolha uma opcao: \n");
    printf("------------------ \n");
    printf("1 - Incluir veiculos \n");
    printf("2 - Alterar veiculos \n");
    printf("3 - Pesquisar um veiculo \n");
    printf("4 - Excluir e recuperar veiculos \n");
    printf("5 - Apresentar veiculos ativos \n");
    printf("6 - Registrar um abastecimento \n");
    printf("7 - Apresentar relatorio de abastecimentos de um veiculo \n");
    printf("8 - Consumo medio de um veiculo \n");
    printf("9 - Gasto mensal com combustivel \n");
    printf("10 - Veiculos sem abastecimento \n");
    printf("11 - Ranking de gastos \n");
    printf("12 - Resumo \n");
    printf("13 - Finalizar \n");
    printf("------------------ \n");
    printf("Opcao: ");
    scanf("%d", &opcao);
    return opcao;
};



#endif
