#include <cpp_api/navigation_bridge.h>
#include <iostream>

int main(int argc, char *argv[])
{
    Navigation nav_inst;

    std::cout<<"\nThis is a assignment for interview\n";
    
    //issuing a takeoff command using navigation api's
    std::cout<<"\nissuing a takeoff command using navigation api'e\n";
    
    if(nav_inst.take_off(5.0)){
        std::cout<<"\nUnable to takeeoff\n";
        exit(0);
    }

    //Sending Position Setpoints in ned frame ,for moving in x coordinate , we do x argument as 6.5
    std::cout<<"\nmoving to 1st vertex of square\n";
    if(nav_inst.position_set(6.5,0,-5)){
        std::cout<<"\nFailed to reach vertex 1\n";
        exit(0);
    }

 //for moving in x,y coordinate, x-y coordinate , we do x argument as 6.5, y as 6.5
    std::cout<<"\nmoving to 2nd vertex of square\n";
    if(nav_inst.position_set(6.5,6.5,-5)){
        std::cout<<"\nFailed to reach vertex 2\n";
        exit(0);
    }

//for moving in y coordinate, y coordinate , we do x argument as 0, y as 6.5
    std::cout<<"\nmoving to 3rd vertex of square\n";
    if(nav_inst.position_set(0,6.5,-5)){
        std::cout<<"\nFailed to reach vertex 3\n";
        exit(0);
    }

    std::cout<<"\noving to 4th vertex of square\n";
    if(nav_inst.position_set(0,0,-5)){
        std::cout<<"\nFailed to reach vertex 4\n";
        exit(0);
    }

    //sending land command
    std::cout<<"\nLanding\n";
    if(nav_inst.land(false)){
        std::cout<<"\nLanding Failed\n";
        exit(0);
    }

}