

myFILE *myfopen(const char *restrict pathname, const char
*restrict mode)
int myfclose(myFILE *stream);
size_t myfread(void *restrict ptr, size_t size, size_t nmemb,
myFILE *restrict stream);
size_t myfwrite(const void *restrict ptr, size_t size, size_t
nmemb, myFILE *restrict stream);
int myfseek(myFILE *stream, long offset, int whence);
int myfscanf(myFILE *restrict stream,
 const char *restrict format, ...);
int myfprintf(myFILE *restrict stream,
 const char *restrict format, ...);