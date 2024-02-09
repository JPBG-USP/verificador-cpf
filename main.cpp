#include <iostream>

using namespace std;
bool verificar_cpf(int cpf[11]);

int main(){

    int cpf_teste[11] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 0};

    cout << verificar_cpf(cpf_teste);

    return 0;
}

bool verificar_cpf(int cpf[11]){

    int somaVerificador_1 = (cpf[0]*10 + cpf[1]*9 + cpf[2]*8 + cpf[3]*7 + cpf[4]*6 + cpf[5]*5 + cpf[6]*4 + cpf[7]*3 + cpf[8]*2) % 11;
    int somaVerificador_2 = (cpf[0]*11 + cpf[1]*10 + cpf[2]*9 + cpf[3]*8 + cpf[4]*7 + cpf[5]*6 + cpf[6]*5 + cpf[7]*4 + cpf[8]*3 + (11 - somaVerificador_1)*2) % 11;

    int verificador_1;
    int verificador_2;

    if (somaVerificador_1 == 0 || somaVerificador_1 == 1)
    {
        verificador_1 = 0;
    }else
    {
        verificador_1 = 11 - somaVerificador_1;
    }
    
    if (somaVerificador_2 == 0 || somaVerificador_2 == 1)
    {
        verificador_2 = 0;
    }else
    {
        verificador_2 = 11 - somaVerificador_2;
    }
    
    cout << "Digitos verificadores: " << verificador_1 << verificador_2 << endl;
    if (cpf[9] != verificador_1 || cpf[10] != verificador_2){return false;}else{return true;}
}