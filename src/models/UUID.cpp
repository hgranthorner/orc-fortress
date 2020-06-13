//
// Created by Grant Horner on 6/13/20.
//

#include <string>

namespace helper {

    extern "C"
    {
#ifdef WIN32
#include <Rpc.h>
#else

#include <uuid/uuid.h>

#endif
    }

    std::string newUUID() {
#ifdef WIN32
        UUID uuid;
    UuidCreate ( &uuid );

    unsigned char * str;
    UuidToStringA ( &uuid, &str );

    std::string s( ( char* ) str );

    RpcStringFreeA ( &str );
#else
        uuid_t uuid;
        uuid_generate_random(uuid);
        char s[37];
        uuid_unparse(uuid, s);
#endif
        return s;
    }
}


#include "UUID.h"

UUID::UUID() {
    value_ = helper::newUUID();
}

const std::string &UUID::GetValue() const {
    return value_;
}
