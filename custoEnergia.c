#include <stdio.h>

void KW(double salarioMinimo, double consumoResidencia, double *valorQuilowatt, double *valorResidencia, double *valorDesconto) {
    *valorQuilowatt = salarioMinimo / 1000;
    *valorResidencia = consumoResidencia * *valorQuilowatt;
    *valorDesconto = *valorResidencia - *valorResidencia * 0.15;
}

int main() {
    double salarioMinimo, consumoResidencia, valorQuilowatt, valorResidencia, valorDesconto;

    printf("Qual o valor do salário mínimo vigente? R$");
    scanf("%lf", &salarioMinimo);
    printf("Qual o consumo de KW da residência? ");
    scanf("%lf", & consumoResidencia);

    KW(salarioMinimo, consumoResidencia, &valorQuilowatt, &valorResidencia, &valorDesconto);

    printf("\nO valor do kWh é              : R$%.2lf\n", valorQuilowatt);
    printf("O consumo no mês foi          : %.1lfkWh\n", consumoResidencia);
    printf("O valor total é               : R$%.2lf\n", valorResidencia);
    printf("O valor com desconto de 15%% é : R$%.2lf\n", valorDesconto);

    return 0;
}