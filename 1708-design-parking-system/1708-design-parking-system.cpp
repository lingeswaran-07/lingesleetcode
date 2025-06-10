class ParkingSystem {
public:
  int B,M,S;
    ParkingSystem(int big, int medium, int small) {
        this->B=big;
        this->M=medium;
        this->S=small;
    }
    
    bool addCar(int carType) {
        if(carType==1 && B==0) return false;
         if(carType==2 && M==0) return false;
          if(carType==3 && S==0) return false;

          if(carType==1) B--;
          if(carType==2) M--;
          if(carType==3) S--;
          return true;

    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */