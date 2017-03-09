//
// Created by matteo on 03/03/17.
//
#include <iostream>
#ifndef PROGRESSBAR_RESOURCEFILE_H
#define PROGRESSBAR_RESOURCEFILE_H
class ResourceFile {
private:
    std::string name;
    std::string extension;
    float size; //KB
public:
    ResourceFile() : name("system_data"), extension(".dll"), size(10) { }

    float getSize() const {
        return size;
    }
};
#endif //PROGRESSBAR_RESOURCEFILE_H
