#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>

 int main(int argc, char *argv[]) {

  char cmd[200];
  snprintf(cmd, 200, ".\\video\\mpv\\mpv.exe --fullscreen --osd-level=0 --no-osc --no-input-default-bindings --input-conf=video\\mpv\\conf\\input.conf --video-sync=display-resample \"%s\"", argv[1]);
  

  struct _STARTUPINFOA si = {0};
  struct _PROCESS_INFORMATION pi = {0};

  CreateProcessA(
  NULL,
  cmd, //cmdline
  NULL, //pattr
  NULL, //thattr
  FALSE, //inherithandles
  CREATE_NO_WINDOW,
  NULL,
  NULL,
  &si,
  &pi
  	
  );

 	
 }
