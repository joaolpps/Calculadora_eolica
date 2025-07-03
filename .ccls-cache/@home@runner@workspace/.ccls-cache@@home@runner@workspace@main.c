#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void ler_configuracao(float *raio, float *cp) {
    FILE *arquivo = fopen("turbina_config.txt", "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo turbina_config.txt\n");
        exit(1);
    }

    fscanf(arquivo, "RaioMetros: %f\n", raio);
    fscanf(arquivo, "CoeficientePotencia: %f\n", cp);
    fclose(arquivo);
}

float calcular_potencia(float densidade, float area, float velocidade, float cp) {
    return 0.5 * densidade * area * pow(velocidade, 3) * cp;
}

int main() {
    float raio, cp;
    float densidade_ar;
    float v_min, v_max;

    ler_configuracao(&raio, &cp);

    printf("Informe a densidade do ar (ex: 1.225): ");
    scanf("%f", &densidade_ar);

    printf("Informe a velocidade mínima do vento (m/s): ");
    scanf("%f", &v_min);

    printf("Informe a velocidade máxima do vento (m/s): ");
    scanf("%f", &v_max);

    float area = M_PI * raio * raio;

    FILE *saida = fopen("relatorio_potencia_eolica.txt", "w");
    if (saida == NULL) {
        printf("Erro ao criar arquivo de saída.\n");
        return 1;
    }

    fprintf(saida, "Velocidade (m/s)\tPotência (Watts)\n");
    printf("\nVelocidade (m/s)\tPotência (Watts)\n");

    for (float v = v_min; v <= v_max; v++) {
        float potencia = calcular_potencia(densidade_ar, area, v, cp);
        printf("%.2f\t\t\t%.2f\n", v, potencia);
        fprintf(saida, "%.2f\t\t\t%.2f\n", v, potencia);
    }

    fclose(saida);
    printf("\nRelatório salvo em relatorio_potencia_eolica.txt\n");

    return 0;
}
