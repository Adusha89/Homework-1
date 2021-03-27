// Название - Homework-1
// Выполнил Беляков Андрей в Qt Creator 6
#include <stdio.h>

int main()
{
    int sq;
    float u0, ui, r1, r2;
    printf("Hello World!\n");
    printf("Введите, пожалуйста целое число: ");
    scanf ("%d", &sq);
    printf("Вы ввели число: %d, при возведении в квадрат получим: %d \n", sq, sq*sq);
    printf ("Расчет резисторного делителя\n");
    printf ("Введите значение Ui :");
    scanf ("%f",&ui);
    printf ("Введите значение R1 :");
    scanf ("%f",&r1);
    printf ("Введите значение R2 :");
    scanf ("%f",&r2);
    u0=ui*(r1/(r2+r1));
    //ui=u0*((r2+r1)/r1);
    //r2=(r1*(ui-u0))/u0;
    //r1=(u0*r2)/(ui-u0);
    ui = u0 / (r1 / (r2 + r1));
    r1 = (u0 / ui) / r2 + r1;
    r2 = (u0 / ui) / r1 - r1;
    printf("Проверка результатов: \n");
    printf("Вычисление по формуле дало: u0=%.2f, ui=%.2f , r1=%.2f, r2=%.2f\n",u0,ui,r1,r2);
    return 0;
}
