#include <stdio.h>

int file_test() {
   FILE *fp;
   FILE *f;

   fp = fopen("test.txt", "w+");
   f = fopen("group.txt","r");
   int counter = 1;
   char val[80];
   while(!feof(f))
   {
    if(fscanf(f, "%s\n", val)){
          for(int i = 0; i < counter; i++){
        fprintf(fp,"%s\n",val);
      }
      counter++;
      }
   }
   fclose(fp);
   fclose(f);
  
}
