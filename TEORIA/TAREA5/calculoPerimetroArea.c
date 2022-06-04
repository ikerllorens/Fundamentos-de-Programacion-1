//
//  CalculoPerimetroArea.c
//  
//
//  Created by Iker Llorens on 06/09/2012.
//
//

#include <stdio.h>
#include <math.h>


int main(void)

{
    int base, altura, area, perimetro, hipotenusa;
    printf("Dame la base y la altura en cms:");
    scanf("%d",&base);
    scanf("%d",&altura);
    area=(base*altura)/2;
    
    hipotenusa=sqrt((base*base)+(altura*altura));
    
    /*necesita ponerse al momento de encadenar
     gcc -o calculoPerimetroArea.out calculoPerimetroArea.o -l preguntar porque*/
    
    perimetro=(hipotenusa+base+altura);
    printf("\nEl área del triángulo es %d", area);
    printf(" y el perímetro es %d \n", perimetro); 
    return 0;
}

//BE HAPPY!!
