//Creado por Iker Llorens Lara el 29/10/2012
//maymen.c
/*
Este programa determina el número mayor y el menor de un arreglo, se llama
desde el programa eje2.c
*/

//Definición de Funciones
//Mayor y Menor

extern void AntiCaos(float Caos[], float *PuntMay, float *PuntMen)
{
    float Temporal;
    int MasterOfPuppets;
    int DisposableHero;
    
    Temporal=0;
    for (DisposableHero=9; DisposableHero>0; DisposableHero--)
    {
        for (MasterOfPuppets=1; MasterOfPuppets<=DisposableHero; MasterOfPuppets++)
        {
            if (Caos[(MasterOfPuppets-1)]>Caos[MasterOfPuppets])
            {
                Temporal=Caos[(MasterOfPuppets-1)];
                Caos[(MasterOfPuppets-1)]=Caos[MasterOfPuppets];
                Caos[MasterOfPuppets]=Temporal;
            }
        }
    }
    //printf("%f", Caos[0]);
    *PuntMay=Caos[9];
    *PuntMen=Caos[0];
    return;
}
