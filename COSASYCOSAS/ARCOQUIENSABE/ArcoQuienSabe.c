//
//  ArcoQuienSabe.c
//  
//
//  Created by Iker Llorens on 22/10/2012.
//
//

#include <stdio.h>
#include <math.h>

float Exponenciador(float Simplon);

int main(void)
{
    float ElEscaner;
    float Primero;
    float Segundo;
    float CosaTemporal;
    float YaTermina;
    
    printf("\nDe que número lo quieres?\n");
    scanf("%f", &ElEscaner);
    getchar();
    Primero=Exponenciador(ElEscaner);
    CosaTemporal=(ElEscaner*(0-1));
    //printf("%f\n", CosaTemporal);
    Segundo=Exponenciador(CosaTemporal);
    YaTermina=((Primero-Segundo)/2);
    printf("%f\n", YaTermina);
    return 0;
}

float Exponenciador(float Simplon)
{
    float ParaRegresar;
    
    //printf("%f\n", Simplon);
    ParaRegresar=exp(Simplon);
    //printf("%f\n", ParaRegresar);
    return ParaRegresar;
}