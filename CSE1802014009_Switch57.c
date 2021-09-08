/*
NUR HOSSAAIN MEMEL
CSE1802014009


*/



#include <stdio.h>
#include<conio.h>
int main()
{


    system("COLOR 0A");

    printf("\t\t\t\t*************************************\n");
    printf("\t\t\t\t** ENTER YOUR CHOICE FROM THE MENU **\n");
    printf("\t\t\t\t*************************************\n");
    printf("\t\t\t\tNUR HOSSAIN MEMEL CSE1802014009\n");
    printf("\t\t\t\t*************************************\n");
    printf("\t\t\t\t****           MENU              ****\n\n");

    printf("\t\t1.Display My name                       FORLOOP=1  ,WHILELOOP=20  ,DO-WHILELOOP=39  \n");
    printf("\t\t2.Display value of i                    FORLOOP=2  ,WHILELOOP=21  ,DO-WHILELOOP=40  \n");
    printf("\t\t3.Display Number series                 FORLOOP=3  ,WHILELOOP=22  ,DO-WHILELOOP=41  \n");
    printf("\t\t4.Display Odd Number series             FORLOOP=4  ,WHILELOOP=23  ,DO-WHILELOOP=42  \n");
    printf("\t\t5.Display Even Number series            FORLOOP=5  ,WHILELOOP=24  ,DO-WHILELOOP=43  \n");
    printf("\t\t6.Display 5,10,15... Number series      FORLOOP=6  ,WHILELOOP=25  ,DO-WHILELOOP=44  \n");
    printf("\t\t7.Display Reverse Number series         FORLOOP=7  ,WHILELOOP=26  ,DO-WHILELOOP=45  \n");
    printf("\t\t8.Display Reverse  Even Number series   FORLOOP=8  ,WHILELOOP=27  ,DO-WHILELOOP=46  \n");
    printf("\t\t9.Display Reverse  odd Number series    FORLOOP=9  ,WHILELOOP=28  ,DO-WHILELOOP=47  \n");
    printf("\t\t10.Display 1,2,3... ... n Number series FORLOOP=10 ,WHILELOOP=29  ,DO-WHILELOOP=48  \n");
    printf("\t\t11.Display n,n-1,n-2,n-3...Numberseries FORLOOP=11 ,WHILELOOP=30  ,DO-WHILELOOP=49  \n");
    printf("\t\t12.Display Analysis                     FORLOOP=12 ,WHILELOOP=31  ,DO-WHILELOOP=50  \n");
    printf("\t\t13.Display Analysis2                    FORLOOP=13 ,WHILELOOP=32  ,DO-WHILELOOP=51  \n");
    printf("\t\t14.Display A,B,C... ...Z series         FORLOOP=14 ,WHILELOOP=33  ,DO-WHILELOOP=52  \n");
    printf("\t\t15.Display a,b,c... ...z series         FORLOOP=15 ,WHILELOOP=34  ,DO-WHILELOOP=53  \n");
    printf("\t\t16.Display A,C,E... ...W,Y series       FORLOOP=16 ,WHILELOOP=35  ,DO-WHILELOOP=54  \n");
    printf("\t\t17.Display A,B,C series From ASCII int  FORLOOP=17 ,WHILELOOP=36  ,DO-WHILELOOP=55  \n");
    printf("\t\t18.Display A,B,C series  ASCII Value    FORLOOP=18 ,WHILELOOP=37  ,DO-WHILELOOP=56  \n");
    printf("\t\t19.Display a,b,c...series FromASCII int FORLOOP=19 ,WHILELOOP=38  ,DO-WHILELOOP=57  \n");
    printf("\t\t                                        EXIT = 58\n");
    int choice,i,j,k,t,u;
    int i1 = 1;
    int j1 = 1;
    int k1 = 1;
    int i2 = 1;
    int j2 = 1;
    int k2 = 1;
    int l = 1;
    int m=2;
    int n = 0;
    int o = 10;
    int q = 9;
    int r = 1;
    int s= 1;
    int p = 10;
    int v = 1;
    int w = 1;
    int a = 65;
    int b = 'A';
    int c = 97;
    char x = 'A';
    char y = 'a';
    int z = 'A';



    while(1)
    {    
    	
        printf("\nEnter your choice Here(1-58):");
        scanf("%d",&choice);
        switch(choice)
        {

        case 1:
            printf("1.Displaying My name using for loop\n");
            for(i=0; i<=10 ; i++)
            {
                printf("Nur hossain Memel\n");
            }
            break ;
        case 2:
            printf("\n2.Displaying value of i using for loop \n =============\n");
            for(i=0; i<=10 ; i++)
            {
                printf("%d\t",i);
            }
            break ;
        case 3:
            printf("\n3.Displaying Number series using for loop \n =============\n");
            for(i=1; i<=10; i++)
            {
                printf("%d\t",i);
            };
            break ;
        case 4:
            printf("\n4.Displaying Odd Number series using for loop \n =============\n");
            for(i=1; i<=10 ; i += 2)
            {
                printf("%d\t",i);
            }

            break ;
        case 5:
            printf("\n5.Displaying Even Number series using for loop \n =============\n");
            for(i=2; i<=10 ; i += 2)
            {
                printf("%d\t",i);
            }

            break ;
        case 6:
            printf("\n6.Displaying 5,10,15,20,25... Number series using for loop \n =============\n");
            for(i=0; i<=100 ; i += 5)
            {
                printf("%d\t",i);
            }

            break ;
        case 7:
            printf("\n7.Displaying Reverse Number series using for loop \n =============\n");
            for(i=10; i>=1 ; i--)
            {
                printf("%d\t",i);
            }

            break ;
        case 8:
            printf("\n8.Displaying Reverse  Even Number series using for loop \n =============\n");
            for(i=10; i>=2 ;  i -= 2)
            {
                printf("%d\t",i);
            }

            break ;
        case 9:
            printf("\n9.Displaying Reverse  odd Number series using for loop \n =============\n");
            for(i=9; i>=1 ; i -= 2)
            {
                printf("%d\t",i);
            }

            break ;
        case 10:
            printf("\n10.Displaying 1,2,3... ... n Number series using for loop \n =============\n");
            printf(" Enter the value of n =");
            scanf("%d",&j);
            for(i=1; i<=j ;  i++)
            {
                printf("\t%d\t",i);
            }

            break ;
        case 11:
            printf("\n11.Displaying n,n-1,n-2,n-3... ... Number series using for loop \n =============\n");
            printf(" Enter the value of n =");
            scanf("%d",&j);
            for(i=j; i>=1 ;  i--)
            {
                printf("%d\t",i);
            }

            break ;
        case 12:
            printf("\n12.Displaying Analysis  using for loop \n =============\n");
            for (i=1 ; i<=5; i++)
            {

                printf("%d\t",i);
            }

            break ;
        case  13:
            printf("\n13.Displaying Analysis using for loop \n =============\n");
            for (i=1 ; i<= 20 ; i = i+2)
            {

                printf("%d\t",i);
            }

            break ;
        case 14:
            printf("\n14.Displaying A,B,C... ...Z series using for loop \n =============\n");

            for (k ='A'; k <= 'Z'; k++)
            {
                printf("%c \t",k);
            }

            break ;
        case 15:
            printf("\n15.Displaying a,b,c... ...z series using for loop \n =============\n");
            for (k ='a'; k <= 'z'; k++)
            {
                printf("%c \t",k);
            }

            break ;
        case 16:
            printf("\n16.Displaying A,C,E... ...W,Y series using for loop \n =============\n");
            for (k ='A'; k <= 'Z'; k+=2)
            {
                printf("%c \t",k);
            }

            break ;
        case 17:
            printf("\n17.Displaying A,B,C series From ASCII integer using for loop \n =============\n");
            for (i =65; i <= 90; i++)
            {
                printf("%c\t",i);
            }

            break ;
        case 18:
            printf("\n18.Displaying A,B,C series  ASCII Value using for loop \n =============\n");
            for (k ='A'; k <= 'Z'; k++)
            {
                printf("%d\t",k);
            }

            break ;
        case 19:
            printf("\n19.Displaying a,b,c... ... series From ASCII integer using for loop \n =============\n");
            for (i =97; i <= 122; i++)
            {
                printf("%c\t",i);
            }

            break ;
        case 20:


            printf("\n20.Displaying My name using while loop\n =============\n");
            while( i1<=10 )
            {
                printf("Nur hossain Memel\n", i1);
                i1++;
            }

            break ;
        case 21:

            printf("\n21.Displaying value of i  using while loop:\n");
            while( j1<=10 )
            {
                printf("%d\t", j1);
                j1++;
            }

            break ;
        case 22:

            printf("\n22.Displaying Number series \n =============\n");
            while( k1<=10 )
            {
                printf("%d\t", k1);
                k1++;
            }

            break ;
        case 23:

            printf("\n23.Displaying Odd Number series \n =============\n");
            while(l<=10)
            {
                printf("%d\t",l);
                l +=2;
            }

            break ;
        case 24:

            printf("\n24.Displaying Even Number series \n =============\n");
            while(m<=10)
            {
                printf("%d\t",m);
                m +=2;
            }

            break ;
        case 25:

            printf("\n25.Displaying 5,10,15,20,25... Number series \n =============\n");
            while(n<=100)
            {
                printf("%d\t",n);
                n +=5;
            }

            break ;
        case 26:
            printf("\n26.Displaying Reverse Number series \n =============\n");
            while(o>=1)
            {
                printf("%d\t",o);
                o--;
            }
            break ;

        case 27:
            printf("\n27.Displaying Reverse  Even Number series \n =============\n");
            while(p>=2)
            {
                printf("%d\t",p);
                p -= 2;
            }

            break ;

        case 28:

            printf("\n28.Displaying Reverse  odd Number series \n =============\n");
            while(q>=1)
            {
                printf("%d\t",q);
                q -= 2;
            }

            break ;
        case 29:

            printf("\n29.Displaying 1,2,3... ... n Number series \n =============\n");
            printf("Enter the value of n =\n");
            scanf("%d",&s);
            while(r<=s)
            {
                printf("%d\t",r);
                r++;
            }

            break ;
        case 30:

            printf("\n30.Displaying n,n-1,n-2,n-3... ... Number series \n =============\n");
            printf(" Enter the value of n =");
            scanf("%d",&u);
            t=u ;
            while(t>=1)
            {
                printf("%d\t",t);
                t--;
            }

            break ;
        case 31:

            printf("\n31.Displaying Analysis \n =============\n");
            while(v<=5)
            {
                printf("%d\t",v);
                v++;
            }

            break ;
        case 32:

            printf("\n32.Displaying Analysis \n =============\n");
            while(w<=20)
            {
                printf("%d\t",w);
                w += 2;
            }

            break ;
        case 33:

            printf("\n33.Displaying A,B,C... ...Z series \n =============\n");
            while(x<='Z')
            {
                printf("%c\t",x);
                x++;
            }

            break ;
        case 34:

            printf("\n34.Displaying a,b,c... ...z series \n =============\n");
            while(y<='z')
            {
                printf("%c\t",y);
                y++;
            }

            break ;
        case 35:
            printf("\n35.Displaying A,C,E... ...W,Y series \n =============\n");
            while(z<='Z')
            {
                printf("%c\t",z);
                z += 2;
            }

            break ;
        case 36:

            printf("\n36.Displaying A,B,C series From ASCII integer \n =============\n");
            while(a<=90)
            {
                printf("%c\t",a);
                a++;
            }

            break ;
        case 37:

            printf("\n37.Displaying A,B,C series  ASCII Value \n =============\n");
            while(b<='Z')
            {
                printf("%d\t",b);
                b++;
            }

            break ;
        case 38:

            printf("\n38.Displaying a,b,c... ... series From ASCII integer \n =============\n");
            while(c<=122)
            {
                printf("%d\t",c);
                c++;
            }

            break ;
        case 39:
            printf("\n39.Displaying My name \n =============\n");
            do
            {
                printf("      Nur Hossain Memel\n");
                i2++;
            }
            while( i2<=10 );

            break ;
        case 40:
            printf("\n40.Displaying value of i \n =============\n");
            do
            {
                printf("     %d\t", j2);
                j2++;
            }
            while( j2<=10 );

            break ;
        case 41:
            printf("\n41.Displaying Number series \n =============\n");
            do
            {
                printf("     %d\t", k2);
                k2++;
            }
            while( k2<=10 );

            break ;
        case 42:
            printf("\n42.Displaying Odd Number series \n =============\n");
            do
            {
                printf("     %d\t", l);
                l +=2;
            }
            while( l<=10 );

            break ;
        case 43:
            printf("\n43.Displaying Even Number series \n =============\n");
            do
            {
                printf("     %d\t", m);
                m +=2;
            }
            while( m<=10 );

            break ;
        case 44:
        	printf("\n44.Displaying 5,10,15... ... series \n =============\n");
            do
            {
                printf("     %d\t",n);
                n +=5;
            }
            while( n<=100 );

            break ;
        case 45:
            printf("\n45.Displaying Reverse Number series \n =============\n");
            do
            {
                printf("     %d\t",o);
                o--;
            }
            while( o>=1 );

            break ;
        case 46:
            printf("\n46.Displaying Reverse  Even Number series \n =============\n");
            do
            {
                printf("     %d\t",p);
                p -= 2;
            }
            while( p>=2 );

            break ;
        case 47:

            printf("\n47.Displaying 1,2,3... ... n Number series \n =============\n");
            printf("Enter the value of n =\n");
            scanf("%d",&s);
            do
            {
                printf("     %d\t",r);
                r++;
            }
            while( r<=s );

            break ;
        case 48:
            printf("\n48.Displaying n,n-1,n-2,n-3... ... Number series \n =============\n");
            printf(" Enter the value of n =");
            scanf("%d",&u);
            t=u ;
            do
            {
                printf("     %d\t",t);
                t--;
            }
            while( t>=1 );

            break ;
        case 49:
            printf("\n49.Displaying Analysis \n =============\n");
            do
            {
                printf("     %d\t",v);
                v++;
            }
            while( v<=5 );

            break ;
        case 50:
            printf("\n50.Displaying Analysis \n =============\n");
            do
            {
                printf("     %d\t",w);
                w += 2;
            }
            while( w<=20 );

            break ;
        case 51:
            printf("\n51.Displaying A,B,C... ...Z series \n =============\n");
            do
            {
                printf("     %c\t",x);
                x++;
            }
            while( x<='Z' );

            break ;
        case 52:
            printf("\n52.Displaying a,b,c... ...z series \n =============\n");
            do
            {
                printf("     %c\t",y);
                y++;
            }
            while( y<='z' );

            break ;
        case 53:
            printf("\n53.Displaying A,C,E... ...W,Y series \n =============\n");
            do
            {
                printf("     %c\t",z);
                z += 2;
            }
            while( z<='Z');

            break ;
        case 54:
            printf("\n54.Displaying A,B,C series From ASCII integer \n =============\n");
            do
            {
                printf("     %c\t",a);
                a++;
            }
            while( a<=90);

            break ;
        case 55:
            printf("\n55.Displaying A,B,C series  ASCII Value \n =============\n");
            do
            {
                printf("      %d\t",b);
                b++;
            }
            while( b<='Z');

            break ;
        case 56:
            printf("\n56.Displaying A,B,C series  ASCII Value \n =============\n");
            do
            {
                printf("      %d\t",b);
                b++;
            }
            while( b<='Z');

            break ;
        case 57:

            printf("\n57.Displaying a,b,c... ... series From ASCII integer \n =============\n");
            do
            {
                printf("     %d\t",c);
                c++;
            }
            while(c<=122);
        case 58:
            exit(0);
            break;

        default :
			
            printf("Invalid case.please try again.");
        }

    }




    return 0;
}

