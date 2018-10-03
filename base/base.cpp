#ifndef BASE_CPP_INCLUDED
#define BASE_CPP_INCLUDED

#include "base.h"
#include <iostream>
#include <stdio.h>
#include <sstream>
#include <fstream>
#include <stdlib.h>
#include<ctime>
using namespace std;




BASE::BASE(char* filename)
{
    base=NULL;
nomBase= filename;
ofstream outfile;
outfile.open("fichier.txt",ios::app);
time_t heure=time(0);
    char *date=ctime(&heure);
    outfile<<date<<endl;
    outfile<<"----------------"<<endl;
int rc ;
rc = sqlite3_open(filename,&base);
if(rc)
{
    outfile<<sqlite3_errmsg(base)<<endl;
}
else
{
    outfile<<"base bien cree: "<<nomBase<<endl;
}
outfile.close();
}

BASE::~BASE()
{

}

void BASE::Table(char *r)
{

    int rc;
    char *zErrMsg = 0;
    rc = sqlite3_open(nomBase,&base);
    ofstream outfile;
    outfile.open("fichier.txt",ios::app); //app
    time_t heure=time(0);
    char *date=ctime(&heure);
    outfile<<date<<endl;
    outfile<<"----------------"<<endl;
    if(rc)
    {
        outfile<<sqlite3_errmsg(base)<<endl;

    }
    else
    {
        outfile<<"base ouvert "<<endl;
    }
    rc = sqlite3_exec(base, r,0, 0, &zErrMsg);
    if (rc != SQLITE_OK) {
	outfile<<"SQL error: "<< zErrMsg<<endl;
	sqlite3_free(zErrMsg);

	}
	else {
	outfile<<"Table created successfully"<<endl;

	}

    outfile.close();

}



int  BASE::requette(char* requette)
{

    sqlite3_stmt *statement;
     if(sqlite3_prepare_v2(base,requette, -1, &statement, 0) == SQLITE_OK)
    {
        int res=0;
        res=sqlite3_step(statement);

        if (res == SQLITE_OK)
        {
        sqlite3_finalize(statement);
        return 1;
        }
        return -1;
    }
    sqlite3_finalize(statement);
    return 0;
}


string BASE::selection(char* requette)
{   ofstream outfile;
    outfile.open("fichier.txt",ios::app);
    sqlite3_stmt *statement;
    time_t heure=time(0);
    char *date=ctime(&heure);
    outfile<<date<<endl;
    outfile<<"----------------"<<endl;


    if ( sqlite3_prepare(base,requette, -1, &statement, 0 ) == SQLITE_OK )
    {
        int ctotal = sqlite3_column_count(statement);
        int res = 0;
        string output ;
        //outfile<<statement<<endl;
        while ( true )
        {
            res = sqlite3_step(statement);

            if ( res == SQLITE_ROW )
            {
                for ( int i = 0; i < ctotal; i++ )
                {
                    string s = (char*)sqlite3_column_text(statement, i);
                    // print or format the output as you want
                    output+=s;
                    output+=" ";
                }



            }
            else if( res== SQLITE_DONE)
            {   outfile<<output<<endl;
                outfile.close();
                return output;
            }

            else
            {
                 outfile<<"error"<<endl;
                outfile.close();
                return output;
            }
        }
    }

    return "erreur sql";
}




void BASE::close()
{sqlite3_close(base);

}
#endif // BASE_CPP_INCLUDED
