#include <iostream>
#include "Connect.hpp"

namespace SS
{
    Connect::Connect(const std::string& host, const u_int16_t port)
        : host_(host), port_(port) {};

    void SS::Connect::create(){
        std::cout << "Method create ... \n";
    };
} // namespace SS
