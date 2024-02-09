#include <iostream>

using namespace std;
bool verificar_cpf(int cpf[11]);
// 496 118 208 79
// 152 923 248 17
int main(){

    int cpf_teste[11] = {4, 9, 6, 1, 1, 8, 2, 0, 8, 7, 9};

    cout << verificar_cpf(cpf_teste);

    return 0;
}

bool verificar_cpf(int cpf[11]){

    int somaVerificador_1 = cpf[0]*10 + cpf[1]*9 + cpf[2]*8 + cpf[3]*7 + cpf[4]*6 + cpf[5]*5 + cpf[6]*4 + cpf[7]*3 + cpf[8]*2;
    int somaVerificador_2 = cpf[0]*11 + cpf[1]*10 + cpf[2]*9 + cpf[3]*8 + cpf[4]*7 + cpf[5]*6 + cpf[6]*5 + cpf[7]*4 + cpf[8]*3;

    cout << "Soma verificador1" << somaVerificador_1 << endl;
    cout << "soma verificador2" << somaVerificador_2 << endl;

    int verificador_1;
    int verificador_2;

    if ((somaVerificador_1 % 11) == 0 || (somaVerificador_1 % 11 == 1))
    {
        verificador_1 = 0;
    }else
    {
        verificador_1 = 11 - (somaVerificador_1 % 11);
    }
    
    if ((somaVerificador_2 % 11) == 0 || (somaVerificador_2 % 11 == 1))
    {
        verificador_2 = 0;
    }else
    {
        verificador_2 = 11 - (somaVerificador_2 % 11);
    }
    

    if (cpf[9] != verificador_1 || cpf[10] != verificador_2){return false;}else{return true;}
}