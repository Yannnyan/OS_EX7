#ifndef MYSTRUCTS_HPP_
#define MYSTRUCTS_HPP_

#include <sys/types.h>

/**
 * @brief A struct containing the location of the files and the location of the inode.
 * 
 */
typedef struct
{
    ssize_t inode_offset;
    ssize_t files_offset;
    ssize_t file_system_size;

} fs;


typedef struct
{
    ssize_t size_of_file;
    
}inode;


#endif