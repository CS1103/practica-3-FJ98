// Created by felix on 6/7/2019.
#ifndef PC3_SECCION_H
#define PC3_SECCION_H

#include <vector>
#include <iostream>
#include <map>
#include <string>

class Seccion{
private:
    std::map<std::string, int> mapAlumnos;
public:
    void crear();
    std::map<std::string, int> listar();
    void borrar();
};
#endif //PC3_SECCION_H
