#include<iostream>
using namespace std;

int main() {
   int granica_gorna , granica_dolna , suma1 , suma2;
   cout << "Podaj granice dolna" << endl;
   cin >> granica_dolna;
   cout << "Podaj granice gorna" << endl; 
   cin >> granica_gorna;
   if (granica_gorna < granica_dolna) 
   cout << "Granica gorna jest mniejsza niz granica dolna";
   else
   { 
       cout << "Liczby zaprzyjaźnione z zakresu " << granica_dolna << "- " << granica_gorna << " to " <<endl;
   for( int i=granica_dolna; i<=granica_gorna; i++ )
   {
      suma1= 0;
      for( int j=granica_dolna; j<i; j++ ) 
         if( i%j==0 )
            suma1 += j;
      suma2= 0;
      for( int l=granica_dolna; l<suma1; l++ )
         if( suma1%l == 0)
            suma2 += l;
      if( i==suma2&&i<suma1&&suma1!=suma2)
         cout << i << " i " << suma1 << endl; 
   }
   return 0;    
   }
}