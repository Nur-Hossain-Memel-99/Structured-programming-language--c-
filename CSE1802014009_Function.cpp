#include<stdio.h>
int info();
int for1();
int for2();
int for3();
int for4();
int for5();
int while1();
int while2();
int while3();
int while4();
int while5();
int dowhile1();
int dowhile2();
int dowhile3();
int dowhile4();
int dowhile5();
int array1();
int array2();
int array3();
int array4();
int array5();
int palindrome();
int leapyear();
int lenearsearch();
int ptok();
int ttod();

int main ()
{

    printf("\t\t\t\t*************************************\n");
    printf("\t\t\t\t** ENTER YOUR CHOICE FROM THE MENU **\n");
    printf("\t\t\t\t*************************************\n");
    printf("\t\t\t\t****           MENU              ****\n\n");

    printf("\t\t0.Display My information\n");
    printf("\t\t1.Display Even Number series using for loop\n");
    printf("\t\t2.Display ODD Number series using for loop\n");
    printf("\t\t3.Displaying 1,2,3... ... n Number series using for loop\n");
    printf("\t\t4.Displaying A,B,C series  ASCII Value using for loop\n");
    printf("\t\t5.Displaying Reverse  Even Number series using while loop \n");
    printf("\t\t6.Displaying Reverse  odd Number series using while loop\n");
    printf("\t\t7.Displaying 1,2,3... ... n Number series using while loop\n");
    printf("\t\t8.Displaying n,n-1,n-2,n-3... ... Number series using while loop\n");
    printf("\t\t9.Displaying A,B,C series From ASCII integer using while loop\n");
    printf("\t\t10.Displaying Odd Number series using do while loop\n");
    printf("\t\t11.Displaying Even Number series do while loop\n");
    printf("\t\t12.Display 5,10,15 ... ...series do while loop \n");
    printf("\t\t13.Displaying Reverse Number series do while loop\n");
    printf("\t\t14.Displaying Reverse  Even Number series do while loop\n");
    printf("\t\t15.Printing Array elements\n");
    printf("\t\t16.Read and Print elements of an array\n");
    printf("\t\t17.Printing array of strings\n");
    printf("\t\t18.find the average of n numbers using arrays\n");
    printf("\t\tn19.find the sum of n numbers using arrays\n");
    printf("\t\t20.Checking palindrome\n");
    printf("\t\t21.Checking leap year\n");
    printf("\t\t22.Lenear search\n");
    printf("\t\t23.convert  Kilogram to Lbs (Pounds)\n");
    printf("\t\t24.convert Convert Taka to Dollar\n");








    int choice;
    while(1)
    {

        printf("\n\tEnter your choice Here ----->> ");
        scanf("%d",&choice);

        switch(choice)
        {
        case 0:
            info();
            break;

        case 1:
            for1();
            break;

        case 2:
            for2();
            break;

        case 3:
            for3();
            break;

        case 4:
            for4();
            break;

        case 5:
            for5();
            break;
        case 6:
            while1();
            break;
        case 7:
            while2();
            break;
        case 8:
            while3();
            break;
        case 9:
            while5();
            break;
        case 10:
            dowhile1();

            break;
        case 11:
            dowhile2();

            break;
        case 12:
            dowhile3();
            break;
        case 13:
            dowhile4();
            break;
        case 14:
            dowhile5();
            break;
        case 15:
            array1();
            break;
        case 16:
            array2();
            break;
        case 17:
            array3();
            break;
        case 18:
            array4();
            break;
        case 19:
            array5();
            break;
        case 20:
            palindrome();
            break;
        case 21:
            leapyear();

            break;
        case 22:
            lenearsearch();
            break;
        case 23:
            ptok();
            break;
        case 24:
            ttod();
            break;


        default:
            printf("Inavlid Number.Please try again!");
            break;
        }

    }




    return 0;

}

info()
{

    printf("***************************************");
    printf("\n\tNur Hossain Memel");
    printf("\n\tID:1802014009");
    printf("\n\tSec: 14A");
    printf("\n\tMob:01989890916");
    printf("\n***************************************");
}
for1()
{
    int i;
    printf("\n0.Displaying Reverse  Even Number series using for loop \n =============\n");
    for(i=10; i>=2 ;  i -= 2)
    {
        printf("%d\t",i);
    }
}

for2()
{
    int i;
    printf("\n1.Displaying Reverse  odd Number series using for loop \n =============\n");
    for(i=9; i>=1 ; i -= 2)
    {
        printf("%d\t",i);
    }
}
for3()
{
    int i,j;
    printf("\n2.Displaying 1,2,3... ... n Number series using for loop \n =============\n");
    printf(" Enter the value of n =");
    scanf("%d",&j);
    for(i=1; i<=j ;  i++)
    {
        printf("\t%d\t",i);
    }
}
for4()
{
    int i,j;
    printf("\n3.Displaying n,n-1,n-2,n-3... ... Number series using for loop \n =============\n");
    printf(" Enter the value of n =");
    scanf("%d",&j);
    for(i=j; i>=1 ;  i--)
    {
        printf("%d\t",i);
    }
}
for5()
{
    char k;
    printf("\n4.Displaying A,B,C series  ASCII Value using for loop \n =============\n");
    for (k ='A'; k <= 'Z'; k++)
    {
        printf("%c\t",k);
    }

}

