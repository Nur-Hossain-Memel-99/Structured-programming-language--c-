/*

NUR HOSSAIN MEMEL
CSE1803014009

*/




#include <stdio.h>
 
int main () {

   
   int i = 1;

   printf(" 1.Displaying My name \n =============\n");
    while( i<=10 ) {
      printf("Nur hossain Memel\n", i);
      i++;
   }
   
   int j = 1;
 printf("\n 2.Displaying value of i \n =============\n");
    while( j<=10 ) {
      printf("%d\t", j);
      j++;
   }
   
   int k = 1;
   printf("\n 3.Displaying Number series \n =============\n");
		while( k<=10 ) {
      printf("%d\t", k);
      k++;
   }
   
   int l = 1;
   printf("\n 4.Displaying Odd Number series \n =============\n");
	while(l<=10){
    	printf("%d\t",l);
    	l +=2;
	}
	
	int m=2;
	printf("\n 5.Displaying Even Number series \n =============\n");
	while(m<=10){
    	printf("%d\t",m);
    	m +=2;
	}
	
	int n = 0;
   printf("\n 6.Displaying 5,10,15,20,25... Number series \n =============\n");
     while(n<=100){
    	printf("%d\t",n);
    	n +=5;
	}
	
	int o = 10;
	printf("\n 7.Displaying Reverse Number series \n =============\n");
	while(o>=1){
    	printf("%d\t",o);
    	o--;
	}
	
	int p = 10;
	printf("\n 8.Displaying Reverse  Even Number series \n =============\n");
    while(p>=2){
    	printf("%d\t",p);
    	p -= 2;
	}
	
	int q = 9;
	printf("\n 9.Displaying Reverse  odd Number series \n =============\n");
    while(q>=1){
    	printf("%d\t",q);
    	q -= 2;
	}
	
	int r = 1;
    int s;
	printf("\n 10.Displaying 1,2,3... ... n Number series \n =============\n");
    printf("Enter the value of n =\n");
    scanf("%d",&s);
    while(r<=s){
    	printf("%d\t",r);
    	r++;
	}
	
	int t,u;
	printf("\n 11.Displaying n,n-1,n-2,n-3... ... Number series \n =============\n");
    printf(" Enter the value of n =");
    scanf("%d",&u);
    t=u ;
     while(t>=1){
    	printf("%d\t",t);
    	t--;
	}
	
    int v = 1;
    printf("\n 12.Displaying Analysis \n =============\n");
     while(v<=5){
    	printf("%d\t",v);
    	v++;
	}
	
	int w = 1;
	printf("\n 13.Displaying Analysis \n =============\n");
    while(w<=20){
    	printf("%d\t",w);
    	w += 2;
	}
	
	char x = 'A';
	printf("\n 14.Displaying A,B,C... ...Z series \n =============\n");
	 while(x<='Z'){
    	printf("%c\t",x);
    	x++;
	}
	
	char y = 'a';
	printf("\n 15.Displaying a,b,c... ...z series \n =============\n");
	 while(y<='z'){
    	printf("%c\t",y);
    	y++;
	}
	
	int z = 'A';
	printf("\n 16.Displaying A,C,E... ...W,Y series \n =============\n");
	 while(z<='Z'){
	 	printf("%c\t",z);
	 	z += 2;
	 }
	 
	 int a = 65;
	 printf("\n 17.Displaying A,B,C series From ASCII integer \n =============\n");
	 while(a<=90){
	 	printf("%c\t",a);
	 	a++;
	 }
	 
	 int b = 'A';
	 printf("\n 18.Displaying A,B,C series  ASCII Value \n =============\n");
	 while(b<='Z'){
	 	printf("%d\t",b);
	 	b++;
	 }
	 
	 int c = 97;
	 printf("\n 19.Displaying a,b,c... ... series From ASCII integer \n =============\n");
	 while(c<=122){
	 	printf("%d\t",c);
	 	c++;
	 }
	 
   return 0;
}
