#ifndef SS_ICONNECT_HPP_
#define SS_ICONNECT_HPP_

namespace SS{
    class IConnect
    {
    public:
        IConnect();
        virtual ~IConnect() = 0;
        virtual void create() = 0;
    private:
    };
    inline IConnect::~IConnect() {}
    inline IConnect::IConnect() {}
}

#endif