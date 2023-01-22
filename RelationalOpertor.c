#include <stdio.h>

void relationalOperator(){
    
    int i, T, numberOne, NumberTwo;
    
    scanf("%d", &T);
    for (i = 0; i < T; i++) {
        int absNumberOne = numberOne;
        int absNumberTwo = NumberTwo;
        
        scanf("%d %d", &absNumberOne, &absNumberTwo);
            if (absNumberOne < absNumberTwo) {
                printf("<\n");
            } else if (absNumberOne > absNumberTwo) {
                printf(">\n");
            } else printf("=\n");
        }
}

int main(){

    relationalOperator();

    return 0;
}