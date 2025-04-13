#include <stdio.h>

int main() {
    char creature[20];

    printf("Enter the creature you encounter: ");
    scanf("%s", creature);

    if (strcmp(creature, "dragon") == 0) {
        printf("Run away immediately!\n");
    } else if (strcmp(creature, "giant") == 0) {
        printf("Try to hide.\n");
    } else if (strcmp(creature, "wolf") == 0) {
        printf("Stand still and hope not to be noticed.\n");
    } else if (strcmp(creature, "deer") == 0) {
        printf("Continue on your path.\n");
    } else {
        printf("Keep moving cautiously.\n");
    }

    return 0;
}
