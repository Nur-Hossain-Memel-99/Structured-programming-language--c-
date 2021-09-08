/*

NUR HOSSAIN MEMEL
CSE1802014009

*/
#include<stdio.h>

int main()
{

    int i,j;
    char k;
    
    printf("1.Displaying My name \n =============\n");
    for(i=0; i<=10 ; i++)
    {
        printf("Nur hossain Memel\n");
    }
    
    printf("\n2.Displaying value of i \n =============\n");
    for(i=0; i<=10 ; i++)
    {
        printf("%d\t",i);
    }
    
   	printf("\n3.Displaying Number series \n =============\n");
	for(i=1;i<=10;i++)
	{
		printf("%d\t",i);
	}
	
	printf("\n4.Displaying Odd Number series \n =============\n");
	for(i=1; i<=10 ; i += 2)
    {
        printf("%d\t",i);
    }
    
    printf("\n5.Displaying Even Number series \n =============\n");
	for(i=2; i<=10 ; i += 2)
    {
        printf("%d\t",i);
    }
    
    printf("\n6.Displaying 5,10,15,20,25... Number series \n =============\n");
    for(i=0; i<=100 ; i += 5)
    {
        printf("%d\t",i);
    }
    
    printf("\n7.Displaying Reverse Number series \n =============\n");
	for(i=10; i>=1 ; i--)
    {
        printf("%d\t",i);
    }
    
    printf("\n8.Displaying Reverse  Even Number series \n =============\n");
    for(i=10; i>=2 ;  i -= 2)
    {
        printf("%d\t",i);
    }
    
    printf("\n9.Displaying Reverse  odd Number series \n =============\n");
    for(i=9; i>=1 ; i -= 2)
    {
        printf("%d\t",i);
    }
    
    printf("\n10.Displaying 1,2,3... ... n Number series \n =============\n");
    printf(" Enter the value of n =");
    scanf("%d",&j);
    for(i=1; i<=j ;  i++)
    {
        printf("\t%d\t",i);
    }
    
    printf("\n11.Displaying n,n-1,n-2,n-3... ... Number series \n =============\n");
    printf(" Enter the value of n =");
    scanf("%d",&j);
    for(i=j; i>=1 ;  i--)
    {
        printf("%d\t",i);
    }
    
    printf("\n12.Displaying Analysis \n =============\n");
    for (i=1 ; i<=5;i++)
   {
   	
   	printf("%d\t",i);
   }
   
   printf("\n13.Displaying Analysis \n =============\n");
   for (i=1 ; i<= 20 ; i = i+2)
   {
   	
   	printf("%d\t",i);
   }
   
   printf("\n14.Displaying A,B,C... ...Z series \n =============\n");
  
 	for (k ='A';k <= 'Z';k++)
 	{
 		printf("%c \t",k);
	 }
	 
	printf("\n15.Displaying a,b,c... ...z series \n =============\n");
    for (k ='a';k <= 'z';k++)
 	{
 		printf("%c \t",k);
	 }
	 
	 printf("\n16.Displaying A,C,E... ...W,Y series \n =============\n");
    for (k ='A';k <= 'Z';k+=2)
 	{
 		printf("%c \t",k);
	 }
	 
	 printf("\n17.Displaying A,B,C series From ASCII integer \n =============\n");
	 for (i =65;i <= 90;i++)
 	{
 		printf("%c\t",i);
	 }
	 
	 printf("\n18.Displaying A,B,C series  ASCII Value \n =============\n");
	 for (k ='A';k <= 'Z';k++)
 	{
 		printf("%d\t",k);
	 }
	 
	 printf("\n19.Displaying a,b,c... ... series From ASCII integer \n =============\n");
    for (i =97;i <= 122;i++)
 	{
 		printf("%c\t",i);
	 }
	 
	return 0;
}

