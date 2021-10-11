//Copyright 2021 Enigma

#define HEADER_HPP_
#ifdef HEADER_HPP_


#include <string>
#include <any>
#include <iostream>
#include <fstream>
#include <nlohmann/json.hpp>


using nlohmann::json;

json takeJson(int argc, char** argv);

#endif // HEADER_HPP_
