#include <stdio.h>

int main()
{
float Weight;
float Height;
float BMI;
char choice;


void uitrekenen(){
    choice = "Y";
    printf( "vul uw gewicht in(KG): " );
    scanf( "%f", &Weight );
    printf( "Vul uw hoogte in(M) (bvb: 1.75): " );
    scanf( "%f", &Height );

    BMI = Weight/(Height*Height);
    printf("Dit is jouw BMI %.f",  BMI);

        if(BMI < 18.5){
            printf("\n ondergewicht dus eet wat meer friet en een burger");
        } else if(BMI > 18.5 && BMI < 24.9){
            printf("\n je zit op een prima gewicht, ga zo door");
        }else if(BMI > 25 && BMI < 29.9){
            printf("\n klein beetje minderen met het snoepen en de suikers en alles komt goed");
        } else if (BMI > 30 && BMI < 39.9){
            printf("\n U heeft heel erg veel overgewicht");
        } else if (BMI > 40){
            printf("\n U breng en bezoek aan de dokter en vraag of je nog lang te leven heb.");
        }
 }

 uitrekenen();

 while(1 == 1){
        scanf("%c", &choice);
        printf("\n Wilt u opnieuw uw BMI berekenen? (Y/N): ");
        scanf("%c", &choice);
        switch(choice){
            case 'Y':
            case 'y':

                uitrekenen();
            break;
            case 'N':
            case 'n':

                return 0;
            break;
            default:
                printf("Error 404; Try Again\n");
        }


 }
}