int while1()
{
    int p = 10;
    printf("\n 5.Displaying Reverse  Even Number series using while loop \n =============\n");
    while(p>=2)
    {
        printf("%d\t",p);
        p -= 2;
    }
}
int while2()
{
    int q = 9;
    printf("\n 6.Displaying Reverse  odd Number series using while loop\n =============\n");
    while(q>=1)
    {
        printf("%d\t",q);
        q -= 2;
    }
}
int while3()
{
    int r = 1;
    int s;
    printf("\n 7.Displaying 1,2,3... ... n Number series using while loop \n =============\n");
    printf("Enter the value of n =\n");
    scanf("%d",&s);
    while(r<=s)
    {
        printf("%d\t",r);
        r++;
    }
}
int while4()
{
    int t,u;
    printf("\n 8.Displaying n,n-1,n-2,n-3... ... Number series using while loop \n =============\n");
    printf(" Enter the value of n =");
    scanf("%d",&u);
    t=u ;
    while(t>=1)
    {
        printf("%d\t",t);
        t--;
    }
}
int while5()
{
    int a = 65;
    printf("\n 9.Displaying A,B,C series From ASCII integer using while loop\n =============\n");
    while(a<=90)
    {
        printf("%c\t",a);
        a++;
    }
}
int dowhile1()
{
    int l = 1;
    printf("\n 10.Displaying Odd Number series using do while loop\n =============\n");
    do
    {
        printf("     %d\t", l);
        l +=2;
    }
    while( l<=10 );
}
int dowhile2()
{
    int m=2;
    printf("\n 11.Displaying Even Number series do while loop \n =============\n");
    do
    {
        printf("     %d\t", m);
        m +=2;
    }
    while( m<=10 );
}
int dowhile3()
{
    int n = 0;
    do
    {
        printf("\n 12.Display 5,10,15 ... ...series   do while loop  %d\t",n);
        n +=5;
    }
    while( n<=100 );
}

int dowhile4()
{
    int o = 10;
    printf("\n 13.Displaying Reverse Number series do while loop\n =============\n");
    do
    {
        printf("     %d\t",o);
        o--;
    }
    while( o>=1 );
}
int dowhile5()
{
    int p = 10;
    printf("\n 14.Displaying Reverse  Even Number series do while loop\n =============\n");
    do
    {
        printf("     %d\t",p);
        p -= 2;
    }
    while( p>=2 );
}
int array1()
{
    printf("\n15.Printing Array elements");
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int i;

    for(i = 0; i<10; i++)
        printf("%d ", array[i]);
}
int array2()
{
    int arr[10];
    int i;
    printf("\n16.Read and Print elements of an array:\n");


    printf("Input 10 elements in the array :\n");
    for(i=0; i<10; i++)
    {
        printf("element - %d : ",i);
        scanf("%d", &arr[i]);
    }

    printf("\nElements in array are: ");
    for(i=0; i<10; i++)
    {
        printf("%d  ", arr[i]);
    }
    printf("\n");
}
int array3()
{
    printf("\n17.Printing array of strings");
    char z[100] = "MY NAME IS NUR HOSSAIN";

    printf("%s", z);

}
int array4()
{
    printf("/n18.find the average of n numbers using arrays");
    int marks[10], i, n, sum = 0, average;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(i=0; i<n; ++i)
    {
        printf("Enter number%d: ",i+1);
        scanf("%d", &marks[i]);

        sum += marks[i];
    }

    average = sum/n;
    printf("Average = %d", average);
}
int array5()
{

    printf("/n19.find the sum of n numbers using arrays");
    int n, sum = 0, c;
    int array[100];

    scanf("%d", &n);

    for (c = 0; c < n; c++)
    {
        scanf("%d", &array[c]);
        sum = sum + array[c];
    }

    printf("Sum = %d\n", sum);


}
int palindrome()
{
    printf("\n20.Checking palindrome");
    int n, reversed = 0, remainder, original;
    printf("\nEnter an integer: ");
    scanf("%d", &n);
    original = n;


    while (n != 0)
    {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }

    if (original == reversed)
        printf("%d is a palindrome.", original);
    else
        printf("%d is not a palindrome.", original);

}
int leapyear()
{
    int year;
    printf("\n21.Checking leap year");
    printf("Enter a year: ");
    scanf("%d", &year);


    if (year % 400 == 0)
    {
        printf("%d is a leap year.", year);
    }


    else if (year % 100 == 0)
    {
        printf("%d is not a leap year.", year);
    }

    else if (year % 4 == 0)
    {
        printf("%d is a leap year.", year);
    }

    else
    {
        printf("%d is not a leap year.", year);
    }

}
int lenearsearch()
{
    printf("\n22.Lenear search\n");
    int array[100], search, c, n;

    printf("Enter number of elements in array\n");
    scanf("%d", &n);

    printf("Enter %d integer(s)\n", n);

    for (c = 0; c < n; c++)
        scanf("%d", &array[c]);

    printf("Enter a number to search\n");
    scanf("%d", &search);

    for (c = 0; c < n; c++)
    {
        if (array[c] == search)
        {
            printf("%d is present at location %d.\n", search, c+1);
            break;
        }
    }
    if (c == n)
        printf("%d isn't present in the array.\n", search);
}

int ptok()
{

    float kg,lbs;
    printf("\n23.convert  Kilogram to Lbs (Pounds) :  \n");

    printf("\n\n Enter Weight in Kilogram  : ");
    scanf("%f", &kg);

    lbs = kg*2.20462;

    printf("\n\n %f Kg  =  %f Lbs (pound) \n",kg,lbs );
}
int ttod()
{
    float taka;
    printf("\n24.Convert taka to dollar \n");
    printf("Please enter Taka:");
    scanf("%f", &taka);

    float dollars = taka / 84 ;

    printf("%f Dollars", dollars);

}

