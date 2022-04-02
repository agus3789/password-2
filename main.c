#include <stdio.h>
#include <stdlib.h>

int main()
{
    int contra = 0;
    int cont = 0;
    int aux = 0;

    printf("Ingresar una contra: ");  ///Pido la contraseña y la guardo en contra
    scanf("%i", &contra);
    system("pause");
    system("cls");

    for(int i = 1; i <= 3; i++)     /// Hago un for que vaya del 1 al 3 ya que el usuario tiene 3 intentos para acertar
    {
        printf("Ingresar la contra anterior: ");        ///Pido que vuelva a ingresar la contraseña
        scanf("%i", &aux);

        if(contra ==  aux)      ///Si la contraseña ingresada es igual a la contraseña original entonces gano
        {
            printf("Felicidades \n");
            return 0;
        }
        if(i < 3 && contra != aux)      ///Aca lo que especifico es que si i es menor que 3 y todavia no se adivino la contraseña
        {                               ///Entonces en cada fallo menos el ultimo que se muestre incorrecta
            printf("Incorrecta \n");
            system("pause");
            system("cls");
        }
        else if(i == 3){
            printf("Necesitas ejercitar tu memoria \n"); ///Si i es igual a 3 significa que se quedo sin intentos y necesita ejercitar la memoria
        }
    }

    return 0;
}
