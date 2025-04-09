#include <stdio.h>
int main(){
    const int codigo = 123;
    int parametro, senha, opcao = 4;

    float saldo[4] = {0.0 , 350.5, 604.98, 102256.3};
    int id[4] = {0, 1, 2,3};
    int cpf[4] = {0, 152, 604, 102};



    printf("Banco Capivarias\n");
    printf("Digite 1 para executar como administrador\n");
    printf("Digite 2 para executar como cliente\n");
    scanf("%i", &parametro);
    printf("****************************************\n");

    if(parametro == 1){
        do{
        printf("area do administrador\n");
        printf("Digite a senha: ");
        scanf("%i", &senha);

        if(senha == codigo){
            printf("****************************************\n");
            printf("SENHA COREETA\n");
            printf("ACESSO LIBERADO\n");
            printf("****************************************\n");
            break;
        } else{
         printf("SENHA INCORRETA\n");
         printf("ACESSO NEGADO\n");
         printf("****************************************\n");

         opcao = opcao - 1;
         if(opcao == 1){
            printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
            printf("ACESSO NEGADO PERMANENTEMENTE NESSA SECAO\n");
            printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
         }
        }
        } while(opcao > 1);

        int funcionalidade, usuarios;
        float alterar;
        printf("TABELA DE FUNCIONALIDADES\n");
        printf("1 para alterar SALDO do usuario\n");
        printf("2 para alterar ID do usuario\n");
        printf("3 para alterar CPF do usuario\n");
        scanf("%i", &funcionalidade);

        if(funcionalidade == 1){
            printf("Qual dos usuarios voce deseja alterar o valor:(1, 2 ou 3)\n");
            scanf("%i", &usuarios);
            printf("Para qual valor alterar o saldo: \n");
            scanf("%f", &alterar );
            // printf("%f", alterar);
            saldo[usuarios] = alterar;
            printf("o valor foi redefinido para %f\n", saldo[usuarios]);
            printf("****************************************\n");
            printf("O ususario ficou com: \n");
            printf("saldo = %f\n", saldo[usuarios]);
            printf("cpf = %i\n", cpf[usuarios]);
            printf("id = %i\n", id[usuarios]);
        }
        if(funcionalidade == 2){
            printf("Qual dos usuarios voce deseja alterar o valor:(1, 2 ou 3)\n");
            scanf("%i", &usuarios);
            printf("Para qual valor alterar o ID: \n");
            scanf("%f", &alterar );
            // printf("%f", alterar);
            id[usuarios] = alterar;
            printf("o valor foi redefinido para %i\n", id[usuarios]);
            printf("****************************************\n");
            printf("O ususario ficou com: \n");
            printf("saldo = %f\n", saldo[usuarios]);
            printf("cpf = %i\n", cpf[usuarios]);
            printf("id = %i\n", id[usuarios]);
        }
            if(funcionalidade == 3){
            printf("Qual dos usuarios voce deseja alterar o valor:(1, 2 ou 3)\n");
            scanf("%i", &usuarios);
            printf("Para qual valor alterar o CPF: \n");
            scanf("%f", &alterar );
            // printf("%f", alterar);
            cpf[usuarios] = alterar;
            printf("o valor foi redefinido para %i\n", cpf[usuarios]);
            printf("****************************************\n");
            printf("O ususario ficou com: \n");
            printf("saldo = %f\n", saldo[usuarios]);
            printf("cpf = %i\n", cpf[usuarios]);
            printf("id = %i\n", id[usuarios]);
        }


    }




return 0; }
