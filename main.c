#include "args.h"

int main(int argc, char const *argv[]) {
  char line[100] = "ls -l -a";
  char ** args = parse_args(line);
  char ** stuff;
  for (int i = 0; i<3;i++){
  	stuff[i] =  args[i];
  }
  free(args);
  execvp(stuff[0], stuff);
  printf("%s\n", strerror(errno));

  //char * test[3] = {"ls", "-a", "-l"};
  //execvp("ls",test);
  return 0;
}
