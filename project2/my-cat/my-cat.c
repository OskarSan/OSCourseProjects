/*
    AI USE STATEMENT
    Lassi Tuominen
    001119893

    Github Copilot was used for fixing and verifying 
    the syntax in the code.

    Other AI tools were not used.

*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        //No files specified so exit with status code 0
        return 0;
    }

    for (int i = 1; i < argc; i++) {
        FILE *file = fopen(argv[i], "r");
        if (file == NULL) {
            //Error opening file print message and exit with status code 1
            printf("my-cat: cannot open file\n");
            return 1;
        }

        char buffer[1024];
        while (fgets(buffer, sizeof(buffer), file) != NULL) {
            printf("%s", buffer);
        }
        fclose(file);
    }
    
    return 0;//All files processed successfully -> exit with status code 0
}
