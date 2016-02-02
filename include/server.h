//
// Created by tyler on 01/02/16.
//

#pragma once

#include "session.h"

#include <memory>
#include <string>
#include <vector>
#include <memory>

#include <boost/asio.hpp>
#include <boost/bind.hpp>
#include <boost/date_time/posix_time/posix_time.hpp>

class Server {
public:
	Server( int port );
	~Server();

	void start();


private:

	int port;

	boost::asio::io_service ioService;
	boost::asio::ip::tcp::socket socket;
	boost::asio::ip::tcp::acceptor acceptor;

	void listenForConnections();

	std::vector< std::shared_ptr< Session > > sessions;

};

