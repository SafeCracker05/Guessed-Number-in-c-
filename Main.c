#include <stdio.h>
#include<stdlib.h>

// definition of all the functions
void Card1();
void Card2();
void Card3();
void Card4();
void Card5();
void Card6();

int card1[][6] = {
        {4, 13, 22, 31, 44, 53},
        {5, 14, 23, 36, 45, 54},
        {6, 15, 28, 37, 46, 55},
        {7, 20, 29, 38, 47, 60},
        {12, 21, 30, 39, 52}};

int card2[][6] = {
        {8, 13, 26, 31, 44, 57},
        {9, 14, 27, 40, 45, 58},
        {10, 15, 28, 41, 46, 59},
        {11, 24, 29, 42, 47, 60},
        {12, 25, 30, 43, 56}};

int card3[][6] = {
        {16, 21, 26, 31, 52, 57},
        {17, 22, 27, 48, 53, 58},
        {18, 23, 28, 49, 54, 59},
        {19, 24, 29, 50, 55, 60},
        {20, 25, 30, 51, 56}};
int card4[][6] = {
        {2, 11, 22, 31, 42, 51},
        {3, 14, 23, 34, 43, 54},
        {6, 15, 26, 35, 46, 55},
        {7, 18, 27, 38, 47, 58},
        {10, 19, 30, 39, 50, 59}};
int card5[][6] = {
        {1, 11, 21, 31, 41, 51},
        {3, 13, 23, 33, 43, 53},
        {5, 15, 25, 35, 45, 55},
        {7, 17, 27, 37, 47, 57},
        {9, 19, 29, 39, 49, 59}};
int card6[][6] = {
        {32, 37, 42, 47, 52, 57},
        {33, 38, 43, 48, 53, 58},
        {34, 39, 44, 49, 54, 59},
        {35, 40, 45, 50, 55, 60},
        {36, 41, 46, 51, 56}};
int binary_arr[] = {};
int rep_arr[6] = {4,8,16,2,1,32};

int main() {

     // Demander à l'utilisateur d'entrer un nombre
    int userInput;
    int i = 0; 
    printf("Guess Number game\n\n");
    printf("Choose a number between 1 and 60, keep it in your mind.\n\n Cards will be drawn, indicate 1 if your number is present on the card and 0 if it is not.\n\n In the end, the counter will determine the number you are thinking of: \n\n");
    printf("Enter to start the game : ");
    scanf("%d", &userInput);
    while(i < 7)
    {

       // Vérifier si l'utilisateur a entré 1
       if (i == 1) {
          // Effacer le message et afficher une autre phrase
          printf("\033[H\033[J");  // Cette ligne efface le terminal (peut ne pas fonctionner sur tous les systèmes)
          Card1();
          printf("Enter 1 or 0 if your number is on the card : ");
          scanf("%d", &userInput);
          binary_arr[i -1] = userInput;
        }
               // Vérifier si l'utilisateur a entré 1
       if (i == 2) {
          // Effacer le message et afficher une autre phrase
          printf("\033[H\033[J");  // Cette ligne efface le terminal (peut ne pas fonctionner sur tous les systèmes)
          Card2();
          printf("Enter 1 or 0 if your number is on the card : ");
          scanf("%d", &userInput);
          binary_arr[i -1] = userInput;
        }
        if (i == 3) {
          // Effacer le message et afficher une autre phrase
          printf("\033[H\033[J");  // Cette ligne efface le terminal (peut ne pas fonctionner sur tous les systèmes)
          Card3();
          printf("Enter 1 or 0 if your number is on the card : ");
          scanf("%d", &userInput);
          binary_arr[i -1] = userInput;
        }
        if (i == 4) {
          // Effacer le message et afficher une autre phrase
          printf("\033[H\033[J");  // Cette ligne efface le terminal (peut ne pas fonctionner sur tous les systèmes)
          Card4();
          printf("Enter 1 or 0 if your number is on the card : ");
          scanf("%d", &userInput);
          binary_arr[i -1] = userInput;
        }
        if (i == 5) {
          // Effacer le message et afficher une autre phrase
          printf("\033[H\033[J");  // Cette ligne efface le terminal (peut ne pas fonctionner sur tous les systèmes)
          Card5();
          printf("Enter 1 or 0 if your number is on the card : ");
          scanf("%d", &userInput);
          binary_arr[i -1] = userInput;
        }
        if (i == 6) {
          // Effacer le message et afficher une autre phrase
          printf("\033[H\033[J");  // Cette ligne efface le terminal (peut ne pas fonctionner sur tous les systèmes)
          Card6();
          printf("Enter 1 or 0 if your number is on the card : ");
          scanf("%d", &userInput);
          binary_arr[i -1] = userInput;
        }
        i += 1;
    }
    int guessed_number = 0;
    for(int j = 0; j < 6; j++)
    {
        int x = binary_arr[j];
        if (x == 1)
        {
            guessed_number += rep_arr[j];

        }

    }

    printf("your number is :%d", guessed_number);
    

    return 0;
}


void Card1() {
    int i, j;

    // Affichage du dessus du cadre
    printf("+----------------------+\n");

    for (i = 0; i < 5; i++) {
        printf("| ");
        for (j = 0; j < 6; j++) {
            printf("%2d ", card1[i][j]);
        }
        printf("|\n");
    }

    // Affichage du dessous du cadre
    printf("+----------------------+\n");
}
void Card2() {
    int i, j;

    // Affichage du dessus du cadre
    printf("+----------------------+\n");

    for (i = 0; i < 5; i++) {
        printf("| ");
        for (j = 0; j < 6; j++) {
            printf("%2d ", card2[i][j]);
        }
        printf("|\n");
    }

    // Affichage du dessous du cadre
    printf("+----------------------+\n");
}
void Card3() {
    int i, j;

    // Affichage du dessus du cadre
    printf("+----------------------+\n");

    for (i = 0; i < 5; i++) {
        printf("| ");
        for (j = 0; j < 6; j++) {
            printf("%2d ", card3[i][j]);
        }
        printf("|\n");
    }

    // Affichage du dessous du cadre
    printf("+----------------------+\n");
}
void Card4() {
    int i, j;

    // Affichage du dessus du cadre
    printf("+----------------------+\n");

    for (i = 0; i < 5; i++) {
        printf("| ");
        for (j = 0; j < 6; j++) {
            printf("%2d ", card4[i][j]);
        }
        printf("|\n");
    }

    // Affichage du dessous du cadre
    printf("+----------------------+\n");
}
void Card5() {
    int i, j;

    // Affichage du dessus du cadre
    printf("+----------------------+\n");

    for (i = 0; i < 5; i++) {
        printf("| ");
        for (j = 0; j < 6; j++) {
            printf("%2d ", card5[i][j]);
        }
        printf("|\n");
    }

    // Affichage du dessous du cadre
    printf("+----------------------+\n");
}
void Card6() {
    int i, j;

    // Affichage du dessus du cadre
    printf("+----------------------+\n");

    for (i = 0; i < 5; i++) {
        printf("| ");
        for (j = 0; j < 6; j++) {
            printf("%2d ", card6[i][j]);
        }
        printf("|\n");
    }

    // Affichage du dessous du cadre
    printf("+----------------------+\n");
}
