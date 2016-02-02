//
// Created by tyler on 01/02/16.
//

#pragma once

#include "boost/asio.hpp"
#include <memory>

class Session : public std::enable_shared_from_this<Session> {
public:
	Session( boost::asio::ip::tcp::socket socket );
	~Session();


private:
	boost::asio::ip::tcp::socket socket;
};