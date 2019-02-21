#include <stdio.h>
#include <stdlib.h>
#include "Aluno.h"
void main(){
	NDisc=0;
	NAlunos=0;
	/*3
	PF
	1
	LabProg
	2
	Comp
	3
	2
	Joao Almeida
	20130192 1 2
	Clara
	20140020 1 3
	*/
	input();
	printf("#################\n");
	printDisc(Disc);
	printf("#################\n");
	printAlunos(Alunos);
	printf("#################\nAno: ");
	int ano;
	scanf("%d\n", &ano);
	printDiscAno(Disc,ano);
}
