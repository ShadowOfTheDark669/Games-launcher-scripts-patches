# Games-launcher-scripts-patches
## A set of small and simple scripts/patches for games on Windows and/OR Linux (WINE) that add QOL improvements/additions

# Credits
## DxWrapper: https://github.com/elishacloud/dxwrapper
## Resource Hacker: https://www.angusj.com/resourcehacker/

# Technical Details
 The source code for the binaries is available as `.c` files as all the patches/wrappers are coded in C. 
 
 All binaries are compiled using the following command and parameters in a Linux environment: 
 `i686-w64-mingw32-gcc LaunchWingCommander.c -o "Launch Wing Commander.exe" -luser32 -lgdi32` 
 
 Icons or `.ico` files are embedded in the `.exe` files using Resource Hacker.
