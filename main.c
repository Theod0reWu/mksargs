#include "args.h"

int main(int argc, char const *argv[]) {
  char ** args = parse_args("ls -l -a");
  execvp(args[0], args);
  return 0;
}
