#include <iostream>

int main()
 {
     int n = 8;
     int min1;
     int max1;
     int chislo;
     printf("wwedite %d chisel\n", n);
     printf("wwedite 1 chislo\n");
     std::cin >> chislo;
     min1=chislo;
     max1=chislo;
     int i = 1;
     int j = 2;
     n = n - 1;
     while (n != 0){

            printf("wwedite %d chislo:", j);
            std::cin >> chislo;
            if (chislo > max1)
                max1 = chislo;
            else if (min1 > chislo)
                min1 = chislo;
            n = n - 1;
            i = i + 1;
            j = j + 1;

     }

     printf("Max %d Min %d", max1, min1);
return 0;
 }
