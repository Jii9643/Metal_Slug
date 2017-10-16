//
// Created by gigli on 16/10/2017.
//

#ifndef METAL_SLUG_GAMECHARACTER_H
#define METAL_SLUG_GAMECHARACTER_H


#include "Weapon.h"

class GameCharacter {
public:
    GameCharacter (float x, float y, int h ): PosX(x), PosY(y), Hp(h) {};
    virtual ~GameCharacter();

    virtual void move (int x, int y) = 0;
    virtual void hold ()=0;
    virtual void drop ()=0;
    virtual void draw ()=0;


    int getHp() const {
        return Hp;
    }

    void setHp(int Hp) {
        GameCharacter::Hp = Hp;
    }

    float getPosX() const {
        return PosX;
    }

    void setPosX(float PosX) {
        GameCharacter::PosX = PosX;
    }

    float getPosY() const {
        return PosY;
    }

    void setPosY(float PosY) {
        GameCharacter::PosY = PosY;
    }

protected:
    int Hp;
    float PosX;
    float PosY;
};


#endif //METAL_SLUG_GAMECHARACTER_H
