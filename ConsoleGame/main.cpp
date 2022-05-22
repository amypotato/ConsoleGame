//
//  main.cpp
//  ConsoleGame
//
//  Created by Amy Molloy on 20/05/2022.
//

#include <iostream>
#include "Room.hpp"
#include "TestRoom.hpp"

void clearScreen(){
    std::cout << "\033[2J\033[1;1H";
}

void printRoom(Room &room){
    for (std::vector<char8_t> row : room.currentState()){
        for (char8_t value : row){
            std::cout << (char)value;
        }
        std::cout << std::endl;
    }
}

int main(int argc, const char * argv[]) {
    clearScreen();
    std::cout << "Test Room Start\n";
    
    TestRoom* testRoom = new TestRoom();
    
    std::cout <<  reinterpret_cast<const char*>((u8"RoomName: " + testRoom->RoomName()).c_str()) << std::endl;
    std::cout <<  "RoomType: " + roomTypeName(testRoom->roomType()) << std::endl;
    
    printRoom(*testRoom);
    
    return 0;
}




