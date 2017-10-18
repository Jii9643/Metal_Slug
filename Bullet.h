//
// Created by federico on 18/10/2017.
//

#ifndef METAL_SLUG_BULLET_H
#define METAL_SLUG_BULLET_H

#include "GameCharacter.h"


class Bullet {

public:
    Bullet (float x, float y, int dmg): PosX(x), PosY(y), damage(dmg) {};

    void hit(GameCharacter &enemy);
    void draw ();


    float getPosX() const {
        return PosX;
    }

    void setPosX(float PosX) {
        Bullet::PosX = PosX;
    }

    float getPosY() const {
        return PosY;
    }

    void setPosY(float PosY) {
        Bullet::PosY = PosY;
    }

    int getDamage() const {
        return damage;
    }

    void setDamage(int damage) {
        Bullet::damage = damage;
    }

protected:
    float PosX;
    float PosY;
    int damage;



};


#endif //METAL_SLUG_BULLET_H
