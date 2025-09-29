#include <stdio.h>

//bool
//float
//int
//char
//char n[] (string)
//int n[] (array of number)
//void

float calculate(int a,char op , int b) {

    
    // float sum;
    // switch (op)
    // {
    // case '-':
    //     sum = a - b;
    //     break;
    // case '+':
    //     sum = a + b;
    //     break;
    // case '/':
    //     sum = a / b;
    //     break;
    // case '*':
    //     sum = a * b;
    //     break;
    // default:
    //     printf("it seems the operator is not on our database");
    // }
    // return sum;
    // ineffective way

    switch (op){
        case '-': return a - b;
        case '+': return a + b;
        case '*': return a * b;
        case '/': return (float)a / b;
        default: break;
    }
    return 0;
};

void introduction() {
    char hello[] = "hello";
    printf("%s whats your name? ", hello);
    char name[50];
    scanf("%49s", name);
    printf("So your name is %s, you seem nice.\n", name); 
};

int main() {
    int choice;
    printf("What would u like to do? \n1. introduction\n2. calculate\n: ");
    scanf("%i", &choice);
    


    if (choice == 1)
    {
        introduction();
    } else {
        int num1, num2;
        char operator;
        printf("use format like 'num1' 'operator' 'num2': ");
        scanf("%d %c %d", &num1, &operator, &num2);
        printf("%f", calculate(num1, operator, num2));
    }

    return 0;
}






