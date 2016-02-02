#include <session.h>

Session::Session( boost::asio::ip::tcp::socket socket )
		: socket( std::move( socket ) ) {

}

Session::~Session() {

}