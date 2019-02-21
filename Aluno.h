#define MAX 255
#define MAXALUNOS 1000
#define MAXDISC 1000
typedef struct aluno{
	char *nome, codigo[MAX];
	int disc[MAX],nd;
}ALUNO;
typedef struct disciplina{
	char *nome;
	int ano;
}DISCIPLINA;
ALUNO Alunos[MAXALUNOS];
DISCIPLINA Disc[MAXDISC];
int NDisc,NAlunos;
ALUNO newAluno(char *n,char cod[],int d[],int ndisc1);
DISCIPLINA newDisc(char *n,int a);
void input();
void printAlunos(ALUNO l[]);
void printDisc(DISCIPLINA d[]);
void printDiscAno(DISCIPLINA d[],int a);
