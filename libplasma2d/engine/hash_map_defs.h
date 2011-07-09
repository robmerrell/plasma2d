/**
 * Licensed under the MIT license. See LICENSE for details.
 * Copyright (C) 2011 Rob Merrell
 */

#ifndef HASH_MAP_DEFS_H
#define HASH_MAP_DEFS_H

// equality function for the hash_map
struct eqstr {
    bool operator()(std::string s1, std::string s2) const {
        return s1 == s2;
    }
};

struct eqchar {
    bool operator()(const char* s1, const char* s2) const {
        return strcmp(s1, s2) == 0;
    }
};

namespace __gnu_cxx
{
    template<> struct hash< std::string >
    {
        size_t operator()( const std::string& x ) const
        {
            return hash< const char* >()( x.c_str() );
        }
    };
}

#endif