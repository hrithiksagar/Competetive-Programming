
#include <stdio.h>
#include <string.h>
int main()
{
    FILE *fp;
    char ch;
    int count = 0;
    fp = fopen("demo.txt", "r");
    while((ch = getc(fp)) != EOF) {
    if(ch == 'o') {
      printf("%c found at position %d.\n", ch, count);
    }
    count++;
  }  
fclose(fp);
    return 0;
}