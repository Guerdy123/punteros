#include <stdio.h>

void capturarTamano(int*);
void capturarValores(int, int[]);
void mostrarArreglo(int , int []);


void capturarTamano(int *tamano){ //Recibe 20aafe como valor. Direccion:feaa16
    printf("Digite el tamano:");
    scanf("%d",tamano);//&tamano =feaa16  //tamano =20aafe

}
void capturarValores(int n,int arreglo[]){
    for (int i = 0; i < n; i++) {
        do {
            printf("Digite el valor %d",i+1);
            scanf("%d",arreglo+i);
            if(*(arreglo+i) <= 0)
                printf("Solo se permiten valores positivos");
        } while (*(arreglo+i)<= 0);


    }
}
void mostrarArreglo(int n,int arreglo[]){
    for (int i = 0; i < n; i++) {
        printf( " %d\n",arreglo[i]);


    }
}

int main() {

    int tam; //Valor : Indefinido, Direccion: 20aafe
    capturarTamano(&tam); // Pasar la direccion memoria de tam(20aafe)
    int arreglo[tam];
    capturarValores(tam,arreglo);
    mostrarArreglo(tam,arreglo);


    return 0;
}


