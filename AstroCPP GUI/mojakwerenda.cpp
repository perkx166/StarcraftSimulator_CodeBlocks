#include "headline.h"

void mojakwerenda(PGconn *conn, const char *sqlCmd,string &mojstring)
{
  PGresult *result;
  char *char_wsk;

  result = PQexec(conn, sqlCmd);

  if(PQresultStatus(result)==PGRES_TUPLES_OK)
    {
        int nrows = PQntuples(result);
        int nfields = PQnfields(result);
        char_wsk=PQgetvalue(result, nrows-1, nfields-1);
        mojstring=(string)char_wsk;
    }
  PQclear(result);
}
