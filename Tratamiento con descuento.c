#include <stdio.h>

int main(void) {
    int TRA, EDA, DIA;    // Variables de tipo entero para tipo de tratamiento, edad y d�as.
    float COS;            // Variable de tipo real para el costo total del tratamiento.

    printf("Ingrese tipo de tratamiento, edad y d�as: ");
    scanf("%d %d %d", &TRA, &EDA, &DIA);

    switch (TRA) {
        case 1:
            COS = DIA * 2800;
            break;
        case 2:
            COS = DIA * 1950;
            break;
        case 3:
            COS = DIA * 2500;
            break;
        case 4:
            COS = DIA * 1150;
            break;
        default:
            COS = -1;    // Si el tipo de tratamiento no es v�lido, se establece un valor negativo en COS.
            break;
    }

    if (COS != -1) {
        if (EDA >= 60)
            COS = COS * 0.75;    // Se aplica un descuento del 25% para clientes mayores de 60 a�os.
        else if (EDA <= 25)
            COS = COS * 0.85;    // Se aplica un descuento del 15% para clientes menores de 25 a�os.

        printf("\nClave tratamiento: %d\t Edad: %d\t D�as: %d\t Costo total: %8.2f", TRA, EDA, DIA, COS);
    } else {
        printf("\nLa clave del tratamiento es incorrecta");
    }

    return 0;
}
