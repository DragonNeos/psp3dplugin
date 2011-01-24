#ifndef PSP_DEBUG_H
#define PSP_DEBUG_H

//debug mode does activate the logging of the function entries
//to get an idea which order the current game is calling them
#define DEBUG_MODE
//trace mode does activate logging all GE-List entries
//this is to get an idea how the current game is using the same
//#define TRACE_MODE


#define LOGFILE "ms0:/psp3d.log"

// Debug Log
int debuglog(const char * string);

// Append Buffer to File
int appendBufferToFile(const char * path, void * buffer, int buflen);

#endif 
