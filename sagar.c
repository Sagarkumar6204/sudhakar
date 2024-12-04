#include <stdio.h>
#include <conio.h>
#include<math.h>
void aoc();
void roc();
void coc();
void doc();
void exit();
void def();

void aot();
void pot();
void aorat();
void aoet();
void def_t();
void exitt();

void aor();
void dor();
void por();
void def_r();
void exitre();

void aos();
void pose();
void dos();
void exits();
void def_s();

void som();
void tom();
void msm();
void mom();
void def_m();

void ao();
void doo();
void pat();
void nth();
void def_ma();

void neo();
void npon();
void nponn();
void aeao();
void def_n();

void id_card();






int main()
{
    int choice_1;
    printf("\n          :----***MENSURATION***----:\n");
    printf("  ~^~^~^~^Choose Your Preffered Otion^~^~^~^~\n\n");
    printf("        ______________________________________\n");
    printf("        |     Choose 1: CIRCLE MENU.         |\n");
    printf("        |     Choose 2: TRIANGLE MENU.       |\n");
    printf("        |     Chosse 3: RECTANGLE MENU.      |\n");
    printf("        |     Choose 4: SQUARE MENU.         |\n");
    printf("        |____________________________________|\n");

    printf("                                     :----***MATHEMATICS***----:\n");
    printf("                             ~^~^~^~^Choose Your Preffered Otion^~^~^~^~\n\n");
    printf("                                    ________________________________________\n");
    printf("                                    |     Choose 5: MATRIX MENU.           |\n");
    printf("                                    |     Choose 6: NUMBER SERIES MENU.    |\n");
    printf("                                    |     Chosse 7: NUMBER CHECKER MENU.   |\n");
    printf("                                    |______________________________________|\n");
    
     printf("          :----*** ID CARD ***----:\n");
    printf("  ~^~^~^~^Choose Your Preffered Otion^~^~^~^~\n\n");
    printf("        __________________________________\n");
    printf("        |   Choose 8:  STUDENT ID CARD.   |\n");
    printf("        |_________________________________|\n\n");


    printf("                                ENTER YOUR CHOICE HERE: ");
    scanf("%d",&choice_1);
printf("\n");
switch (choice_1)
{
    int choice ;
    case 1:
    
        
        printf("--**WELCOME IN CIRCLE**--\n");
        printf(" ~^~^~^Choose prefferd CIRCLE option~^~^~^\n\n");
        printf("Choose 1. find area of CIRCLE:\n");
        printf("Choose 2. find radius of CIRCLE:\n");
        printf("Choose 3. find circumference of CIRCLE:\n");
        printf("Choose 4. find diameter of CIRCLE\n");
        printf("Choose 0. : EXIT :\n\n");
       
        printf(" ENTER YOUR CHOICE HERE: ");
        scanf("%d",&choice);
        printf("\n");
        switch (choice)
        {
        case 1:
        aoc();
        return main();
        break;

         
         case 2:
         roc();
         return main();
         break;

         
         case 3:
         coc();
         return main();
         break;

         
         case 4:
          doc();
          return main();
         break;

         case 0:
         exit();
         return main();
         break; 

         default:
         def();
         return main();
         break;
        }
        int choice_2;
        case 2:
        printf("---**WELCOME IN TRIANGLE MENU**---\n");
        printf("~^~^~^~^Choose preffered TRIANGLE option~^~^~^~^\n\n");
        printf("Choose 1. find area of TRIANGLE\n");
        printf("Choose 2. find area of right angle TRIANGLE\n");
        printf("Choose 3. find area of equilateral triangle\n");
        printf("Choose 4. find area of perimeter of a TRIANGLE\n");
        printf("Choose 0. EXIT     \n\n");
        
        
        printf("ENTER YOUR CHOICE HERE: ");
        scanf("%d",&choice_2);
        printf("\n");
        switch (choice_2)
        {
        case 1:
        aot();
        return main();
        break;

        
        case 2:
        aorat();
        return main();
        break;

        
        case 3:
        aoet();
        return main();
        break;


        
        case 4:
        pot();
        return main();
        break;

        case 0:
         exitt();
         return main();
         break; 


        

        default :
        def_t();
        return main();
        break;
        }

        int choice_3;
        case 3:
        printf("--**WELCOME IN RECTANGLE MENU**--\n");
        printf("~^~^~^Choose preffered option~^~^~^\n\n");
        printf("Choose 1. find AREA of rectangle.\n");
        printf("Choose 2. find PERIMETER of rectangle.\n");
        printf("Choose 3. find DIAGONAL of perimeter.\n");
        printf("Choose 0. EXIT     \n\n");

        printf("ENTER YOUR CHOICE HERE: ");
        scanf("%d",&choice_3);
        switch (choice_3)
        {
            

        case 1:
        aor();
        return main();
        break;

       
        case 2:
        por();
        return main();
        break;

        
        case 3:
        dor();
        return main();
        break;

        case 0:
         exitre();
         return main();
         break; 


        default:
        def_r();
        return main();
        break;

        }
        int choice_4;
        case 4:
        printf("--**WELCOME IN SQUARE MENU**--\n");
        printf("~^~^~^Choose preffered option~^~^~^\n\n");
        printf("Choose 1. find AREA of square.\n");
        printf("Choose 2. find PERIMETER of square.\n");
        printf("Choose 3. find DIAGONAL of square.\n\n"); 
        printf("ENTER YOUR CHOICE HERE: ");
        scanf("%d",&choice_4);
        switch (choice_4)
        {
        case 1:
        aos();
        return main();
        break;

        case 2:
        pose();
        return main();
        break;
        
        case 3:
        dos();
        return main();
        break;

        case 0:
         exits();
         return main();
         break;

         default:
       def_s();
       return main();
       break;




        }
        int choice_5;
        case 5:
        printf("---**WELCOME IN MATRIX MENU**---\n");
        printf("~^~^~^~^Choose preffered MATRIX option~^~^~^~^\n\n");
        printf("Choose 1. find SUM of matrix.\n");
        printf("Choose 2. find TRANSPOSE of matrix.\n");
        printf("Choose 3. find MULTIPICATION of matrix.\n");
        printf("Choose 4. find MATRIX is symmetric or not\n");
        printf("Choose 0. EXIT\n\n");

        printf("ENTER YOUR CHOICE HERE: ");
        scanf("%d",&choice_5);
        switch (choice_5)
        {
            case 1:
            som();
             return main();
            break;

            case 2:
            tom();
             return main();
            break;

            case 3:
            mom();
             return main();
            break;

            case 4:
            msm();
             return main();
            break;

            case 0:
            printf(" ---***EXIT SUCCESSFULLY***---");
             return main();
            break;

            default:
            def_m();
             return main();
            break;
    
        }
        int choice_6;
        case 6:
         printf("--**WELCOME IN NUMBER SERIES MENU**--\n");
        printf("~^~^~^Choose preffered option~^~^~^\n\n");
        printf("Choose 1. find ASCENDING ORDER.\n");
        printf("Choose 2. find DESCENDING ORDER.\n");
        printf("Choose 3. find PRINT A TABLE.\n"); 
        printf("Choose 4. find 1 to nth number table.\n");
        printf("Choose 0. EXIT.\n\n");
        

        printf("ENTER YOUR CHOICE HERE: ");
        scanf("%d",&choice_6);
        switch (choice_6)
        {
        case 1:
        ao();
        return main();
        break;
        case 2:
        doo();
        return main();
        break;

        case 3:
        pat();
        return main();
        break;

        case 4:
        nth();
        return main();
        break;

        case 0:
        printf("---**EXIT SUCCESSFULLY**---");
        return main();
        break;

        default:
        def_ma();
        return main();
        break;
        }
        int choice_7;
        case 7:
        printf("--**WELCOME IN NUMBER CHECKER MENU**--\n");
        printf("~^~^~^Choose preffered option~^~^~^\n\n");
        printf("Choose 1. find NUMBER IS ODD OR EVEN.\n");
        printf("Choose 2. find NUMBER IS PRIME OR NOT .\n");
        printf("Choose 3. find & PRINT 1 TO nth TERM NUMBER.\n");
        printf("Choose 4. find 1 TO nth TERM NUMBER & DISPLAY ALL ODD NUMBER OR ALL EVEN NUMBER.\n");
        printf("Choose 0. EXIT.\n\n");
        
         

        printf("ENTER YOUR CHOICE HERE: ");
        scanf("%d",&choice_7);
        switch (choice_7)
        {
        case 1:
        neo();
        return main();
        break;

        case 2:
        npon();
        return main();
        break;

        case 3:
        nponn();
        return main();
        break;

        case 4:
        aeao();
        return main();
        break;

        case 0:
        printf("---**EXIT SUCCESSFULLY**---");
        return main();
        break;

        default:
        def_n();
        break;
        }
        case 8:
        id_card();
        return main();
        break;

       
       
       default:
       printf("   invalid choice\n");
       printf("--***TRY AGAIN***--\n\n");
       printf("              -----THANK YOU-----");
       return main(); 

}
return 0;
}
void aoc()
{
    float radius;
    printf("enter the radius of CIRCLE:");
        scanf("%f",&radius);
        printf("\nthe radius of circle is :%f\n\n",3.14*radius*radius);
        printf("                -----THANK YOU-----");
        getch();
}
void roc()
{
    float c;
  printf(" enter the circumference of CIRCLE:");
         scanf("%f",&c);
         printf(" \nthe radius of CIRCLE is:%f\n\n",c/2*3.14);
         printf("             -----THANK YOU-----");
         getch();  
}
void coc()
{
    float r;
    printf(" enter the radius of CIRCLE: ");
         scanf("%f",&r);
         printf(" \nthe circumference of CIRCLE is:%f\n\n",2*3.14*r);
         printf("              -----THANK YOU-----\n");
         getch();
}
void doc()
{
    float rad;
    printf("enter the radius of CIRCLE: ");
         scanf("%f",&rad);
         printf("the diameter of CIRCLE is:%f\n\n",2*rad);
         printf("          -----THANK YOU-----");
         getch();
}
void def()
{
     printf("   invalid choice\n");
       printf("--***TRY AGAIN***--\n\n");
       printf("              -----THANK YOU-----");
       getch();
}
void aot()
{
    float b,h;
    printf("enter the BASE of triangle: ");
        scanf(" %f",&b);
        printf("\nenter the HEIGHT of triangle:");
        scanf("%f",&h);
        printf("the area of a TRIANGLE is:%f\n\n",1/2*b*h);
        printf("              -----THANK YOU-----");
        getch();
}
void aorat()
{
     float he,base,perp;
    printf("enter the HYPOTENUSE of triangle: ");
        scanf(" %f",&he);
        printf("\nenter the BASE of triangle: ");
        scanf("%f",&base);
        
        printf("\nthe area of right angle triangle is :%f\n\n",1/2*base*he);
        printf("              -----THANK YOU-----");
        getch();
}
void aoet()
{
    float side;
    printf("enter the SIDE of triangle: ");
        scanf("%f ",&side);
        printf(" the area of equilateral triangle is:%f\n\n",1.732/4*side*side);
        printf("              -----THANK YOU-----");
        getch();
}
     void pot()
{
    float side1,side2,side3;
     printf("enter the SIDE-1 of triangle: ");
        scanf("%f",&side1);
        printf("\nenter the SIDE-2 of triangle: ");
        scanf("%f",&side2);
        printf("\nenter the SIDE-3 of triangle: ");
        scanf("%f",&side3);
        printf("\nthe PERIMETER OF TRIANGLE is:%f\n\n",side1+side2+side3);
        printf("              -----THANK YOU-----");
        getch();
}
void def_t()
{
    printf("   invalid choice\n");
       printf("--***TRY AGAIN***--\n\n");
       printf("              -----THANK YOU-----");
       getch();
}
void aor()
{
    float l,be;
    printf("enter the LENGTH of a rectangle: ");
        scanf("%f",&l);
        printf("\nenter the BREADTH of a rectangle: ");
        scanf("%f",&be);
        printf("the AREA of a rectangle is :%f\n\n",l*be);
        printf("              -----THANK YOU-----");
        getch();
}
void por()
{
     float w,le;
    printf("enter the WIDTH of a rectangle ");
        scanf("%f",&w);
        printf("\nenter the LENGTH of a rectangle ");
        scanf("%f",&le);
        printf("the PERIMETER of rectangle is:%f\n\n",2*le+w);
        printf("              -----THANK YOU-----");
        getch();
}
void dor()
{
    float lenth,brd;
    printf("enter the LENGTH of rectangle: ");
        scanf("%f",&lenth);
        printf("\nenter the BREADTH of rectangle: ");
        scanf("%f",&brd);
        printf("the DIAGONAL of a rectangle is:%f\n",lenth*2+brd*2);
        printf("              -----THANK YOU-----\n\n");
        getch();
}
void def_r()
{
    printf("   invalid choice\n");
       printf("--***TRY AGAIN***--\n");
       printf("              -----THANK YOU-----\n\n");
       getch();
}
void aos()
{
float side;
printf("enter the side of square: ");
scanf("%f",&side);
printf("the area of square is:%f\n",side*side);
printf("              -----THANK YOU-----\n\n");
getch();

}
void pose()
{
    float side;
    printf("enter the side of sqaure: ");
    scanf("%f",&side);
    printf("the perimeter of a square is :%f\n",4*side);
    printf("              -----THANK YOU-----\n\n");
getch();

}
void dos()
{
    float a;
    printf("enter the side of square: ");
    scanf("%f",&a);
    printf("the diagonal of square is :%f\n",a*1.414);
    printf("              -----THANK YOU-----\n\n");
    getch();
}
void exitt()
{
    printf("***exit succesfully***");

}
void exitre()
{
    printf("***exit succesfully***");
}
void exits()
{
    printf("***exit succesfully***");
}
void def_s()
{
       printf("   invalid choice\n");
       printf("--***TRY AGAIN***--\n\n");
       printf("              -----THANK YOU-----\n\n\n");
       getch();
}
void som()
{

  int r, c, a[100][100], b[100][100], sum[100][100], i, j;
  printf("Enter the number of rows (between 1 and 100): ");
  scanf("%d", &r);
  printf("Enter the number of columns (between 1 and 100): ");
  scanf("%d", &c);

  printf("\nEnter elements of 1st matrix:\n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      printf("Enter element a%d%d: ", i + 1, j + 1);
      scanf("%d", &a[i][j]);
    }

  printf("Enter elements of 2nd matrix:\n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      printf("Enter element b%d%d: ", i + 1, j + 1);
      scanf("%d", &b[i][j]);
    }

    printf(" entered matrix:A\n");
    for (i = 0; i < r; ++i)
    {
    for (j = 0; j < c; ++j)
    {
        printf("%d\t",a[i][j]);
    }
    printf("\n");
    }
  // adding two matrices
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      sum[i][j] = a[i][j] + b[i][j];
    }

  // printing the result
  printf("\nSum of two matrices: \n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      printf("%d   ", sum[i][j]);
      if (j == c - 1) {
        printf("\n\n");
      }
    }
     getch();


}
void tom()
{

  int a[10][10], transpose[10][10], r, c;
  printf("Enter rows and columns: ");
  scanf("%d %d",&r,&c);

  // asssigning elements to the matrix
  printf("\nEnter matrix elements:\n");
  for (int i = 0; i < r; ++i)
  for (int j = 0; j < c; ++j) {
    printf("Enter element a%d%d: ", i + 1, j + 1);
    scanf("%d", &a[i][j]);
  }

  // printing the matrix a[][]
  printf("\nEntered matrix: \n");
  for (int i = 0; i < r; ++i)
  for (int j = 0; j < c; ++j) {
    printf("%d  ", a[i][j]);
    if (j == c - 1)
    printf("\n");
  }

  // computing the transpose
  for (int i = 0; i < r; ++i)
  for (int j = 0; j < c; ++j) {
    transpose[j][i] = a[i][j];
  }

  // printing the transpose
  printf("\nTranspose of the matrix:\n");
  for (int i = 0; i < c; ++i)
  for (int j = 0; j < r; ++j) {
    printf("%d  ", transpose[i][j]);
    if (j == r - 1)
    printf("\n");
  }
   getch();


}
void msm()
{
  int i, j, rows, columns, a[10][10], b[10][10], c = 1;
  
  printf("\nEnter the number of rows and columns  :  ");
  scanf("%d %d", &i, &j);
 
  printf("\nEnter the matrix elements \n");
  for(rows = 0; rows < i; rows++)
   {
    for(columns = 0;columns < j;columns++)
     {
       scanf("%d", &a[rows][columns]);
     }
   }
    //Finding out the Transpose of matrix 
  for(rows = 0; rows < i; rows++)
   {
    for(columns = 0;columns < j; columns++)
     {
       b[columns][rows] = a[rows][columns];
     }
   }
     
  for(rows = 0; rows < i; rows++)
   {
    for(columns = 0; columns < j; columns++)
     {
     if(a[rows][columns] != b[rows][columns])
     {
     c++;  
break;   
}
      }
   }
   if(c == 1)
   {
   printf("\n The Matrix is a Symmetric Matrix. ");
}
else
{
printf("\n The Matrix is Not a Symmetric Matrix. ");
}  getch();

}
void def_m()
{
  printf("   invalid choice\n");
       printf("--***TRY AGAIN***--\n\n");
       printf("              -----THANK YOU-----");
       getch();  
}
void mom()
{
    int m, n, p, q, c, d, k, sum = 0;
    int first[10][10], second[10][10], multiply[10][10];

    printf("\nEnter the number of rows and columns of first matrix:\n");
    scanf("%d %d", &m, &n);

    /*//Entering elements of first matrix
    printf("\nEnter the elements of first matrix\n");
    for (  c = 0 ; c < m ; c++ )
        for ( d = 0 ; d < n ; d++ )
            scanf("%d", &first[c][d]);*/

    printf("\nEnter the number of rows and columns of second matrix:\n");
    scanf("%d%d", &p, &q);

    //Checking if Matrix Multiplication is possible
    if ( n != p )
    {
        printf("\nMatrices with entered orders can't be multiplied with each other.\n");
        printf("\nThe column of first matrix should be equal to row of second.\n");
    }
    else
    {
        //Entering elements of first matrix
        printf("\nEnter the elements of first matrix:\n");
        for (  c = 0 ; c < m ; c++ )
            for ( d = 0 ; d < n ; d++ )
                scanf("%d", &first[c][d]);

        //Entering elements of second matrix
        printf("\nEnter the elements of second matrix:\n");
        for ( c = 0 ; c < p ; c++ )
            for ( d = 0 ; d < q ; d++ )
                scanf("%d", &second[c][d]);

        //Carrying out matrix multiplication operation
        for ( c = 0 ; c < m ; c++ )
        {
            for ( d = 0 ; d < q ; d++ )
            {
                for ( k = 0 ; k < p ; k++ )
                {
                    sum = sum + first[c][k]*second[k][d];
                }

                multiply[c][d] = sum;
                sum = 0;
            }
        }

        //Printing the final product matrix
        printf("\nThe product of entered matrices is:\n");
        for ( c = 0 ; c < m ; c++ )
        {
            for ( d = 0 ; d < q ; d++ )
                printf("%d\t", multiply[c][d]);

            printf("\n");
        }
    } getch();

}
void ao()
{
    
    
 
        int i, j, a, n, number[300];
        printf("Enter the size of number: \n");
        scanf("%d", &n);
 
        printf("Enter the numbers \n");
        for (i = 0; i < n; ++i)
            scanf("%d", &number[i]);
 
        for (i = 0; i < n; ++i) 
        {
 
            for (j = i + 1; j < n; ++j)
            {
 
                if (number[i] > number[j]) 
                {
 
                    a =  number[i];
                    number[i] = number[j];
                    number[j] = a;
 
                }
 
            }
 
        }
 
        printf("The numbers arranged in ascending order are given below \n");
        for (i = 0; i < n; ++i)
            printf("%d\n", number[i]); getch();
 
    

}
void doo()
{
 
    
 
        int number[300];
 
        int i, j, a, n;
        printf("Enter the size of numbers :\n");
        scanf("%d", &n);
 
        printf("Enter the numbers \n");
        for (i = 0; i < n; ++i)
	        scanf("%d", &number[i]);
 
        /*  sorting begins ... */
 
        for (i = 0; i < n; ++i) 
        {
            for (j = i + 1; j < n; ++j) 
            {
                if (number[i] < number[j]) 
                {
                    a = number[i];
                    number[i] = number[j];
                    number[j] = a;
                }
            }
        }
 
        printf("The numbers arranged in descending order are given below\n");
 
        for (i = 0; i < n; ++i) 
        {
            printf("%d\n", number[i]);
        } getch();
}

