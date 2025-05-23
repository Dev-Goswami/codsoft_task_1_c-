#include <cstdlib> 
#ifdef _WIN32 //if system is windows
    #define CLEAR_COMMAND "cls"
#else //otherwise 
#define CLEAR_COMMAND "clear"
#endif


//this for to use clearScreen function in cross platform 
using namespace std;
void clearScreen() {
    system(CLEAR_COMMAND);
}