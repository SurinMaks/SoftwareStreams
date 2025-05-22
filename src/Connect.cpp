#include <iostream>
#include <libssh/libssh.h>
#include "Connect.hpp"

namespace SS
{
    SS::Connect::Connect(const std::string& host, const uint16_t port)
        : host_(host), port_(port) {}

    void SS::Connect::create(){
        std::cout << "Method create ... \n";
    }
} // namespace SS
