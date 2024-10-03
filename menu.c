#include <stdio.h> 
#include "index_first_negative.h" 
#include "index_last_negative.h" 
#include "multi_between_negative.h" 
#include "multi_before_and_after_negative.h" 
 
void menu(int option, int array[], int size) { 
    switch (option) { 
        case 0: 
            printf("%d\n", index_first_negative(array, size)); 
            break; 
        case 1: 
            printf("%d\n", index_last_negative(array, size)); 
            break; 
        case 2: 
            printf("%d\n", multi_between_negative(array, size)); 
            break; 
        case 3: 
            printf("%d\n", multi_before_and_after_negative(array, size)); 
            break; 
        default: 
            printf("Данные некорректны\n"); 
    } 
} 
 
int main() { 
    int option; 
    int array[20]; 
    int size = 0; 
 
     
    scanf("%d", &option); 
    char ch; 
    while (scanf("%d%c", &array[size], &ch) == 2) { 
        size++; 
        if (ch == '\n') break; 
    } 
 
     
    menu(option, array, size); 
    return 0; 
}
