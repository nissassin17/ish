#ifndef COMMON_HH
#define COMMON_HH
//http://stackoverflow.com/questions/5641427/how-to-make-preprocessor-generate-a-string-for-line-keyword
#define S(x) #x
#define S_(x) S(x)
#define S__LINE__ S_(__LINE__)
#define CHECK(x) if ((x) == -1) perror(__FILE__ " at line " S__LINE__ " " #x)
#endif
