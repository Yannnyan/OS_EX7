# Overview
In this repository we are going to implement a basic file system inside a file.

## Basic intuition
* The File system is most basically a folder containing other folders and files. 
* We would need to have a description about each file and folder, therefore we would need a seperate
  space for information about the files (inodes). Inodes are unique for each file, and they are allocated seperately from the files themselves.
* Each file would be given an inode number which would be an index of an array containing struct inode.
* Each folder (DIR) would be a struct named myDIR.
* myDIR: 
1) char * name
2) myDIR * next (reffering to the next file inside the current directory)
3) myDIR * child (reffering to the first file inside the directory's contents)
![image](https://user-images.githubusercontent.com/82415308/174233176-7d761858-652b-498f-9b7a-add38bd6bb47.png)


