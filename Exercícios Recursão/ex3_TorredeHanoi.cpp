#include <iostream>

using namespace std;
 
    void TorredeHanoi(int n, string origem, string destino, string auxiliar){
        if (n == 0)return;

        TorredeHanoi(n-1,origem,auxiliar,destino);

        printf("Mova o disco %d do %s para o %s \n",n,origem.c_str(),destino.c_str());

        TorredeHanoi(n-1,auxiliar,destino,origem);
        
        
    }


int main(){
    int nDisco = 3;
    printf("Passos para resolver a Torre de Hanoi com %d Discos:\n",nDisco);

    TorredeHanoi(nDisco,"Pino A","Pino C","Pino B");

    return 0;
}