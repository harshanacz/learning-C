#include <stdio.h>

int getAvar();

int main() {
   getAvar();
    return 0;
}

int getAvar(){
    int listCount;
    printf("How many items would you like to add to the list?");
    scanf("%d",&listCount);
    if(listCount >0){
        int theList[listCount];
        printf("--------------------------------------------------\n");
        printf("Ready for Enter each each elements!\n");
        for(int j=0; j<listCount; j++){
            printf("Enter value for %d element: ",j+1);
            scanf("%d", &theList[j]);
        }

        //lets print list------------------
        int total;
        for(int i=0; i<listCount; i++){
            total += theList[i];
        }
        int avg =total/listCount;
        printf("You're done. Avarage is %d \n",avg);
    }else{
        printf("Invalid input");
    }
    return 0;
}