#ifndef keytransform_h
#define keytransform_h
#include "common.h"
#include <map>

extern const std::map<int, AvnKey> s_KeyMap;

extern const std::map<AvnKey, int> s_AvnKeyMap;

extern const std::map<int, const char*> s_QwertyKeyMap;

extern const std::map<AvnKey, int> s_UnicodeKeyMap;

#endif
