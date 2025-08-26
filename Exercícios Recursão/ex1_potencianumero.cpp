#include <iostream>

using namespace std;

    int potencia(int base ,int expoente){
        // caso base - qualquer número elevado a zero é 1.
        if (expoente == 0) return 1;
        
        return base * potencia(base,expoente - 1);
        
        
        
    }

int main(){
    int base = 2;
    int expoente = 3;

    int resultado = potencia(base,expoente);
    printf("%d elevado a %d e : %d",base,expoente,resultado);
}