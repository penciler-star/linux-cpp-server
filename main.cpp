#include "my_server.h"
#include <unistd.h>



int main()
{

	My_Server server(  "localhost", "ck",  "123456",  "test_base", 3306,
		"127.0.0.1", 6379,
		8001, false, 1,
		20);
	server.Start();


	return 0;
}