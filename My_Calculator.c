#include<stdio.h>
#include <math.h>
void startbody();  // this will store the stating structure of the calculator.
void endbody();  // this will store the ending structure of the calculator.
void operation(); // All calculation
void addition(); // addition logic
void substraction();// substraction logic
void multiplication();//multiplication logic
void division();// division logic
void reminder();// reminder logic
void exponent();// exponent logic
void factorial();//factorial logic
void matrix_additon(); // Matrix_Additon logic
int a, b; // integers on which the opereation is to be performed 
float e,f; // floats on which the opereation is to be performed 
char  operations,another='r'; // loop controllers 
 void main()
{
  printf(" \t Enter 'r' to Re-enter\n");
     startbody();
     for(;another=='r';)
{
  printf("\n%c:- ",186);
   fflush(stdin);
  scanf("%d%c",&a,&operations);
  // a is a first number 
  // q is the operation character
  printf("%c:-",186);
   operation();
      fflush(stdin);
    printf("\t");//10\b's
      scanf("%c",&another);
 printf("\b\b\b\b\b\b\b\b\b\b");//10 \b's
 printf("\b\b\b\b\b\b\b\b\b\b");
 printf("\b\b\b\b\b\b\b\b\b\b"); // 56\b's
 printf("\b\b\b\b\b\b\b\b\b\b");
 printf("\b\b\b\b\b\b\b\b\b\b");//10\b's 
 printf("\b\b\b\b\b\b");//6\b's 
  printf("%c",186);
  printf("\b\b\b\b\b\b\b\b");//8\b's
  printf("%c",186);
}
    printf("\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b");
      endbody();
}
void startbody()
{  
  // the start 
     // for top line we have used 38 characters
     // {2 side angles 201|187} and {36 horzontal lines :205}  
   /*1*/  printf("%c%c%c%c%c%c",201,205,205,205,203,205);
   /*2*/ printf("%c%c%c%c%c%c",205,205,205,205,203,205);
   /*3*/ printf("%c%c%c%c%c%c",205,205,205,205,203,205);// 205 is printed 36 times
   /*4*/ printf("%c%c%c%c%c%c",205,205,205,205,203,205);
   /*5*/ printf("%c%c%c%c%c%c",205,205,205,203,205,205);
   /*6*/ printf("%c%c%c%c%c%c%c",205,205,203,205,205,205,187);
     // for middle line we have used 38 characters
     //{37:-%} {205:- horizntal line} {186 - vertical line}
   /*1*/ printf("\n%c + %c  -  %c  /  %c  %c ",186,186,186,186,37);
   /*2*/ printf(" %c *  %c  ! %c ^%2c",186,186,186,186);
   /*3*/ printf("\n%c%c%c%c%c%c",204,205,205,205,202,205);
   /*4*/ printf("%c%c%c%c%c%c",205,205,205,205,202,205);
   /*5*/ printf("%c%c%c%c%c%c",205,205,205,205,202,205);
   /*6*/ printf("%c%c%c%c%c%c",205,205,205,205,202,205);// 205 is printed 36 times 
   /*7*/ printf("%c%c%c%c%c%c",205,205,205,202,205,205);
   /*8*/  printf("%c%c%c%c%c%c%c",205,205,202,205,205,205,185);
   /*9*/ printf("\n%c%36c",186,186);
             // 27 \b's
   /*1*/  printf("\b\b\b\b\b");
   /*2*/  printf("\b\b\b\b\b");
   /*3*/ printf("\b\b\b\b\b");
   /*4*/ printf("\b\b\b\b\b");
   /*5*/ printf("\b\b\b\b\b");
   /*6*/ printf("\b\b");
                printf("{  MY CALCULATOR }");
                // 205 is printed 36 times 
    /*1*/printf("\n%c%c%c%c%c%c%c",204,205,205,205,205,205,205);
    /*2*/ printf("%c%c%c%c%c%c",205,205,205,205,205,205);
    /*3*/ printf("%c%c%c%c%c%c",205,205,205,205,205,205);
    /*4*/ printf("%c%c%c%c%c%c",205,205,205,205,205,205);
   /*5*/ printf("%c%c%c%c%c%c",205,205,205,205,203,205);
   /*6*/ printf("%c%c%c%c%c%c",205,205,205,205,205,185);
}
void operation()
{
    switch (operations)
  {
  case '+':
    addition();
    break;
  case '-':
    substraction();
    break;
  case '*':
    multiplication();
    break;
  case '/':
    division();
    break;
  case '!':
    factorial();
    break;
  case '^':
    exponent();
    break;
  case '%':
      reminder();
    break;
  case 'D':
      matrix_additon();
    break;
  default:
    break;
  }
}
void addition()
{
    printf("\b\b\b\b\b\b\b\b\b\b");// 10 \b's
    printf("\b\b\b\b\b\b\b\b\b\b");// 10 \b's
    printf("\b\b\b\b\b\b\b\b\b\b");// 10 \b's
    printf("\b\b\b\b\b\b\b\b\b\b");// 10 \b's } 80\b's are used
    printf("\b\b\b\b\b\b\b\b\b\b");// 10 \b's
    printf("\b\b\b\b\b\b\b\b\b\b");// 10 \b's
    printf("\b\b\b\b\b\b\b\b\b\b");// 10 \b's
    printf("\b\b\b\b\b\b\b\b\b\b");// 10 \b's
    
   scanf("%d", &b);
  printf("\a");
  int sum = a + b;
  printf("=%d\n",sum);
  printf("\b\b\b\b\b");// 5 \b's
  printf("\b\b\b\b\b");
  printf("\b\b\b\b\b");          // } 20\b's 
  printf("\b\b\b\b\b");
  printf("\b\b\b\b\b\b\b\b\b\b");// 10 \b's
  printf("\b\b\b\b\b\b\b\b\b\b");// 10 \b's
  printf("\b\b\b\b\b\b\b\b\b\b");// 10 \b's
  printf("\b\b\b\b\b\b\b\b\b\b");// 10 \b's
  printf("\b\b\b\b\b\b\b\b\b\b");// 10 \b's
  printf("\b\b\b\b\b\b\b\b\b\b");// 10 \b's  //} 43 \b's
  printf("\b\b\b\b\b\b\b\b\b\b");// 10 \b's 
  printf("\b\b\b");
  
  printf("%cr / x %c\n",186,186);
}
void substraction()
{
    printf("\b\b\b\b\b\b\b\b\b\b");// 10 \b's
    printf("\b\b\b\b\b\b\b\b\b\b");// 10 \b's
    printf("\b\b\b\b\b\b\b\b\b\b");// 10 \b's
    printf("\b\b\b\b\b\b\b\b\b\b");// 10 \b's   } 80\b's
    printf("\b\b\b\b\b\b\b\b\b\b");// 10 \b's
    printf("\b\b\b\b\b\b\b\b\b\b");// 10 \b's
    printf("\b\b\b\b\b\b\b\b\b\b");// 10 \b's
    printf("\b\b\b\b\b\b\b\b\b\b");// 10 \b's
  scanf("%d", &b);
  int substraction = a - b;
  printf("=%d\n ", substraction);
    printf("\b\b\b\b\b\b\b\b\b\b");// 10 \b's
    printf("\b\b\b\b\b\b\b\b\b\b");// 10 \b's
    printf("\b\b\b\b\b\b\b\b\b\b");// 10 \b's
    printf("\b\b\b\b\b\b\b\b\b\b");// 10 \b's   } 64\b's
    printf("\b\b\b\b\b\b\b\b\b\b");// 10 \b's
    printf("\b\b\b\b\b\b\b\b\b\b");// 10 \b's
    printf("\b\b\b\b");
  
  printf("%cr / x %c\n%c",186,186,186);
}
void multiplication()
{
   printf("\b\b\b\b\b\b\b\b\b\b");// 10 \b's
    printf("\b\b\b\b\b\b\b\b\b\b");// 10 \b's
    printf("\b\b\b\b\b\b\b\b\b\b");// 10 \b's
    printf("\b\b\b\b\b\b\b\b\b\b");// 10 \b's   } 80\b's
    printf("\b\b\b\b\b\b\b\b\b\b");// 10 \b's
    printf("\b\b\b\b\b\b\b\b\b\b");// 10 \b's
    printf("\b\b\b\b\b\b\b\b\b\b");// 10 \b's
    printf("\b\b\b\b\b\b\b\b\b\b");// 10 \b's
  scanf("%d",&b);
  int multiplication = a * b;
  printf("=%d\n " ,multiplication);
    printf("\b\b\b\b\b\b\b\b\b\b");// 10 \b's
    printf("\b\b\b\b\b\b\b\b\b\b");// 10 \b's
    printf("\b\b\b\b\b\b\b\b\b\b");// 10 \b's
    printf("\b\b\b\b\b\b\b\b\b\b");// 10 \b's   } 64\b's
    printf("\b\b\b\b\b\b\b\b\b\b");// 10 \b's
    printf("\b\b\b\b\b\b\b\b\b\b");// 10 \b's
    printf("\b\b\b\b"); 
  printf("%cr / x %c\n%c",186,186,186);

}
void division()
{
  printf("\b\b\b\b\b\b\b\b\b\b");// 10 \b's
    printf("\b\b\b\b\b\b\b\b\b\b");// 10 \b's
    printf("\b\b\b\b\b\b\b\b\b\b");// 10 \b's
    printf("\b\b\b\b\b\b\b\b\b\b");// 10 \b's   } 80\b's
    printf("\b\b\b\b\b\b\b\b\b\b");// 10 \b's
    printf("\b\b\b\b\b\b\b\b\b\b");// 10 \b's
    printf("\b\b\b\b\b\b\b\b\b\b");// 10 \b's
    printf("\b\b\b\b\b\b\b\b\b\b");// 10 \b's
  scanf("%f",&e);
  float division = a / e;
  printf("=%1.2f\n ",division);
  printf("\b\b\b\b\b\b\b\b\b\b");// 10 \b's
    printf("\b\b\b\b\b\b\b\b\b\b");// 10 \b's
    printf("\b\b\b\b\b\b\b\b\b\b");// 10 \b's
    printf("\b\b\b\b\b\b\b\b\b\b");// 10 \b's   } 64\b's
    printf("\b\b\b\b\b\b\b\b\b\b");// 10 \b's
    printf("\b\b\b\b\b\b\b\b\b\b");// 10 \b's
    printf("\b\b\b\b");
  printf("%cr / x %c\n%c",186,186,186);
}
void exponent()
{
  printf("\b\b\b\b\b\b\b\b\b\b");// 10 \b's
    printf("\b\b\b\b\b\b\b\b\b\b");// 10 \b's
    printf("\b\b\b\b\b\b\b\b\b\b");// 10 \b's
    printf("\b\b\b\b\b\b\b\b\b\b");// 10 \b's   } 80\b's
    printf("\b\b\b\b\b\b\b\b\b\b");// 10 \b's
    printf("\b\b\b\b\b\b\b\b\b\b");// 10 \b's
    printf("\b\b\b\b\b\b\b\b\b\b");// 10 \b's
    printf("\b\b\b\b\b\b\b\b\b\b");// 10 \b's
  scanf("%f",&e);
  float exponent = pow(a, e);
  printf("=%1.2f\n ",exponent);
   printf("\b\b\b\b\b\b\b\b\b\b");// 10 \b's
    printf("\b\b\b\b\b\b\b\b\b\b");// 10 \b's
    printf("\b\b\b\b\b\b\b\b\b\b");// 10 \b's
    printf("\b\b\b\b\b\b\b\b\b\b");// 10 \b's   } 64\b's
    printf("\b\b\b\b\b\b\b\b\b\b");// 10 \b's
    printf("\b\b\b\b\b\b\b\b\b\b");// 10 \b's
    printf("\b\b\b\b");
  printf("%cr / x %c\n%c",186,186,186);
}
void factorial()
{
   printf("\b\b\b\b\b\b\b\b\b\b");// 10 \b's
    printf("\b\b\b\b\b\b\b\b\b\b");// 10 \b's
    printf("\b\b\b\b\b\b\b\b\b\b");// 10 \b's
    printf("\b\b\b\b\b\b\b\b\b\b");// 10 \b's   } 80\b's
    printf("\b\b\b\b\b\b\b\b\b\b");// 10 \b's
    printf("\b\b\b\b\b\b\b\b\b\b");// 10 \b's
    printf("\b\b\b\b\b\b\b\b\b\b");// 10 \b's
    printf("\b\b\b\b\b\b\b\b\b\b");// 10 \b's
  float fac = 1;
  for (float i = 1.0; i <= a; i++)
  {
    fac = fac * i;
  }
  printf("=%0.2f\n",fac);
   printf("\b\b\b\b\b\b\b\b\b\b");// 10 \b's
    printf("\b\b\b\b\b\b\b\b\b\b");// 10 \b's
    printf("\b\b\b\b\b\b\b\b\b\b");// 10 \b's
    printf("\b\b\b\b\b\b\b\b\b\b");// 10 \b's   } 63\b's
    printf("\b\b\b\b\b\b\b\b\b\b");// 10 \b's
    printf("\b\b\b\b\b\b\b\b\b\b");// 10 \b's
    printf("\b\b\b");
  printf("%cr / x %c\n",186,186);
}
void reminder()
{
   printf("\b\b\b\b\b\b\b\b\b\b");// 10 \b's
    printf("\b\b\b\b\b\b\b\b\b\b");// 10 \b's
    printf("\b\b\b\b\b\b\b\b\b\b");// 10 \b's
    printf("\b\b\b\b\b\b\b\b\b\b");// 10 \b's   } 80\b's
    printf("\b\b\b\b\b\b\b\b\b\b");// 10 \b's
    printf("\b\b\b\b\b\b\b\b\b\b");// 10 \b's
    printf("\b\b\b\b\b\b\b\b\b\b");// 10 \b's
    printf("\b\b\b\b\b\b\b\b\b\b");// 10 \b's
  scanf("%d",&b);
  int reminder = a % b;
  printf("=%d\n ",reminder);
  printf("\b\b\b\b\b\b\b\b\b\b");// 10 \b's
    printf("\b\b\b\b\b\b\b\b\b\b");// 10 \b's
    printf("\b\b\b\b\b\b\b\b\b\b");// 10 \b's
    printf("\b\b\b\b\b\b\b\b\b\b");// 10 \b's   } 64\b's
    printf("\b\b\b\b\b\b\b\b\b\b");// 10 \b's
    printf("\b\b\b\b\b\b\b\b\b\b");// 10 \b's
    printf("\b\b\b\b");
  printf("%cr / x %c\n%c",186,186,186);
}
void matrix_additon()
{
     int r, c, mata[2][2], matb[2][2], matc[2][2];
     // matrix a:
     for (r = 0; r <= 1; r++)
     {
          for (c = 0; c <= 1; c++)
          {
               printf("\t%center the element for matix A: ",186);
               scanf("%d", &mata[r][c]);
          }
     }
     // matrix b:
     for (r = 0; r <= 1; r++)
     {
          for (c = 0; c <= 1; c++)
          {
               printf("\t%center the element for matix B: ",186);
               fflush(stdin);
               scanf("%d", &matb[r][c]);
          }
     }
     //MATRIX A OUT PUT
     printf("\t\tMATRIX[A]:\n");
     for (r = 0; r <= 1; r++)
     {
          for (c = 0; c <= 1; c++)
          {
               printf(" \t\t%3d", mata[r][c]);
          }
          printf("\n");
     }
     

     // matrix b out put
     printf("\t\tMATRIX[B]:\n");
     for (r = 0; r <= 1; r++)
     {
          for (c = 0; c <= 1; c++)
          {
               printf("\t\t%3d", matb[r][c]);
          }
          printf("\n");
     }
     printf("\t  summation of matrix a and matrix b:\n");
     // summation of matrix a and b
     for(r=0;r<=1;r++)
     {
          for(c=0;c<=1;c++)
          {
               matc[r][c]=mata[r][c]+matb[r][c];
          }
     }
     // matc out put
    // printf("%d+%d=%d",mata[r][c],matb[r][c],matc[r][r]);
     for(r=0;r<=1;r++)
     {
          for(c=0;c<=1;c++)
          {
             
               printf("\t\t%5d",matc[r][c]);
               
          }
          printf("\n");
     }
}
void endbody()
{
  // the end
    printf("\n%c%c%c%c%c%c",200,205,205,205,205,205);
    printf("%c%c%c%c%c",205,205,205,205,205);
    printf("%c%c%c%c%c",205,205,205,205,205);
    printf("%c%c%c%c%c",205,205,205,205,205);
    printf("%c%c%c%c%c",205,205,205,205,205);
    printf("%c%c%c%c%c",205,205,205,202,205);
    printf("%c%c%c%c%c%c",205,205,205,205,205,188);
}