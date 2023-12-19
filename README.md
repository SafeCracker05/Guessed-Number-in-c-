# Guessed-Number-in-c

Certainly! Here's a more comprehensive explanation with clear titles:

### 1. **Header and Function Declarations**
```c
#include <stdio.h>
#include <stdlib.h>

// Function declarations
void Card1();
void Card2();
void Card3();
void Card4();
void Card5();
void Card6();
```
This section includes the necessary header files and declares functions for displaying each of the six cards.

### 2. **Arrays for Cards**
```c
int card1[][6] = { /* ... */ };
int card2[][6] = { /* ... */ };
// ... (similar arrays for cards 3 to 6)
```
Global arrays are defined to represent the numbers on each of the six cards.

### 3. **Arrays for Binary Input and Representation**
```c
int binary_arr[] = {};
int rep_arr[6] = {4, 8, 16, 2, 1, 32};
```
These arrays are used to store binary input from the user and the corresponding decimal representation.

### 4. **Main Function**
```c
int main() {
    // User input and initialization
    // ...

    // Loop through each card
    while (i < 7) {
        // Display card, prompt user, and store input
        // ...

        i += 1;  // Move to the next card
    }

    // Calculate the guessed number based on user input
    // ...

    // Display the guessed number
    // ...

    return 0;
}
```
The main function orchestrates the flow of the game, prompting the user for input on each card and calculating the guessed number at the end.

### 5. **Card Display Functions**
```c
void Card1() {
    // Display the content of card 1
    // ...
}
// ... (similar functions for cards 2 to 6)
```
These functions are responsible for displaying the content of each card in a formatted manner.

### 6. **Guess Calculation**
```c
int guessed_number = 0;
for (int j = 0; j < 6; j++) {
    int x = binary_arr[j];
    if (x == 1) {
        guessed_number += rep_arr[j];
    }
}
```
This section calculates the guessed number based on the user's binary input and the predefined decimal representation array.

### 7. **Result Display**
```c
printf("Your number is: %d", guessed_number);
```
The final result, the guessed number, is displayed to the user.

This code structure makes it clear and organized, enhancing readability and maintainability.
