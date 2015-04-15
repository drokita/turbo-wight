#include <stdio.h>

int main (void)
{
   int month, day, year;
   printf("Enter a data (mm/dd/yyyy): ");
   scanf("%2d/%2d/%4d", &month, &day, &year);
   printf("\nYou entered the data %d%.2d%.2d\n", year, month, day);
}

