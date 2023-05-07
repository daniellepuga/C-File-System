// this contains function to open and close to file that holds the file system image
#include <fcntl.h>
#include <unistd.h>

// global variables
int image_fd;

// open the image file of the given name, create it if it doesn't exist, and truncate
// to 0 size if truncate is true. use open() to create the file
int image_open(char *filename, int truncate){

}

// close the image file. user close() to close the file
int image_close(void){

}