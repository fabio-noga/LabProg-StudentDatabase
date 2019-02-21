#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Aluno.h"
void input(){
	int i,n,j,m;
	int ano,codDiscAluno;
	char name[MAX],cod[MAX];
	printf("Quantidade: ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Nome: ");
		scanf("%s",name);
		printf("Ano: ");
		scanf("%d",&ano);
		Disc[NDisc] = newDisc(name,ano);
		NDisc++;
		//printf("1DISC: %d\n",NDisc);
		//Disc=malloc(sizeof(int)*NDisc);
	}
	printf("Quantidade: ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		int d[MAXALUNOS];
		printf("Nome: ");
		scanf("%s",name);
		printf("Codigo: ");
		scanf("%s",cod);
		printf("Num. Disciplinas: ");
		scanf("%d",&m);
		for(j=0;j<m;j++){
			printf("Ano Disc: ");
			scanf("%d",&codDiscAluno);
			d[j]=codDiscAluno;
		}
		Alunos[NAlunos]= newAluno(name,cod,d,j);
		NAlunos++;
		//printf("1DISC: %d\n",NDisc);
		//Disc=malloc(sizeof(int)*NDisc);
	}
	//ALUNO name1= newAluno(name,char cod[],int d[],int ndisc);
	//DISCIPLINA disc= newDisc(name,ano);
}
void printAlunos(ALUNO l[]){
	int i,j;
	for(i=0;i<NAlunos;i++) {
		printf("%s - ",l[i].nome);
		printf("%s\n",l[i].codigo);
		printf("Disciplinas: ");
		for(j=0;j<l[i].nd;j++){
			printf("%d ",l[i].disc[j]);
		}
		printf("\n");
	}
	}
void printDisc(DISCIPLINA d[]){
	int i;
	for(i=0;i<NDisc;i++) {
		printf("%s - ",d[i].nome);
		printf("%d\n",d[i].ano);
	}
}
void printDiscAno(DISCIPLINA d[],int a){
	int i;
	for(i=0;i<NDisc;i++) {
		if(d[i].ano==a){
			printf("%s - ",d[i].nome);
			printf("%d\n",d[i].ano);
		}
	}
}
ALUNO newAluno(char *n,char cod[],int d[],int ndisc1){
	/*Joao Almeida
	20130192
	1 2*/
	ALUNO a;
	int i=0;
	a.nome=(char *)malloc((strlen(n)+1)*sizeof(char));
	a.nome=strdup(n);
	strcpy(a.codigo,cod);
	i=0;
	for(i=0;i<ndisc1;i++){
		a.disc[i]=d[i];
	}
	a.nd=ndisc1;
	return a;
}
DISCIPLINA newDisc(char *n,int a){
	DISCIPLINA b;
	b.nome=(char *)malloc((strlen(n)+1)*sizeof(char));
	b.nome=strdup(n);
	b.ano=a;
	return b;
}
