#ifndef __STORAGE_H__
#define __STORAGE_H__
#include <iostream>

class AA_SqlConnection
{
  public:
    AA_SqlConnection();
    ~AA_SqlConnection();
    void get_data();
};

std::auto_ptr<AA_SqlConnection> sql_conn_factory();

#endif // __STORAGE_H__