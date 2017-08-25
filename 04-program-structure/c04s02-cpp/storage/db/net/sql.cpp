#include <iostream>
#include "storage.h"

using namespace std;

auto_ptr<AA_SqlConnection> sql_conn_factory()
{
  cout << "INFO - sql_conn_factory()\n";

  return auto_ptr<AA_SqlConnection>(new AA_SqlConnection);
}

 AA_SqlConnection::AA_SqlConnection()
{
  cout << "INFO - constructing SQL connection object\n";
}

 AA_SqlConnection::~AA_SqlConnection()
{
  cout << "INFO - cleaning up SQL connection object\n";
}

void AA_SqlConnection::get_data()
{
  cout << "INFO - get_data() - getting data from Sql conn\n";
}