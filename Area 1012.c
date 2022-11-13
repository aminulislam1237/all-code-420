#include <stdio.h>

int main() {

     float A,B,C,triangle,radius,trapezium,square,rectangle;
      scanf("%f %f %f",&A,&B,&C);
      triangle =0.5 * A * C;
      radius = 3.14159 * C * C;
      trapezium = 0.5 * (A+B) * C;
      square = B * B;
      rectangle = A * B;
      printf("TRIANGULO: %.3f\nCIRCULO: %.3f\nTRAPEZIO: %.3f\nQUADRADO: %.3f\nRETANGULO: %.3f\n",triangle,radius,trapezium,square,rectangle);
    return 0;
      getch();
}
