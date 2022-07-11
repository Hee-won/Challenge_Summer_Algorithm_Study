#include <iostream>

int main() {
   int a, b, i, sum=0;
   std::cin >> a >> b;

   for (i = a; i <= b; i++) {
      std::cout << i;
      sum += i;
      if(i<b)
         std::cout << " + ";
}
   std::cout <<" = "<< sum;
   return 0;
}



//자연수 A부터 B까지의 합
