#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void sum();
void sub();
void mul();
void div();
void square();
//void log();
  int select;
int main()
    {
        do{


    printf("SELECT OPERATION\n1 FOR ADDITION\n2 FOR SUBSTRACTION\n3 FOR MULTIPLICATION \n4 FOR DIVISION\n5 FOR SQUARE\n6 FOR LOG\n 7 FOR EXIT");

    scanf("%d",&select);
    switch(select){
        case 1:sum();break;
        case 2:sub();break;
        case 3:mul();break;
        case 4:div();break;
        case 5:square();break;
//        case 6: log();break;
          case 7: exit(1);
        default:printf("SELECT VALID OPTION\n");
    }
        }while(select!=7);

           return 0;
           }
           void sum(){
            printf("ENTER OPERANDS\n");
            int a,b;
            scanf("%d %d",&a,&b);
            printf("%d\n",a+b);
           }
           void sub(){
               printf("ENTER OPERANDS\n");
            int a,b;
            scanf("%d %d",&a,&b);
            printf("%d\n",a-b);

                     }

                     void mul(){
                      printf("ENTER OPERANDS\n");
            int a,b;
            scanf("%d %d",&a,&b);
            printf("%d\n",a*b);

                     }
                     void div(){
                      printf("ENTER OPERANDS\n");
            int a,b;
            scanf("%d %d",&a,&b);
            printf("%d\n",a/b);


                     }
                     void square(){
                      printf("ENTER NUMBER TO GET SQUARE\n");
                     int n,m;
                     scanf("%d",&n);
                     m=pow(n,2);
                     printf("%d\n",m);

                     }






