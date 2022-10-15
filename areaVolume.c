#include<stdio.h>
#include<math.h>

// int = 4 ,567 ,1000 "%d"
// float = 7.5 , 4.578 "%f"
// char ='@','a','4' "%c"

/*
    +,-,*,/
    modulo operator %.
    %2 - 0,1
    %3 - 0,1,2
    %4 - 0,1,2,3
    %5 - 0,1,2,3,4
    %6 - 0,1,2,3,4,5
    %7 - 0,1,2,3,4,5,6
    %8 - 0,1,2,3,4,5,6,7
    %9 - 0,1,2,3,4,5,6,7,8
    %10 - 0,1,2,3,4,5,6,7,8,9
    %11 - 0,1,2,3,4,5,6,7,8,9,10


    %2              %3              %4              %6
    3 = 2*1 + 1     3 = 3*1 + 0     3 = 4*0 + 3     
    4 = 2*2 + 0     4 = 3*1 + 1     4 = 4*1 + 0
    5 = 2*2 + 1     5 = 3*1 + 2     5 = 4*1 + 1
    6 = 2*3 + 0     6 = 3*2 + 0     6 = 4*1 + 2
                                    7 = 4*1 + 3
*/

void Ilyas(){
    int l,b,h;
        // this is LSA formula
        printf("Enter the values of l b h\n :");
        scanf("%d%d%d",&l,&b,&h);
        int LSA = 2*h*(l+h);
        //this is TSA formula
        int TSA = 2*((l*b)+(b*h)+(l*h));
        //This is volume formula 
        int vol = l*b*h;
        printf("LSA = %d \n",LSA);
        printf("TSA = %d \n",TSA);
        printf("Volume = %d\n",vol);
        //this is a comment
}

void zakariya(){
    printf("Ilyas = \n");
    Ilyas();
}
void add(){
    int a,b,s;
    printf("Enter the value of a & b");
    scanf("%d%d",&a,&b);
    s = a%b;
    printf("reminder = %d",s);
}

int main(){
    printf("2^3 = %f ",pow(2.0,3.0));
    printf("zakariya!!\n");
    // zakariya();
    add();
    return 0;
}