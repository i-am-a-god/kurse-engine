#pragma once

#include <iostream>
#include <string>
#include <tuple>

typedef enum {
	GET,
	POST
} request_types;

class networking_t {
private:
	auto get_request(const std::string& url, const int port) -> std::tuple<std::string, int>;
	auto post_request(const std::string& url, const int port) -> std::tuple<std::string, int>;
public:
	auto do_request(request_types type, const std::string& url, const int port) -> std::tuple<std::string, int>; // data returned, status code 
};
