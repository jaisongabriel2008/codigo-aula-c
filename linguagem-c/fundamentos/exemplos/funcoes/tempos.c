#include <stdio.h>

//variavel 
float calcular_horas_estudadas(int total_semestres, float horas_na_semana, float semanas_mes) {
    int meses_por_periodo = 5;
    
    int total_meses_curso = total_semestres * meses_por_periodo;
    
    float total_semanas_curso = total_meses_curso * semanas_mes;
    
    float conta_final_horas = total_semanas_curso * horas_na_semana;
    
}

int main() {
    int meus_semestres = 0;
    float minhas_horas_semanais = 0.0;
    float semanas_no_mes = 4.0;
    float resultado_do_calculo = 0.0;

    printf("Olá! Vamos calcular o tempo do seu curso?\n");
    
    printf("Quantos semestres tem o seu curso? ");
    scanf("%d", &meus_semestres);

    printf("Quantas horas você estuda por semana? ");
    scanf("%f", &minhas_horas_semanais);

    resultado_do_calculo = calcular_horas_estudadas(meus_semestres, minhas_horas_semanais, semanas_no_mes);

    printf("\n--- Aqui está o seu resultado ---\n");
    printf("Tempo total de curso: %d semestres\n", meus_semestres);
    printf("Sua dedicação semanal: %.1f horas\n", minhas_horas_semanais);
    printf("No final do curso, você terá acumulado: %.1f horas de carga horária!\n", resultado_do_calculo);

    return 0;
}