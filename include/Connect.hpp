#ifndef SS_CONNECT_HPP_
#define SS_CONNECT_HPP_

#include "IConnect.hpp"
#include <cstdint>

namespace SS{

    class Connect : public IConnect
    {
    public:
        Connect(const std::string& host, const uint16_t port);
        virtual ~Connect() = default;
        void create() override;
    private:
        std::string host_{};
        uint16_t port_{0};
    };

}

#endif