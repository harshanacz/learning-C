#include <stdio.h>
void descArray();
int main() {
    descArray();
    return 0;
}

void descArray (){
        printf("Your list element count: ");
        int listSize;
        scanf("%d", &listSize);

        // Check the entered value for correctness
        if (listSize < 1) {
            printf("Invalid number!\n");
            return;
        }

        printf("Ready to Enter int values for adding to list\n");
        printf("----------------------------------------------\n");
        int theArray[listSize];
        int newArray[listSize];

        for (int i = 0; i < listSize; i++) {
            printf("Value for %d element:  ", i + 1);
            scanf("%d", &theArray[i]);
        }
        printf("Got all values\n");
        printf("----------------------------------------------\n");
        for (int j = listSize; j > 0; j--) {
            newArray[j - 1] = theArray[listSize - j];
            // new array value  : the array value
            // 5-1 =4           : 5-5=0

        }

        for (int i = 0; i < listSize; ++i) {
            printf("%d \t", newArray[i]);
        }

};