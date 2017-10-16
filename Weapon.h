//
// Created by gigli on 16/10/2017.
//

#ifndef METAL_SLUG_WEAPON_H
#define METAL_SLUG_WEAPON_H


#include "GameCharacter.h"

class Weapon {
public:
    Weapon (float x, float y, int b,int dmg): PosX(x), PosY(y), nBullet(b), damage(dmg) {};
    virtual ~Weapon();

    virtual void shoot ()=0;
    virtual void draw ()=0;
    virtual void drawBullet ()=0;
    virtual void hit () = 0;

    float getPosX() const {
        return PosX;
    }

    void setPosX(float PosX) {
        Weapon::PosX = PosX;
    }

    float getPosY() const {
        return PosY;
    }

    void setPosY(float PosY) {
        Weapon::PosY = PosY;
    }

    int getNBullet() const {
        return nBullet;
    }

    void setNBullet(int nBullet) {
        Weapon::nBullet = nBullet;
    }

    int getDamage() const {
        return damage;
    }

    void setDamage(int damage) {
        Weapon::damage = damage;
    }

protected:
    float PosX;
    float PosY;
    int nBullet;
    int damage;
};

#endif //METAL_SLUG_WEAPON_H
