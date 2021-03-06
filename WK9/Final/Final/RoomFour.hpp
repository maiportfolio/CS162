//
//  RoomFour.hpp
//  Final
//
//  Created by Jason Cearley on 11/25/15.
//  Copyright © 2015 Jason Cearley. All rights reserved.
//

#ifndef RoomFour_hpp
#define RoomFour_hpp

#include <stdio.h>
#include "Room.hpp"
#include "BlueMan.hpp"

class RoomFour: public Room
{
public:
    RoomFour(); // constructor
    virtual void special_feature(); // function used to apply a special feature of this room
    virtual void menu(); // room menu used to navigate to other rooms
};

#endif /* RoomFour_hpp */