void pat()
{
   
  int n;
  printf("Enter an integer: ");
  scanf("%d", &n);

  for (int i = 1; i <= 10; ++i) {
    printf("%d * %d = %d \n", n, i, n * i);
  } getch();
  

}
void nth()
{
    int na;
    printf("enter a nth term number to get table:");
    scanf("%d",&na);
    for(int i=1;i<na;i++)
    {
        for(int j=1;j<=10;j++)
        {
            printf("%d * %d = %d \n",i,j,i*j);

        }
        printf("\n");

    }
    getch();

}

void def_ma()
{
   printf("   invalid choice\n");
       printf("--***TRY AGAIN***--\n");
       printf("              -----THANK YOU-----\n\n");
       getch();
}

void neo()
{
int n;
printf("enter a number : ");
scanf(" %d",&n);
if (n%2==0)
{
  /* code */
  printf("%d is even number:",n);

}
else
{
  printf("%d is odd number:",n);
  
} getch();

}
void npon()
{
  // Necessary for the sqrt function


    int n, i, c = 0;

    printf("Enter any number: ");
    scanf("%d", &n);

    // Immediate check for numbers less than 2
    if (n <= 1) {
        printf("%d is not a Prime number.\n", n);
        
    }

    // Logic to check if the number is prime
    // Loop only up to the square root of n to find factors of n
    for (i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            c++;  // Factor found
            break;
        }
    }

    if (c == 0) {
        printf("%d is a Prime number.\n", n);  // If no factors found, n is prime
    } else {
        printf("%d is not a Prime number.\n", n);  // Otherwise, n is not prime
    } getch();

    
}
void nponn()
{
    int n,i,fact,j;
    printf("Enter the Number");
    scanf("%d",&n);
    printf("Prime Numbers are: \n");
    for(i=1; i<=n; i++)
    {
        fact=0;
        for(j=1; j<=n; j++)
        {
            if(i%j==0)
                fact++;
        }
        if(fact==2)
            printf("%d " ,i);
    } getch();
  
}
void aeao()
{
  int start,end;
  printf("enter STARTING NUMBER : ");
  scanf("%d",&start);
  printf("\n enter ENDING NUMBER: ");
  scanf("%d",&end);
  printf("\nALL EVEN NUMBER ARE:-\n");
  for(int i =start;i<=end;i++)
  {
    if (i%2==0)
    {
      printf("%d\t",i);

    }
    
  }
  printf("\nALL ODD NUMBER ARE:-\n");

  for(int j=start;j<=end;j++)
  {
if (j%2!=0)
{
  /* code */printf("%d\t",j);

}

  } getch();
}

