#include <stdio.h>


float calcular_total_horas_curso(int semestres, float horas_semanais, float semanas_por_mes) {
    int meses_por_semestre = 5;
    
    // Total de meses de aula em todo o curso
    int total_meses = semestres * meses_por_semestre;
    
    // Total de semanas de aula em todo o curso
    float total_semanas = total_meses * semanas_por_mes;
    
    // Cálculo final das horas
    float total_horas = total_semanas * horas_semanais;
    
    return total_horas;
}

int main() {

    int semestres = 4;            
    float horas_semanais = 15.0;  
    float semanas_por_mes = 4.0;  
    
    // Chamada da função
    float horas_totais = calcular_total_horas_curso(semestres, horas_semanais, semanas_por_mes);
    
    // Exibição das perguntas
    printf("--- Resumo do Curso ---\n");
    printf("Duracao do curso: %d semestres\n", semestres);
    printf("Carga horaria semanal: %.1f horas\n", horas_semanais);
    printf("Total estimado: %.1f horas de curso\n", horas_totais);
    
    return 0;
}