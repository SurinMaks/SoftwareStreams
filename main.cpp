#include <iostream>
#include <libssh/libssh.h>
#include <memory>
#include "Connect.hpp"

int main(int, char**){
    std::cout << "Hello, from streams!\n";
    std::unique_ptr<SS::IConnect> myssh = std::make_unique<SS::Connect>("127.0.0.1", 123);
    myssh->create();
}
