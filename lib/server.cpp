#include "server.h"

Server::Server( int port )
		: port( port ),
		  acceptor( ioService, boost::asio::ip::tcp::endpoint( boost::asio::ip::tcp::v4(), port ) ),
		  socket( ioService ) {

}

Server::~Server( ) {
}

void Server::start() {
	listenForConnections();

	ioService.run();
}

void Server::listenForConnections( ) {
	std::cout << "waiting on port = " << port << std::endl;

	acceptor.async_accept( socket,
	                       [this]( boost::system::error_code errorCode ) {
		                       if( !errorCode ) {

			                       sessions.emplace_back( std::make_shared<Session>( std::move( socket ) ) );
		                       }

		                       listenForConnections();
	                       }
	);
}
