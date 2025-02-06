#include <stdio.h>

int main(){

int idade, matricula;
float altura;
char nome[50];

  printf ("Matricula do aluno(a):");

  printf ("\nDigite sua idade: ");
  scanf ("%d", &idade);

  printf ("Digite sua altura: ");
  scanf ("%f", &altura);

  printf ("Digite seu nome: ");
  scanf ("%49s", &nome);

  printf ("Digite sua matricula: ");
  scanf ("%d", &matricula);

  printf ("\nDados da matricula do aluno(a):\nNome do aluno: %s\nIdade: %d\nAltura: %f\nN° da matricula: %d", nome, idade, altura, matricula);

}