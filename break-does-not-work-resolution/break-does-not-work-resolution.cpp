// @author: yinyang_warrior
// @objective: stackoverflow question resolved
// @reference: https://stackoverflow.com/questions/77345395/break-does-not-wortk


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char words[1000][100];
    int i = 0;

    // Read words until Enter key is pressed
    while (1) {
         if (fgets(words[i], sizeof words[i], stdin) == NULL || words[i][0] == '\n') {
          break;
        }
    }

   for (int s = 0; s < i; s++) {
        int length = strlen(words[s]);

        // Reverse the word
        for (int j = 0; j < length / 2; j++) {
            char temp = words[s][j];
            words[s][j] = words[s][length - 1 - j];
            words[s][length - 1 - j] = temp;
        }

        // Print the reversed word
        printf("%s\n", words[s]);
    }

    return 0;
}
