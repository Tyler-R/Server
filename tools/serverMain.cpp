#include "server.h"

int main() {
	const int DEFAULT_PORT = 8080;

	int port = DEFAULT_PORT;

	Server server( port );

	std::cout << "starting server" << std::endl;


	server.start();

	std::cout << "closing server" << std::endl;
}
