#ifndef MYDIR_HPP_
#define MYDIR_HPP_

class myDIR
{
    char * name;
    /**
     * @brief reffering to the next file inside the current directory
     * 
     */
    myDIR * next;
    /**
     * @brief reffering to the first file inside the directory's contents
     * 
     */
    myDIR * child;
    public:
        myDIR(char * _name, myDIR * _next, myDIR * _child);
};



#endif








