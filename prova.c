#include <stdio.h>

int main() {
   // variáveis
    int opcao, abastecimento, servico, l_ou_d, reajuste, mais_servico, mais_servico1;
    float dinheiro, total, litros, reajuste_acrescimo, reajuste_desconto, troca_oleo, higienizacao, regular_pressao;
    float gasolina =  6.90;
    float gas_natural = 4.07;
    float diesel = 5.87;
    float etanol = 4.04;
    float alcool = 4.55;
   //entrada de dados
   do{
   
    printf("==== POSTO SHELL ====\n");
    printf("Digite o número correspondente à opção que deseja:\n");
    printf("1. Abastecimento\n2. Serviços\n3. Conversão de preços\n");
    printf("=====================\n");
    printf("Digite o número: ");
    scanf("%d", &opcao);
    printf("\n==== POSTO SHELL ====\n");
        
       switch (opcao){
           do{
                case 1:
                printf("Digite qual o número correspondente ao tipo de combustível que deseja abastecer:\n");
                printf("\n1. Gasolina\n2. Gás natural\n3. Diesel\n4. Etanol\n5. Alcool\n");
                printf("=====================\n");
                scanf("%d", &abastecimento);
                
                
                do{
                    printf("\n==== POSTO SHELL ====\n");
                    printf("Se você deseja abastecer uma quantidade específica de litros, digite: 1\n");
                    printf("Se você deseja abastecer um valor específico em dinheiro, digite: 2\n");
                    printf("=====================\n");
                    scanf("%d", &l_ou_d);
                    
                        if(l_ou_d == 1){
                            printf("Digite quantos litros você deseja abastecer: ");
                            scanf("%f", &litros);
                        }else if(l_ou_d == 2){
                            printf("Digite qual o valor que você deseja abastecer: ");
                            scanf("%f", &dinheiro);
                        }else {
                            printf("número inválido. Digite 1 ou 2\n");
                        }
                        
                }while (l_ou_d < 1 || l_ou_d > 2);
                    
                    
                    if(l_ou_d == 1){
                        
                        if(abastecimento == 1){
                            total = 6.90 * litros; //calculando o preço da gasolina
                            printf("\n==== POSTO SHELL ====\n");
                            printf("\nO valor do abastecimento será: %.2f\n", total);
                            printf("=====================\n");
                            
                        }else if(abastecimento == 2){
                            total = litros * 4.07; //calculando o preço do gás natural
                            printf("\n==== POSTO SHELL ====\n");
                            printf("\nO valor do abastecimento será: %.2f\n", total);
                            printf("=====================\n");
                            
                        }else if(abastecimento == 3){
                            total = litros * 5.87; //calculando o preço do diesel
                            printf("\n==== POSTO SHELL ====\n");
                            printf("\nO valor do abastecimento será: %.2f\n", total);
                            printf("=====================\n");
                            
                        }else if(abastecimento == 4){
                            total = litros * 4.04; //calculando o preço do etanol
                            printf("\n==== POSTO SHELL ====\n");
                            printf("\nO valor do abastecimento será: %.2f\n", total);
                            printf("=====================\n");
                            
                        }else if(abastecimento == 5){
                            total = litros * 4.55; //calculando o preço do alcool
                            printf("\n==== POSTO SHELL ====\n");
                            printf("\nO valor do abastecimento será: %.2f\n", total);
                            printf("=====================\n");
                            
                        }else  {
                            printf("\nOpção inválida. Digite um número que esteja dentro do esperado.\n");
                        }
                        
                    }else if(l_ou_d == 2){
            
                        if(abastecimento == 1){
                            total = dinheiro / 6.90; //calculando o preço da gasolina
                            printf("\n==== POSTO SHELL ====\n");
                            printf("\nA quantidade total de litros será: %.2f\n", total);
                            printf("=====================\n");
                            
                        }else if(abastecimento == 2){
                            total = dinheiro / 4.07; //calculando o preço do gás natural
                            printf("\n==== POSTO SHELL ====\n");
                            printf("\nA quantidade total de metros cúbicos será: %.2f\n", total);
                            printf("=====================\n");
                            
                        }else if(abastecimento == 3){
                            total = dinheiro / 5.87; //calculando o preço do diesel
                            printf("\n==== POSTO SHELL ====\n");
                            printf("\nA quantidade total de litros será: %.2f\n", total);
                            printf("=====================\n");
                            
                        }else if(abastecimento == 4){
                            total = dinheiro / 4.04; //calculando o preço do etanol
                            printf("\n==== POSTO SHELL ====\n");
                            printf("\nA quantidade total de litros será: %.2f\n", total);
                            printf("=====================\n");
                            
                        }else if(abastecimento == 5){
                            total = dinheiro / 4.55; //calculando o preço do alcool
                            printf("\n==== POSTO SHELL ====\n");
                            printf("\nA quantidade total de litros será: %.2f\n", total);
                            printf("=====================\n");
                            
                        }else  {
                            printf("\nOpção inválida. Digite um número que esteja dentro do esperado.");
                        }
                    }
                    break;
            }while (abastecimento < 1 || abastecimento > 5);
           
           case 2:
           printf("Digite o número correspondente ao serviço que deseja selecionar:\n");
           printf("1. Troca de óleo\n2. Higienização do veículo\n3. Regular a pressão dos pneus\n");
           scanf("%d", &servico);
            
                if(servico == 1){
                        troca_oleo = 30; //calculando o preço da troca de oleo
                        printf("\nO preço a ser pago será de: %.2f", troca_oleo);
                }else if(servico == 2){
                        higienizacao = 25; //calculando o preço da higienização
                        printf("\nO preço a ser pago será de: %.2f", higienizacao);
                }else if(servico == 3){
                        regular_pressao = 20; //calculando o preço da regulação da pressão do pneu
                        printf("\nO preço a ser pago será de: %.2f", regular_pressao);
                }
                break;
           
           case 3:
           printf("Digite o número correspondente ao tipo conversão de preço que você deseja fazer:\n");
           printf("1. Acréscimo\n2. Desconto\n");
           scanf("%d", &reajuste);
           
               if(reajuste == 1){
                   printf("Qual o valor percentual do acréscimo?");
                   scanf("%f", &reajuste_acrescimo);
                   
                   //novos valores:
                   gasolina = (reajuste_acrescimo / 100) * 6.90 + gasolina;  
                   gas_natural = (reajuste_acrescimo / 100) * 4.07 + gas_natural;
                   diesel = (reajuste_acrescimo / 100) * 5.87 + diesel;
                   etanol = (reajuste_acrescimo / 100) * 4.04 + etanol;
                   alcool = (reajuste_acrescimo / 100) * 4.55 + alcool;
                   
               }else if(reajuste == 2){
                   printf("Qual o valor percentual do desconto?");
                   scanf("%f", &reajuste_desconto);
                   
                   //novos valores:
                   gasolina = (reajuste_desconto / 100) * 6.90 - gasolina;  
                   gas_natural = (reajuste_desconto / 100) * 4.07 - gas_natural;
                   diesel = (reajuste_desconto / 100) * 5.87 - diesel;
                   etanol = (reajuste_desconto / 100) * 4.04 - etanol;
                   alcool = (reajuste_desconto / 100) * 4.55 - alcool;
               } 
               break;
            default:
            printf("Número inválido. Digite o número novamente.");
            break;
           
        }
        
        do{
            printf("Você deseja mais algum serviço? Se sim, digite 1, se não, digite 2\n");
            scanf("%d", &mais_servico);
            
                if (mais_servico == 1) {
                    
                }else if(mais_servico == 2){
                    printf("O valor total da compra será: ");
                }else {
                    printf("Digite um número válido.\n\n");
                }
                
        }while (mais_servico <1 || mais_servico >2);
        
   }while (mais_servico == 1);
    
    
    
    
   
   
   

    return 0;
}