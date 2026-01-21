#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    char cmd[200]; 
    snprintf(cmd, 200, ".\\video\\mpv\\mpv.exe --fullscreen --osd-level=0 --no-osc --no-input-default-bindings --input-conf=video\\mpv\\conf\\input.conf --video-sync=display-resample \"%s\"", argv[1]);
    system(cmd);

}   
