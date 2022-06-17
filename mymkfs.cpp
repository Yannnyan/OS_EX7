
#include <stdlib.h>
#include <errno.h>
#include <sys/mman.h>


void map_fs(ssize_t size, )
{

    mmap()    
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





