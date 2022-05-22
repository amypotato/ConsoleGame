//
//  Room.hpp
//  ConsoleGame
//
//  Created by Amy Molloy on 20/05/2022.
//

#ifndef Room_hpp
#define Room_hpp

#include <stdio.h>
#include <string>
#include <vector>
#include <map>

enum RoomType {
    NORMAL,
    BOSS,
    SHOP,
    END
};

const std::map<RoomType,std::string> roomTypeMap = {
    {RoomType::NORMAL, "NORMAL"},
    {RoomType::BOSS, "BOSS"},
    {RoomType::SHOP, "SHOP"},
    {RoomType::END, "END"},
};

std::string roomTypeName(RoomType roomType);

class Room {
    protected: std::vector<std::vector<char8_t>> roomState;
    private: bool visited;
    private: bool completed;
    
    bool isVisited() {
        return visited;
    }
    
    bool isCompleted() {
        return completed;
    }
    
    virtual std::u8string RoomName() = 0;
    virtual RoomType roomType() = 0;
    
    
    public: std::vector<std::vector<char8_t>> currentState() {
        return roomState;
    }
    
    public: void updateRoomCell(int posx, int posy, char8_t value){
        if (roomState.size() <= posx && roomState[posx].size() <= posy){
            roomState[posx][posy] = value;
        }
        throw new std::out_of_range("RoomState index out of range");
    }
};

#endif /* Room_hpp */
