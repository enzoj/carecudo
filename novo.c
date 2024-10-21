#include <stdio.h>

int main() {
    int opcao, tipoCombustivel, tipoServico, quantidade, desconto = 0;
    float precoAlcool = 5.50;
    float precoGasolina = 6.00;
    float precoGNV = 4.00;
    float valorTrocaOleo = 80.00;
    float valorHigienizacao = 150.00;
    float valorBorracharia = 50.00;
    float volume, tempTotal, total;

    do {
        printf("\nBem-vindo ao Posto de Gasolina!\n");
        printf("Escolha uma opção:\n");
        printf("1. Abastecimento\n");
        printf("2. Serviços\n");
        printf("3. Conversão de Preços\n");
        printf("4. Sair\n");
        printf("Digite o número da opção: ");
        scanf("%d", &opcao);

        if (opcao == 1) { // Abastecimento
            printf("Escolha o tipo de combustível:\n");
            printf("1. Álcool\n");
            printf("2. Gasolina\n");
            printf("3. Gás Natural\n");
            printf("Digite o número da opção: ");
            scanf("%d", &tipoCombustivel);

            if (tipoCombustivel == 3){
                printf("Digite a quantidade de metros cubícos: ");
            } else{
                printf("Digite a quantidade de litros: ");
            }
            scanf("%f", &volume);

            if (tipoCombustivel == 1) {
                tempTotal = volume * precoAlcool;
                printf("Total deste abastecimento: R$ %.2f\n", tempTotal);
            } else if (tipoCombustivel == 2) {
                tempTotal = volume * precoGasolina;
                printf("Total deste abastecimento: R$ %.2f\n", tempTotal);
            } else if (tipoCombustivel == 3) {
                tempTotal = volume * precoGNV;
                printf("Total deste abastecimento: R$ %.2f\n", tempTotal);
            } else {
                printf("Opção inválida!\n");
            }
            total += tempTotal;
            printf("Total a geral a pagar: R$ %.2f\n", total);
        } else if (opcao == 2) { // Serviços
            do {
                printf("\nEscolha um serviço:\n");
                printf("1. Troca de Óleo - R$ %.2f\n", valorTrocaOleo);
                printf("2. Higienização - R$ %.2f\n", valorHigienizacao);
                printf("3. Borracharia - R$ %.2f\n", valorBorracharia);
                printf("4. Sair\n");
                printf("Digite o número da opção: ");
                scanf("%d", &tipoServico);

                if (tipoServico >= 1 && tipoServico <= 3) {
                    printf("Quantos serviços deseja realizar? ");
                    scanf("%d", &quantidade);

                    if (quantidade >= 10) {
                        desconto = 10; // 10% de desconto
                    }

                    tempTotal = 0; 

                    if (tipoServico == 1) {
                        tempTotal = quantidade * valorTrocaOleo * (1 - desconto / 100.0);
                    } else if (tipoServico == 2) {
                        tempTotal = quantidade * valorHigienizacao * (1 - desconto / 100.0);
                    } else if (tipoServico == 3) {
                        tempTotal = quantidade * valorBorracharia * (1 - desconto / 100.0);
                    }

                    printf("Total a pagar pelos serviços: R$ %.2f\n", tempTotal);
                    total =+ tempTotal;
                    printf("Total geral: R$ %.2f\n", total);

                    quantidade = 0;
                } else if (tipoServico != 4) {
                    printf("Opção inválida!\n");
                }

            } while (tipoServico != 4);
        } else if (opcao == 3) { // Conversão de Preços
            printf("\nEscolha o tipo de combustível:\n");
            printf("1. Álcool\n");
            printf("2. Gasolina\n");
            printf("3. Gás Natural\n");
            printf("Digite o número da opção: ");
            scanf("%d", &tipoCombustivel);

            float valorAntigo, novoValor;

            if (tipoCombustivel == 1){
            printf("Digite o valor antigo era: %.2f\n", precoAlcool); //switch opcoes ou if 
            }else if (tipoCombustivel == 2){
            printf("Digite o valor antigo era: %.2f\n", precoGasolina); //switch opcoes ou if 
            }else if (tipoCombustivel == 3){
            printf("Digite o valor antigo era: %.2f\n", precoGNV); //switch opcoes ou if 
            }

            printf("Digite o novo valor: ");
            scanf("%f", &novoValor);

            if (tipoCombustivel == 1) {
                printf("Valor do Álcool alterado de R$ %.2f para R$ %.2f\n", precoAlcool, novoValor);
                precoAlcool = novoValor;
            } else if (tipoCombustivel == 2) {
                printf("Valor da Gasolina alterado de R$ %.2f para R$ %.2f\n", precoGasolina, novoValor);
                precoAlcool = precoGasolina;
            } else if (tipoCombustivel == 3) {
                printf("Valor do Gás Natural alterado de R$ %.2f para R$ %.2f\n", precoGNV, novoValor);
                precoGNV = novoValor;
            } else {
                printf("Opção inválida!\n");
            }
        } else if (opcao != 4) {
            printf("Opção inválida!\n");
        }

    } while (opcao != 4);

    return 0;
}