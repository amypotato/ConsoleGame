//
//  PlayerCharacter.hpp
//  ConsoleGame
//
//  Created by Amy Molloy on 20/05/2022.
//

#ifndef PlayerCharacter_hpp
#define PlayerCharacter_hpp

#include <stdio.h>
#include <cstdint>
#include "Inventory.hpp"

class PlayerCharacter {
    //Player Stats
    uint8_t stamina;
    uint8_t sturdiness;
    uint8_t willpower;
    uint8_t charisma;
    uint8_t bravery;
    
    
    Inventory inventory;
};


#endif /* PlayerCharacter_hpp */
