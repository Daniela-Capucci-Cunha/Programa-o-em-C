#include <stdio.h>

int main(){
int h_inicio, m_inicio, s_inicio;
int duracao_segundos;
int h_fim, m_fim, s_fim;
long total_segundos;
  
printf("Digite o horario de inicio (hora minuto segundo):");
scanf("%d %d %d",&h_inicio, &m_inicio, &s_inicio);

printf("Digite a duracao da experiencia em segundos:");
scanf("%d", &duracao_segundos);

total_segundos = (h_inicio * 3600) + (m_inicio * 60) + s_inicio;
total_segundos += duracao_segundos;
total_segundos = total_segundos % 86400;

h_fim = total_segundos/ 3600;
m_fim = (total_segundos % 3600) / 60;
s_fim = total_segundos % 60;

printf("\nHorário de termino: %02d:%02d:%02d\n", h_fim, m_fim, s_fim);
return 0;  
  
}
