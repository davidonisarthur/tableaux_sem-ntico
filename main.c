#include <stdio.h>
#include <string.h>

int hasContradiction(char literals[][10], int count) {
    for (int i = 0; i < count; i++) {
        for (int j = 0; j < count; j++) {
            if (literals[i][0] == '!' && literals[i][1] == literals[j][0]) {
                return 1;
            }
            if (literals[j][0] == '!' && literals[j][1] == literals[i][0]) {
                return 1;
            }
        }
    }
    return 0;
}

void tableau_AND(char *expr) {
    char literals[10][10];
    int count = 0;


    char *token = strtok(expr, "&");

    while (token != NULL) {
        strcpy(literals[count++], token);
        token = strtok(NULL, "&");
    }

    if (hasContradiction(literals, count)) {
        printf("Ramo fechado (contradição)\n");
    } else {
        printf("Ramo aberto (satisfatível)\n");
    }
}

void tableau_OR(char *expr) {
    
    char *token = strtok(expr, "|");

    while (token != NULL) {
        char literals[1][10];
        strcpy(literals[0], token);

        if (hasContradiction(literals, 1)) {
            printf("Ramo fechado: %s\n", token);
        } else {
            printf("Ramo aberto: %s\n", token);
        }

        token = strtok(NULL, "|");
    }
}

int main() {
    char expr1[] = "A&B";
    char expr2[] = "A|!A";

    printf("Testando AND:\n");
    tableau_AND(expr1);

    printf("\nTestando OR:\n");
    tableau_OR(expr2);

    return 0;
}
