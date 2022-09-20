#include <stdio.h>

int wordTime(char a[],char b[]);
int readParagraph();
int readWord();

int main() {
    int count_word;
    char my_paragraph,my_word;
    my_paragraph = readParagraph();
    my_word = readWord();
    count_word = wordTime(my_paragraph,my_word);
    printf("\" %s \" word \" %d \" times in the paragraph: ",my_word,count_word);
    return 0;
}

int readParagraph() {
    char Paragraph[1000];
    printf("Give your paragraph: ");
    gets(Paragraph);
    return Paragraph;
}


int readWord() {
    char Word[30];
    printf("\n Enter the word  to be counted: ");
    gets(Word);
    return Word;
}

int wordTime(char a[],char b[]) {
    int i,j=0,x=0;
    for ( i = 0; a[i] != '\0'; i++) {
        if (a[i]== b[i]) {
            for (j=i+1; b[j]!='\0'; j++) {
                if (a[j]!=b[j]) {
                    break;
                }
            }
            x++;
        }
    }
}
