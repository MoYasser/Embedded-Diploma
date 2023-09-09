//
// Created by MuDDii on 9/8/2023.
//
# include <stdio.h>
# include <string.h>
void main(){
    printf("#########################\n");
    printf("######  HW ARRAYS  ######\n");
    printf("#########################\n");
    printf("EX 1:\n");
    float matA[2][2];
    float matB[2][2];
    float matSum[2][2] = {{0, 0}, {0, 0}};
    printf("Please Enter Values for Matrix A:\n");
    int i,j;
    for(i =0; i<2;i++){
        for(j=0;j<2;j++){
            printf("Enter a%d%d:",i+1,j+1);
            fflush(stdin);
            fflush(stdout);
            scanf("%f",&matA[i][j]);
        }
    }
    printf("Please Enter Values for Matrix B:\n");
    for(i =0; i<2;i++){
        for(j=0;j<2;j++){
            printf("Enter b%d%d:",i+1,j+1);
            fflush(stdin);
            fflush(stdout);
            scanf("%f",&matB[i][j]);
        }
    }
    for(i =0; i<2;i++){
        for(j=0;j<2;j++){
            matSum[i][j] = matA[i][j] + matB[i][j];
        }
    }

    for(i =0;i<2;i++){
        for (j = 0; j < 2; j++) {
            fflush(stdin);
            fflush(stdout);
            printf("%0.1f\t",matSum[i][j]);
        }
        printf("\n");
    }
    printf("#########################\n");
    printf("EX 2:\n");
    float arrFloat[100];
    int size;
    float avg =0.0;
    printf("Enter Number of Elements:");
    fflush(stdin);
    fflush(stdout);
    scanf("%d",&size);
    for(i=0;i<size;i++){
        printf("Enter Number:");
        scanf("%f",&arrFloat[i]);
    }
    for(i=0;i<size;i++){
        avg+= arrFloat[i];
    }
    printf("Average = %0.2f\n",avg/size);
    printf("#########################\n");
    printf("EX 3:\n");
    int matOrig[5][5];
    int matTrans[5][5];
    int rowSize, colSize;
    printf("Please Enter Rows\n");
    fflush(stdin);
    fflush(stdout);
    scanf("%d",&rowSize);
    printf("Please Enter Columns\n");
    fflush(stdin);
    fflush(stdout);
    scanf("%d",&colSize);
    printf("Please Enter Values for Matrix:\n");
    for(i =0; i<rowSize;i++){
        for(j=0;j<colSize;j++){
            printf("Enter mat%d%d:",i+1,j+1);
            fflush(stdin);
            fflush(stdout);
            scanf("%d",&matOrig[i][j]);
        }
    }
    printf("Original Matrix\n");
    for(i =0;i<rowSize;i++){
        for (j = 0; j < colSize; j++) {
            fflush(stdin);
            fflush(stdout);
            printf("%d\t",matOrig[i][j]);
        }
        printf("\n");
    }
    for(i =0;i<rowSize;i++){
        for (j = 0; j < colSize; j++) {
            matTrans[j][i] = matOrig[i][j];
        }
    }
    printf("Transpose Matrix\n");
    for(i =0;i<colSize;i++){
        for (j = 0; j < rowSize; j++) {
            fflush(stdin);
            fflush(stdout);
            printf("%d\t",matTrans[i][j]);
        }
        printf("\n");
    }
    printf("#########################\n");
    printf("EX 4:\n");

    int arrInt[100];
    int inserted,location;
    printf("Please Enter number of elements:");
    fflush(stdin);
    fflush(stdout);
    scanf("%d",&size);
    printf("Please Enter numbers:");
    for(i =0;i<size;i++){
        scanf("%d",&arrInt[i]);
    }
    printf("Please Enter number to be inserted:");
    scanf("%d",&inserted);
    printf("Please Enter location");
    scanf("%d",&location);
    for( i = size-1; i>=location-1;i--){
        arrInt[i+1] = arrInt[i];
    }
    arrInt[location-1] = inserted;
    size++;
    printf("\n");
    for(i =0; i <size;i++){
        printf("%d ",arrInt[i]);
    }
    printf("\n");
    printf("#########################\n");
    printf("EX 5:\n");
    printf("Please Enter number of elements:");
    fflush(stdin);
    fflush(stdout);
    scanf("%d",&size);
    printf("Please Enter numbers:");
    for(i =0;i<size;i++){
        scanf("%d",&arrInt[i]);
    }
    printf("Please Enter number to be Searched:");
    scanf("%d",&inserted);

    for( i =0;i<size;i++){
        if(arrInt[i] == inserted){
            printf("Number found at location = %d\n",i+1);
            break;
        }
    }
    printf("#########################\n");
    printf("######  HW STRINGS  #####\n");
    printf("#########################\n");
    printf("EX 1:\n");
    char str[100],ch;
    int count = 0;
    printf("Enter a String:");
    fflush(stdin);
    fflush(stdout);
    gets(str);
    printf("Enter a Character:");
    fflush(stdin);
    fflush(stdout);
    scanf("%c",&ch);
    for(i =0; i< strlen(str);i++){
        if(str[i] == ch){
            count++;
        }
    }
    printf("Frequency of %c is: %d\n",ch,count);
    printf("#########################\n");
    printf("EX 2:\n");
    printf("Enter a String:");
    fflush(stdin);
    fflush(stdout);
    gets(str);
    i=0;
    while(str[i] != 0){
        i++;
    }
    printf("length of string %d\n",i);
    printf("#########################\n");
    printf("EX 3:\n");
    char strReversed[100];
    printf("Enter a String:");
    fflush(stdin);
    fflush(stdout);
    gets(str);
    for(i =0; i< strlen(str);i++){
        strReversed[strlen(str)-(i+1)] = str[i];
    }
    printf("Reversed String is: %s",strReversed);
}
