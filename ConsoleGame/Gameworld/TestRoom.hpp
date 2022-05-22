//
//  TestRoom.hpp
//  ConsoleGame
//
//  Created by Amy Molloy on 20/05/2022.
//

#ifndef TestRoom_hpp
#define TestRoom_hpp

#include <stdio.h>
#include "Room.hpp"
#include <vector>

class TestRoom : public Room {
    const std::u8string roomName = u8"TestRoom";
    const std::vector<std::vector<char8_t>> defaultState {
        {'.', '.', '.', '.', '.', '.', '.', '.', '.'},
        {'.', '.', '.', '.', '.', '.', '.', '.', '.'},
        {'.', '.', '.', '.', '.', '.', '.', '.', '.'},
        {'.', '.', '.', '.', '.', '.', '.', '.'},
        {'.', '.', '.', '.', '.', '.', '.', '.'},
        {' ', '.', '.', '.', '.', '.', '.', '.'},
        {' ', '.', '.', '.', '.', '.', '.', '.'},
        {' ', '.', '.', '.', '.', '.', '.', '.'},
        {' ', '.', '.', '.', '.', '.', '.', '.'},
        {' ', '.', '.', '.', '.', '.', '.', '.'}
    };
    
public: RoomType roomType() override {
        return RoomType::NORMAL;
    }
    
public: std::u8string RoomName() override {
        return roomName;
    }
    
public: TestRoom(){
        this->roomState = defaultState;
    }
};


#endif /* TestRoom_hpp */
