// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
int inx=0;
struct data{
    int id;
    char name[30];
};

//define
struct data data[100];
//function list
void addData();
void displayData();

void addData(){

    int sId;
    char sName[30];
    printf("\nInput Student Information:\n");
    printf("---------------------------------\n");
    printf("\nStudent Id: ");
    scanf("%d",&sId);
    getchar();
    printf("\nStudent Name: ");
    fgets(sName,sizeof(sName), stdin);


    data[inx].id=sId;
   // data[inx].name=sName;
    strcpy(data[inx].name, sName);
    inx++;
}

void displayData(){
      printf("\nStudent Information:\n");
      printf("-----------------------------\n");
      for(int i=0;i<inx;i++){
          printf("ID: %d\n",data[i].id);
          printf("ID: %s\n",data[i].name);
      }
}
int main() {
    int choose;
    while(1){
         printf("\nMENU:\n");
        printf("1. Add data. \n2. Display data. \n3. Exit.\n");
        printf("Choose option......:");
        scanf("%d",&choose);

        switch(choose){
            case 1:
               addData();
               break;
             case 2:
               displayData();
               break;
             case 3:
               return 0;
               break;
            default:
            printf("Error option.\n");
        }
    }

    return 0;
}
