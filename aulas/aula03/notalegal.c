# include <stdio.h>

int main() {
 
 printf("\x1b[34m-----------------------------\n");
 printf("      N O T A L E G A L    \n");
 printf("-----------------------------\x1b[0m\n");
 printf("\x1b[33mITEM\x1b[0m           QTD  \x1b[35mVALOR\x1b[0m\n");
 printf("%-14s %3i %5.2f\n" ,"Banana nanica", 2, 20.00);
 printf("%-14s %3i %5.2f\n" ,"Uva Globo", 1, 15.00);
 printf("%-14s %3i %5.2f\n" ,"Laranja Lima" , 1, 18.00);

  // printf("Banana nanica 2 20.00\n");
  // printf("Uva Globo 1 15.00\n");
  //prinf("Laranja Lima 1 18.00\n");
  
 printf("-----------------------------\n");
 printf("TOTAl   %16.2f\n",  53.00);

return 0;
}
  
  
  