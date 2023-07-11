 #include <stdio.h>

int main(void)
{
  //Declaração das variáveis
  float nota1, nota2, media;
  int i;
  

  //Entrada de dados
  for (i = 1; i<=2; i++)
  {
    
    printf("Digite a primeira nota do aluno %d\n",i);
    scanf("%f",&nota1);
  
    printf("Digite a segunda nota do aluno %d\n",i);
    scanf("%f",&nota2);
  
    //Processamento
    media = (nota1 + nota2) / 2;
  
    //Saída
    printf("\nMedia do aluno %d = %.1f\n",i,media);
  
  }
  
  return(0);
}