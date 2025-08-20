#include <iostream>
#include <cstdio>

using namespace std;
    
    bool buscarmatriz(int numero[][4],int i,int j,int& x,int& linhas,int& colunas){
        if (i == linhas) return false;

        if (numero[i][j] == x) return true;
        
        if (j == colunas - 1)
        {
            return buscarmatriz(numero,i + 1,0,x,linhas,colunas);
        }else{
            return  buscarmatriz(numero,i,j + 1,x,linhas,colunas);
        }
        

        
    }

int main() {
    int  numero[4][4] = {
        {8 , 9 , 10 , 20 },
        {30, 50 , 4 , 45 },
        {2 , 1 , 22 , 3  },
        {11 , 200 , 5 , 7},
    };

    int linhas = sizeof(numero) / sizeof(numero[0]);       
    int colunas = sizeof(numero[0]) / sizeof(numero[0][0]); 
    

    int x;
    
    printf("Digite um numero\n");
    cin >> x;

    if (buscarmatriz(numero,0,0,x,linhas,colunas))
    {
        printf("Numero %d Pertence a matriz\n",x);
    }else{
        printf("Numero %d nao Pertence a matriz\n",x);
    }
    return 0;

}