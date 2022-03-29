#include <iostream>

using namespace std;

int main()
{
    int nota, seguir=0, apro=0, repro=0, est=0, suma=0;
    float prom;
    
    do{
        printf ("Ingrese la nota del corte del estudiante: ");
        scanf ("%d", &nota);
        if (nota >= 19 && nota <= 20){
            printf ("El alumno aprobo, y es Sobresaliente\n"); apro = apro + 1;
        }else if (nota >= 16 && nota <= 18){
            printf ("El alumno aprobo, y es Muy Bueno\n"); apro = apro + 1;
        }else if (nota >= 13 && nota <= 15){
            printf ("El alumno aprobo y es Bueno\n"); apro = apro + 1;
        }else if (nota >= 10 && nota <= 12){
            printf ("El alumno aprobo, y es Regular\n"); apro = apro + 1;
        }else if (nota >= 6 && nota <= 9){
            printf ("El alumno reprobo, y puede Mejorar\n"); repro = repro + 1;
        }else{
            printf ("El alumno reprobo, y es Deficiente\n"); repro = repro + 1;
        }
        
        
        suma = nota + suma;
        est = est + 1;
        
        printf ("Quiere ingresar otra nota?, Si = 1, No = 0: ");
        scanf ("%d", &seguir);
        
    }while (seguir==1);
    
    prom = suma / est;
    printf ("El promedio del salon es: %.2f\n", prom);
    printf ("La cantidad de alumnos aprobados es: %d\n", apro);
    printf ("La cantidad de alumnos reprobados es: %d\n", repro);
    printf ("En el salon hay %d alumnos", est);

    return 0;
}
