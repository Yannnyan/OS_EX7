
#include <stdlib.h>
#include <errno.h>
#include <sys/mman.h>
#include "myDIR.hpp"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include "myStructs.hpp"

#define DEF_FS_SIZE 10 * (1 << 20)
#define INODE_SIZE(size) (ssize_t)(size/10)


/**
 * @brief writes into a new file and ,
 * Then creates a division into inodes and file data ,
 * Then creates a root directory of the file system.
 * 
 * @param size 
 * @param fd 
 */
void create_fs(ssize_t size)
{
    FILE * open_file = fopen("file_system", "r+");
    if(open_file == NULL)
    {
        perror("error occurred when creating or opening the file.");
        exit(1);
    }
    fs fs_division;
    fs_division.inode_offset = 0;
    fs_division.files_offset = INODE_SIZE(size) + 1;
    fs_division.file_system_size = size;
    int written_bytes = fwrite(&fs_division, sizeof(fs), 1, open_file);
    if(written_bytes <= 0 )
    {
        perror("error occurred when creating the division of the file system.");
        exit(1);
    }
    // write out the inode array
    
    // write out the first directory in the file system named root
    myDIR rootDIR((char*)"root", nullptr, nullptr);
    fseek(open_file, fs_division.files_offset, SEEK_SET);
    written_bytes = fwrite(&rootDIR, sizeof(myDIR), 1, open_file);
    
}


int main(int argc, char * argv[])
{
    /** argv[1] = flag -s, argv[2] = size in integer value
     * 
    */ 
    if(argc < 2)
    {
        // default size
    }
    else if(argc == 3)
    {
        // set size
        ssize_t size = strtol(argv[2], NULL, 10);
        

    }
    else
    {
        throw("invalid argument to program mymkfs.");
    }


}





