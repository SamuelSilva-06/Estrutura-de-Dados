#include <iostream>

using namespace std;

    bool buscarbinaria(int arr[],int esquerda,int direita , int valor){
        if (esquerda > direita)return false;

        int meio = esquerda + (direita - esquerda) / 2;

        if (arr[meio] == valor) return true;

        if (valor < arr[meio])
        {
            return buscarbinaria(arr,esquerda,meio-1,valor);
        }else{
            return buscarbinaria(arr,meio + 1,direita,valor);
        }
        
        
    }

int main(){
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int n = sizeof(arr) / sizeof(arr[0]);
    int valor = 5;
    if (buscarbinaria(arr,0,n - 1,valor))
    {
        printf("o numero %d encontrado no vetor",valor);
    }else{
        printf("o numero %d nao encontrado no vetor",valor);
    }
    
    
}