/*

NUR HOSSAIN MEMEL
CSE1802014009

*/



#include <stdio.h>
 
int main () {

   
 	int i = 1;
   printf(" 1.Displaying My name \n =============\n");
do {
     printf("      Nur Hossain Memel\n");
      i++;
   }while( i<=10 );
 
    int j = 1;  
   printf("\n 2.Displaying value of i \n =============\n");
 do {
     printf("     %d\t", j);
      j++;
   }while( j<=10 );
 
 int k = 1;
   printf("\n 3.Displaying Number series \n =============\n");
do {
     printf("     %d\t", k);
      k++;
   }while( k<=10 );
   
   int l = 1;
   printf("\n 4.Displaying Odd Number series \n =============\n");
	do {
     printf("     %d\t", l);
      l +=2;
   }while( l<=10 );
   
   int m=2;
	printf("\n 5.Displaying Even Number series \n =============\n");
	do {
     printf("     %d\t", m);
      m +=2;
   }while( m<=10 );
   
   int n = 0;
   printf("\n 6.Display 5,10,15 ... ...series \n");
	do {
    
      n +=5;
   }while( n<=100 );
   
   int o = 10;
	printf("\n 7.Displaying Reverse Number series \n =============\n");
	do {
     printf("     %d\t",o);
      o--;
   }while( o>=1 );
   
   int p = 10;
	printf("\n 8.Displaying Reverse  Even Number series \n =============\n");
    do {
     printf("     %d\t",p);
      p -= 2;
   }while( p>=2 );
   
   int r = 1;
    int s;
	printf("\n 10.Displaying 1,2,3... ... n Number series \n =============\n");
    printf("Enter the value of n =\n");
    scanf("%d",&s);
    do {
     printf("     %d\t",r);
      r++;
   }while( r<=s );
   
   int t,u;
	printf("\n 11.Displaying n,n-1,n-2,n-3... ... Number series \n =============\n");
    printf(" Enter the value of n =");
    scanf("%d",&u);
    t=u ;
    do {
     printf("     %d\t",t);
      t--;
   }while( t>=1 );
   
   int v = 1;
    printf("\n 12.Displaying Analysis \n =============\n");
     do {
     printf("     %d\t",v);
      v++;
   }while( v<=5 );
   
   int w = 1;
	printf("\n 13.Displaying Analysis \n =============\n");
    do {
     printf("     %d\t",w);
      w += 2;
   }while( w<=20 );
   
   char x = 'A';
	printf("\n 14.Displaying A,B,C... ...Z series \n =============\n");
	do {
     printf("     %c\t",x);
      x++;
   }while( x<='Z' );
   
   char y = 'a';
	printf("\n 15.Displaying a,b,c... ...z series \n =============\n");
	do {
    printf("     %c\t",y);
      y++;
   }while( y<='z' );
   
   int z = 'A';
	printf("\n 16.Displaying A,C,E... ...W,Y series \n =============\n");
	 do {
    printf("     %c\t",z);
      z += 2;
   }while( z<='Z');
   
   int a = 65;
	 printf("\n 17.Displaying A,B,C series From ASCII integer \n =============\n");
	 do {
    printf("     %c\t",a);
      a++;
   }while( a<=90);
   
   int b = 'A';
	 printf("\n 18.Displaying A,B,C series  ASCII Value \n =============\n");
	 do {
    printf("      %d\t",b);
      b++;
   }while( b<='Z');
   
   int c = 97;
	 printf("\n 19.Displaying a,b,c... ... series From ASCII integer \n =============\n");
	 do {
    printf("     %d\t",c);
      c++;
   }while(c<=122);
	 
   
   
   return 0;
}
