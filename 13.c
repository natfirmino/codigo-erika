include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");

	int  ausencia = 0,alunos = 0, alunos_m,i = 0, total_turmas_com_ausencia = 0 ;
	char status,id_turma = 65  ;
	printf("Existem 14 turmas, vamos calcular a porcentagem de ausência.");
	
	
//  Um loop que roda 14 vezes
	for(i; i < 14;i++){
		ausencia = 0;
		printf("\nQuantos alunos estão matriculados na turma %c:?",id_turma);
		scanf("%d",&alunos_m);
		
		
		int alunos = 0;
		
//		um loop que roda de acordo com o numero de alunos_m 
		for(alunos; alunos < alunos_m; alunos++ ){
			printf("Aluno presente?[P / A]: ");
			scanf(" %c",&status);
			if(status == 'P'){
				ausencia+=0;
			}	
			else if(status == 'A'){
				ausencia++;
				
			}
			else{
				printf("  !!!!!  Digite um valor válido  !!!!!");
			}
		}
		
		
		if(status == 'A' || status == 'P'){
				
			float porcentagem_ausencia = ((float) ausencia / alunos_m) * 100;
			printf("\n");
			printf("%.2f%% de ausencia.",porcentagem_ausencia);
			
			if (porcentagem_ausencia > 5) {
	            total_turmas_com_ausencia++;
	        }
	        id_turma++;
			
		}
	
	}
	
	printf("\nTotal de turmas com porcentagem de ausência superior a %d%%: %d\n", 5, total_turmas_com_ausencia);
	


}