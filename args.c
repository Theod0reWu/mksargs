#include "args.h"

char ** parse_args( char * line ){
  //char ** argv = malloc(sizeof(char *) * 6);
  char * argv[6];
  int i = 0;
  while(line != NULL){
    printf("%s\n", line);
    *(argv+i) = strsep(&line, " ");
    printf("%s\n", argv[i]);
    ++i;
  }
  argv[5] = NULL;
  return argv;
}
