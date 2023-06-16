#include<stdio.h>

void add() 
{
    int n1,n2;
    printf("Enter num a:");
    scanf("%d",&n1);
    printf("Enter num b:");
    scanf("%d",&n2);
    printf("Sum:%d\n",n1+n2);
}

void sub() 
 {
    int n1,n2;
    printf("Enter num:");
    scanf("%d", &n1);
    printf("Enter num b:");
    scanf("%d",&n2);
    printf("Sub:%.2ld\n",n1-n2);
}

void mul() 
 {
    int n1,n2;
    printf("Enter num:");
    scanf("%d", &n1);
    printf("Enter num b:");
    scanf("%d",&n2);
    printf("mul:%.2ld\n",n1*n2);
}

void div() 
 {
    int n1,n2;
    printf("Enter num:");
    scanf("%d", &n1);
    printf("Enter num b:");
    scanf("%d",&n2);
    printf("div:%.2ld\n",n1/n2);
}

void mol() 
 {
    int n1,n2;
    printf("Enter num:");
    scanf("%d", &n1);
    printf("Enter num b:");
    scanf("%d",&n2);
    printf("mol:%.2ld\n",n1%n2);
}
void cal() {
    int choice;

    printf("Calculator\n");
    printf("1. add\n");
    printf("2. sub\n");
    printf("3. mul\n");
    printf("4. div\n");
    printf("5. mol\n");
    printf("6. Exit\n");
    printf("Enter your choice (1-6): ");
    scanf("%d", &choice);
    
 switch (choice) {
        case 1:
            add();
            break;
        case 2:
            sub();
            break;
        case 3:
            mul();
            break;
        case 4:
            div();
            break;
        case 5:
            mol();
            break;
        case 6:
            printf("Exiting the calculator...\n");
            return;
        default:
            printf("Invalid choice. Please select a number from 1 to 6.\n");
    }

    cal();
}

int main() {
    cal();


}
