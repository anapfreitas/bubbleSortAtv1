#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void imprimeVetor(int v[], int n){ // O(1)
    for(int i = 0; i < n; i++){
        printf("%d", v[i]);
    }
    printf("\n");
}


void bubbleSort(int v[], int n){ // O(n^2)
    int troca;
    for(int i = 0; i < n; i++){ 
        troca = 0;
        for(int j = 0; j < n-1; j++){ 
            if(v[j] > v[j+1]){  
                int temp = v[j];
                v[j] = v[j+1]; 
                v[j+1] = temp; 
                troca = 1; 
            }
        }
        if(troca == 0){ 
            break; 
        }
    }
}

void gerarVetor(int v[], int n){  // O(n)
    for(int i = 0; i < n; i++){
        v[i] = rand() % n; 
    }
}

int main (){
    
    int n = 20;
    int v[n]; 

    srand(time(NULL)); 
    gerarVetor(v, n); 
    imprimeVetor(v, n); 
    bubbleSort(v, n); 
    imprimeVetor(v, n); 

    return 0;
}
