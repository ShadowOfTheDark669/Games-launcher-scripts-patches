#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>

 int main(int argc, char *argv[]) {

   int i = 0;
   while (*(argv[1] + 6 + i) != '.')
            i++ ;
   printf("%d\n", i );
   
   

   char filename[i+1];
   i = 0;   
   while (*(argv[1] + 6 + i) != '.'){
            filename[i] = *(argv[1] + 6 + i);
            i++ ;
       }

   filename[i] = '\0';
   printf("%s\n", filename);

   char pattern1[] = "io";
   char pattern2[] = "o5";
   char pattern3[] = "ts";

   
   printf("%c\n", filename[0]);
   printf("%c\n", pattern3[0]);
   printf("%c\n", filename[i-1]);
   printf("%c\n", pattern3[1]);
   printf("%d\n", i );

   struct _STARTUPINFOA si = {0};
   struct _PROCESS_INFORMATION pi = {0};

   
   if (filename[0] == pattern1[0] && filename[i-1] == pattern1[1]){
  
       char cmd1[] = ".\\video\\mpv\\mpv.exe --fullscreen --osd-level=0 --no-osc --no-input-default-bindings --input-conf=video\\mpv\\conf\\input.conf --video-sync=display-resample --cursor-autohide=always video\\intro.mpg --audio-file=video\\intro.mp2";
       printf("%s", cmd1);  
     
       CreateProcessA(
       NULL,
       cmd1, //cmdline
       NULL, //pattr
       NULL, //thattr
       FALSE, //inherithandles
       CREATE_NO_WINDOW,
       NULL,
       NULL,
       &si,
       &pi
  	
       );

       WaitForSingleObject(
       pi.hProcess,
       INFINITE
       );

       CloseHandle(pi.hProcess);

     } else if (filename[0] == pattern2[0] && filename[i-1] == pattern2[1]){
  
       char cmd2[] = ".\\video\\mpv\\mpv.exe --fullscreen --osd-level=0 --no-osc --no-input-default-bindings --input-conf=video\\mpv\\conf\\input.conf --video-sync=display-resample --cursor-autohide=always video\\outro5.mpg --audio-file=video\\outro5.mp2";
       printf("%s", cmd2);  
       
       CreateProcessA(
       NULL,
       cmd2, //cmdline
       NULL, //pattr
       NULL, //thattr
       FALSE, //inherithandles
       CREATE_NO_WINDOW,
       NULL,
       NULL,
       &si,
       &pi
  	
       );

       WaitForSingleObject(
       pi.hProcess,
       INFINITE
       );

       CloseHandle(pi.hProcess);

     } else if (filename[0] == pattern3[0] && filename[i-1] == pattern3[1]){
  
       char cmd3[] = ".\\video\\mpv\\mpv.exe --fullscreen --osd-level=0 --no-osc --no-input-default-bindings --input-conf=video\\mpv\\conf\\input.conf --video-sync=display-resample --cursor-autohide=always video\\trans.mpg --audio-file=video\\trans.mp2";
       printf("%s", cmd3);  
       
              
       CreateProcessA(
       NULL,
       cmd3, //cmdline
       NULL, //pattr
       NULL, //thattr
       FALSE, //inherithandles
       CREATE_NO_WINDOW,
       NULL,
       NULL,
       &si,
       &pi
  	
       );

       WaitForSingleObject(
       pi.hProcess,
       INFINITE
       );

       CloseHandle(pi.hProcess);

     } else {
     
       char cmd[200];
       snprintf(cmd, 200, ".\\video\\mpv\\mpv.exe --fullscreen --osd-level=0 --no-osc --no-input-default-bindings --input-conf=video\\mpv\\conf\\input.conf --video-sync=display-resample --cursor-autohide=always \"%s\"", argv[1]);
       printf("%s", cmd);  
   
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

       WaitForSingleObject(
       pi.hProcess,
       INFINITE
       );

       CloseHandle(pi.hProcess);
  




     }


   
}



