#include <stdio.h>
#include <stdlib.h>

struct Alumnos 
{
    int dniAlum;
    float notaAlum;

} Alumnos[10];

void main()
{
    int menu, i, dniBusqueda, finBusqueda;
    float notaNueva;
    struct Alumnos;

    do
    {
        printf("Seleccione una Opci%cn \n\n", 162);
        printf("1- Cargar Alumnos \n");
        printf("2- Buscar Alumno \n");
        printf("3- Modificar nota de Alumno \n");
        printf("4- Mostrar listado de los 10 Alumnos \n");
        printf("5- Salir \n");
        printf("\n");
        scanf("%i", &menu);
        printf("\n");
        
        switch (menu)
        {
        case 1:
            for (i = 0; i < 10; i++)
            {
                printf("Ingrese DNI del alumno %i: \n", i + 1);
                scanf("%i", &Alumnos[i].dniAlum);
                while (Alumnos[i].dniAlum < 1000000 || Alumnos[i].dniAlum > 99999999)
                {
                    printf("DNI no v%clido \n", 160 );
                    printf("Ingrese nuevamente el DNI: \n");
                    scanf("%i", &Alumnos[i].dniAlum);
                }

                printf("Ingresa nota del alumno %f: ", i + 1);
                scanf("%f", &Alumnos[i].notaAlum);
                while (Alumnos[i].notaAlum <= 0 || Alumnos[i].notaAlum > 10)
                {
                    printf("NOTA incorrecta \n");
                    printf("Ingrese nuevamente la nota: \n");
                    scanf("%f", &Alumnos[i].notaAlum);
                }
                printf("\n");
            }
            break;

        case 2:
            printf("Ingrese el DNI del alumno que desea buscar: \n");
            scanf("%i", &dniBusqueda);
            finBusqueda = 0;

            for (i = 0; i < 10; i++)
            {
                if (Alumnos[i].dniAlum == dniBusqueda)
                {
                    finBusqueda = 1;
                    printf("DNI: %i \n", Alumnos[i].dniAlum);
                    printf("NOTA: %.2f \n", Alumnos[i].notaAlum);
                }
            }
            
            if (finBusqueda != 1)
            {
                printf("DNI inexistente \n");
            }

            printf("\n");
            break;

        case 3:
            printf("Ingrese el DNI del alumno que desea cambiarle la nota: \n");
            scanf("%i", &dniBusqueda);
            finBusqueda = 0;

            for (i = 0; i < 10; i++)
            {
                if (Alumnos[i].dniAlum == dniBusqueda)
                {
                    finBusqueda = 1;
                    printf("Ingrese la nueva nota: \n");
                    scanf("%f", &notaNueva);
                    Alumnos[i].notaAlum = notaNueva;
                }
            }

            if (finBusqueda != 1)
            {
                printf("DNI inexistente \n");
            }

            printf("\n");
            break;

        case 4:
            printf("Listado de Alumnos \n");
            for (i = 0; i < 10; i++)
            {
                printf("DNI: %i \t Nota: %.2f \n", Alumnos[i].dniAlum, Alumnos[i].notaAlum);
            }

            printf("\n");
            break;

        case 5:
            printf("\tFin del Programa\n");
            break;

        default:
            printf("\n");
            printf("Opci%cn inexistente \n", 162);
            printf("\n");
            break;
        }
    } while (menu != 5);

    system("pause");
}