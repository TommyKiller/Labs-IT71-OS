#include <stdio.h>

int read(const char* input_file, const char* output_file) {
   FILE *fp;
   FILE *f;

   fp = fopen(output_file, "w+");
   f = fopen(input_file, "r");
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
