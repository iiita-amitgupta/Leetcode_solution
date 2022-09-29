class ParkingSystem {
    vector<int> slot;
public:
    ParkingSystem(int big, int medium, int small) {
        slot.push_back(big);
        slot.push_back(medium);
        slot.push_back(small);
    }
    
    bool addCar(int carType) {
        if(carType == 1){
            if(slot[0] == 0){
                return false;
            }else{
                slot[0]--;
                return true;
            }
        }else if(carType == 2){
            if(slot[1] == 0){
                return false;
            }else{
                slot[1]--;
                return true;
            }
        }else if(carType == 3){
            if(slot[2] == 0){
                return false;
            }else{
                slot[2]--;
                return true;
            }
        }
        return false;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */