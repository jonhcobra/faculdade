#ifndef FUNCIONARIO_C_INCLUDED
#define FUNCIONARIO_C_INCLUDED
struct TFunc{
    int codigo;
    char nome[30];
    float salario;
};

typedef struct TFunc Funcionario;


int insere_funcionario(Funcionario func[]);
int mostra_funcionarios(Funcionario func[]);
int apaga_funcionarios();
void obtem_func();



#endif // FUNCIONARIO_C_INCLUDED