#include <stdio.h>
#include <string.h>

struct book {
    char name[100]; 
    int size;
};

struct book autobiography[2];
struct book novels[2];
struct book action[2];

int main() {
    strcpy(autobiography[0].name, "Wings of Fire");
    autobiography[0].size = 300;
    strcpy(autobiography[1].name, "Mein Kampf");
    autobiography[1].size = 320;    

    strcpy(novels[0].name, "Around the world in 80 days");
    novels[0].size = 1000;
    strcpy(novels[1].name, "Study in Scarlett");
    novels[1].size = 256;

    strcpy(action[0].name, "Lord of the Rings");
    action[0].size = 1250;
    strcpy(action[1].name, "To Kill a mockingbird");
    action[1].size = 654;


    printf("MAIN MENU:\n");
    printf("1. Autobiography\n2. Novels\n3. Action\n\nEnter the option:");
    int option;
    scanf("%d", &option);
    system("clear");
    printf("SubMenu\n\nSrNo.\tName\tSize\n\n");

    switch (option) {
    case 1:
        for (int i = 0; i < 2; i++) {
            printf("%d\t%s\t%d\n", i+1, autobiography[i].name, autobiography[i].size);
        }
        break;
    case 2:
        for (int i = 0; i < 2; i++) {
            printf("%d\t%s\t%d\n", i+1, novels[i].name, novels[i].size);
        }
        break;
    case 3:
        for (int i = 0; i < 2; i++) {
            printf("%d\t%s\t%d\n", i+1, action[i].name, action[i].size);
        }
        break;
    default:
        system("clear");
        break;
    }

    return 0;
}
