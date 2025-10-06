#include <stdio.h>
#include <string.h>
int shape;
int area;

void introduction() {
    printf("===============AsciiArt==============\nWelcome to Ascii Art Generator\n1.Square\n2. Triangle\n3. Invert Triangle\n4. IsocelesTriangle\nType the index of the shape u want: ");
    scanf("%d", &shape);
    printf("Please enter the size u want (1-10): ");
    scanf("%d", &area);
}

void square(int size) {
    for (int i = 0; i < size; i++) {
        printf("\n* ");
        for (int i = 0; i < size; i++){
            printf("* ");
        }
    }
}

void triangle(int size) {
    for (int i = 0; i < size; i++) {
        printf("\n* ");
        int row = i;
        for (int i = 0; i < row; i++) {
            printf("* ");
        }
        
    }
    
} 

void invertTriangle(int size) {
    for (int i = 0; i < size; i++)
    {
        printf("\n* ");
        int row = i + 1;
        for (int i = 0; i < size - row; i++) {
            printf("* ");
        }
    }
}

void isocelesTriangle(int size) {
    for (int i = 0; i < size; i++) {
        char spacer[255] = "";
        char stars[255] = "";
        int row = i + 1;
        int spacerValue = size - row;
        int starsValue = 2 * row - 1;
        
        for (int i = 0; i < spacerValue; i++) {
            strcat(spacer, " ");
            
        }
        for (int i = 0; i < starsValue; i++) {
            strcat(stars, "*");
        }
        printf("%s%s%s \n", &spacer, &stars, &spacer);
    }

}

int main() {
    introduction();
    switch (shape) {
        case 1:
            square(area);
            break;
        case 2:
            triangle(area);
            break;
        case 3:
            invertTriangle(area);
            break;
        case 4:
            isocelesTriangle(area);
            break;
        default:
            break;
    }
    return 0;
}