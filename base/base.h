#ifndef BASE_H_INCLUDED
#define BASE_H_INCLUDED
#include <string>


#include "sqlite3.h"
using namespace std;
class BASE
{
public:
    BASE(char* filename );
    ~BASE();


    int requette(char* requette);
    string selection(char * requette);


    void close();

    void Table(char* r);


private:
    sqlite3 *base;
    char* nomBase;

};


#endif // BASE_H_INCLUDED
