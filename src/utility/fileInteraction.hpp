#ifndef __UTILITY_FILEINTERACTION_HEADER__
#define __UTILITY_FILEINTERACTION_HEADER__

#include <string>
#include <iostream>
#include "pugixml.hpp"

namespace util {
  
  class FileInt {
    private:
      const std::string path;

    public:
      FileInt(const std::string& path_in)
        : path(path_in) {
          pugi::xml_document doc;
          pugi::xml_parse_result result = doc.load_file(path);
          std::cout << result.description() << std::endl;
        }
  }
}

#endif
