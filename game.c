#include <stdio.h>

int main() {
    //variáveis
    int config_jogo, tentativas, nova_config, nova_config1;
    char palavra_secreta[20];
    
    do{
        printf("==== JOGO DA FORCA ====\n");
        printf("1. Iniciar Jogo\n2. Configurar Palavra e Tentativas\n3. Sair\n=========================\n");
        scanf("%d", &config_jogo);
        printf("======JOGO DA FORCA======\n");
        switch(config_jogo){
            case 1:
                printf("Por favor, primeiro configure a quantidade de tentativas e a palavra secreta!\n\n");
                break;
            case 2:
                printf("Digite a palavra secreta:\n");
                scanf("%s", palavra_secreta);
                printf("\nAgora digite o número máximo de tentativas.\n");
                scanf("%d", &tentativas);
                break;
            case 3:
                printf("Saindo do jogo...\n");
                return 0;
            default:
                printf("Opção inválida, digite um número que esteja entre as opções.\n\n");
        }
    }while (config_jogo <= 1 || config_jogo > 3);
    
    do{
    printf("\n==== JOGO DA FORCA ====\nDeseja continuar com essas configurações?\n1. Sim\n2. Não\n=========================\n\n");
    scanf("%d", &nova_config);
        if (nova_config == 1) {
            printf("\n==== JOGO DA FORCA ====\nVamos Iniciar o Jogo! Boa sorte.\n");
        }else if (nova_config == 2){
            do{
                printf("\n==== JOGO DA FORCA ====\nO que deseja fazer?\n1. Mudar Palavra Secreta e Número de Tentativas \n2. Sair\n=========================\n\n");
                scanf("%d", &nova_config1);
                    switch(nova_config1){
                        case 1:
                            printf("\nDigite a palavra secreta:\n");
                            scanf("%s", palavra_secreta);
                            printf("\nAgora digite o número máximo de tentativas:\n");
                            scanf("%d", &tentativas);
                            break;
                        case 2: 
                            printf("Saindo do jogo...\n");
                            return 0;
                        default:
                            printf("Opção inválida, digite um número que esteja entre as opções.\n\n");
                            break;
                    }
                    }while (nova_config1 > 2 || nova_config1 < 1);
        }else {
            printf("Opção inválida, digite um número que esteja entre as opções.\n\n");
        }
    }while (nova_config < 1 || nova_config == 2);
            
    
    
    
    return 0;
}