void def_n()
{
  
 printf("   invalid choice\n");
       printf("--***TRY AGAIN***--\n");
       printf("              -----THANK YOU-----\n\n");
       getch();
}
void id_card()
{
  printf("ENTER THE DETAILS OF STUDENTS BELOW:\n\n");
        struct student
        {
          char name[50];
          char branch[50];
          int date;
          int month;
          int year;
          char adder[100];
          int mobile;

        }std;
        printf("enter the NAME of student:");
       scanf("%s",&std.name);
        printf("\n enter the BRANCH of student:");
        scanf("%s",&std.branch);
        printf("\nenter the DATE OF BIRTH of stduent:\n");
        printf("enter DATE:");
        scanf("%d",&std.date);
        printf("enter MONTH:");
        scanf("%d",&std.month);
        printf("enter year:");
        scanf("%d",&std.year);
        printf("enter the FULL ADRRESS of student:");
        scanf("%s",&std.adder);
        printf("enter the MOBILE NUMBER of student");
        scanf("%d",&std.mobile);
        printf("\n**STUDENT ID CARD has been generated successfully**\n\n");
        printf(" PRESS ENTER TO VIEW :");
        getch();
        printf("\n");
        printf("\n______________________________________________________________________________");
        printf("\n|                      SUBHASH INSTITUTE OF TECHNOLOGY                       |");
        printf("\n|                           (AFFILIATED TO JUT)                              |");
        printf("\n|                      Koiridih,Dist-Giridih, Jharkhand.                     |");
        printf("\n|                  Ph.: 7900635656 : E-mail:-sit@gmail.com                   |");
        printf("\n|____________________________________________________________________________|");
        printf("\n|                                                                            |");
        printf("\n| NAME: %s",std.name);
        printf("\n| BRANCH: %s",std.branch);
        printf("\n| D-O-B: %d-%d-%d",std.date,std.month,std.year);
        printf("\n| ADDRESS: %s",std.adder);
        printf("\n| MOBILE: %d",std.mobile);
        printf("\n|                                                          PRINCIPAL SIGN    |");
        printf("\n|____________________________________________________________________________|");
        printf(" \n-:Wants To Save:-\n");
        printf("Wants To Save(PRESS 1)\nWants To Don't Save(PRESS 0)\n\n");
        int n;
        printf("ENTER YOUR CHOICE(0 or 1):");
        scanf("%d",&n);
        if (n==1)
        {
          printf("     ***FILE SAVED SUCCESSFULLY***  \n\n");
          printf("           ---THANK YOU---              ");
          getch();
        }
        else{
          printf("           ---THANK YOU---              ");
          getch();
        }
        getch();
        
}








