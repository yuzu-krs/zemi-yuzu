#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    if (argc != 2) {
        fprintf(stderr, "使い方: %s <入力ファイル名> \n", argv[0]);
        exit(1);
    }

    FILE* inputFile = fopen(argv[1], "r");
    if (inputFile == NULL) {
        fprintf(stderr, "入力ファイル %s を開く際にエラーが発生しました．\n",
                argv[1]);
        exit(1);
    }

    int c;
    char inputData[1024];
    int i = 0;
    while ((c = fgetc(inputFile)) != EOF) {
        inputData[i] = tolower(c);
        i++;
    }

    i = 0;
    int j = 1;
    printf("%d:", j);
    while (inputData[i] != '\0') {
        // 改行があった場合+1する
        if (inputData[i] == '\n') {
            j++;
        }
        printf("%c", inputData[i]);
        i++;
    }

    printf("aa");
    printf("aa");
    printf("aa");
    printf("aa");
    printf("aa");
    printf("aa");
    printf("aa");
    printf("aa");
    printf("aa");
    printf("aa");
    printf("aa");
    printf("aa");
    printf("aa");
    printf("aa");
    printf("aa");
    printf("aa");

    fclose(inputFile);

    return 0;
}
