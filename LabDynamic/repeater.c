#include <stdio.h>
#include <unistd.h>

void repeat(const char* input_file){
    FILE *f;

    f = fopen(input_file, "r");

    char val[80];
    while(1){
        fseek(f, 0, SEEK_SET);
        while(fscanf(f,"%s/n",val) == 1)
        {
            sleep(1);
            printf("%s\n",val);
        }
    }
    fclose(f);
}
