#include "args.h"

char ** parse_args( char * line ){
  char ** argv = calloc(sizeof(char *) , 6);
  char * frag = line;
  int i = 0;
  while(frag!= NULL){
    //printf("frag: |%s|\n", frag);
    *(argv+i) = strsep(&frag, " ");
    //printf("last arg: |%s|\n", argv[i]);
    ++i;
  }
  argv[i] = NULL;
  return argv;
}
