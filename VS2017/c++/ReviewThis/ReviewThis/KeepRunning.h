//
// Created by ethanabrace on 1/14/2018.
//

#ifndef REVIEWTHIS_KEEPRUNNING_H
#define REVIEWTHIS_KEEPRUNNING_H


#include <iostream>
#include "stdafx.h"

class KeepRunning {
    public:
        ~KeepRunning(){
            std::cin.get();
            std::cin.get();
        }
};


#endif //REVIEWTHIS_KEEPRUNNING_H
