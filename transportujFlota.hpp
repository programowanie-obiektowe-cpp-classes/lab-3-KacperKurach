#pragma once

#include "Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{
    // Twoja implementacja tutaj
    unsigned int totalTransported = 0;  
    unsigned int sailboatCount = 0;     

    Stocznia stocznia;  

    while (totalTransported < towar) {
        Statek* statek = stocznia();

        totalTransported += statek->transportuj();

        if (dynamic_cast<Zaglowiec*>(statek)) {
            ++sailboatCount;  
        }

        delete statek; 
    }
    return sailboatCount;
}