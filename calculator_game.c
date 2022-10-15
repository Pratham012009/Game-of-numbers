#include<stdio.h>
void main()
{
    int num;
    
    printf("1. Addition\n");
    printf("2. Substraction\n");
    printf("3. Multiplication\n"); 
    printf("4. Square\n");
    
    printf("\nEnter 1 To Play Addition Game\n");
    printf("Enter 2 To play Substraction Game\n");
    printf("Enter 3 To Play Multiplication Game\n");
    printf("Enter 4 To Play Square Game\n");
    
    printf("\nEnter Your Choice:  ");
    scanf("%d",&num);
    
    switch(num){
    case 1:  for( int i=1,a=1,sum;i<=50;i++,a++){
                printf("%d + %d ",i,a);
                printf("Enter The Sum :  ");
                scanf("%d",&sum);
                 if(sum!=a+i)
            {
                printf("Your Answer Is Wrong");
                break;
            }
                else 
                    printf("CORRECT\n");
            }
                break;
           
    case 2:  for(int b=2,c=1,sub;c<=50;b++,c--){
                printf("%d - (%d) ",b,c);
                printf("Enter The Difference :   ");
                scanf("%d",&sub);
                 if(sub!=b-c)
            {
                printf("Your Answer Is Wrong");
                break;
            }
                else 
                    printf("CORRECT\n");
            }
            break;
            
    case 3: for(int d=1,e=1,mul;e<=50;e++,d++){
                printf("%d × %d ",d,e);
                printf("Enter The Product :   ");
                scanf("%d",&mul);
               if(mul!=d*e)
            {
                printf("Your Answer Is Wrong");
                break;
            }
                else 
                    printf("CORRECT\n");
            }  break;
            
            
    case 4:  for(int j=1,sq;j<=50;j++){
                printf("%d ",j);
                printf("Square Is :  ");
                scanf("%d",&sq);
               if(sq!=j*j)
            {
                printf("Your Answer Is Wrong");
                break;
            }
                else 
                    printf("CORRECT\n");
           } break;
            
            
            default:
                    printf("Invalid Choice\n");
            
         }
        }