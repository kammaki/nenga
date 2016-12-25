                                       #include<stdio.h>
   int main(void)                         {int i, j;
 int b[32];int s[15]                    = { 8159361,
295057,1439697,1646730,         1122694,2105993,4211856,
0,     466015,565953,565826,74306,139844,    270916
,       1023044};for(i=0;i<15;    i++){for(j=0
;         s[i]>0;j++){b[j] =          s[i] % 2;
            s[i] = s[i] / 2          ;}switch(i)
             {case 1:printf         (" ");case 
               11:printf(" ")      ;case 2:
                case 3:case 4:    case 12:
                 printf(" ");case 5:case
                  8:case 13:printf(" ")
                     ;}while(j>0){if(
                        b[--j]==1){
                        printf("#")
                         ;    }
                         else{
                         printf
                         (" ");}     }
                         printf ("\n");}
                         return   0;}
