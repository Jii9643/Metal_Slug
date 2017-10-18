//
// Created by federico on 11/10/2017.
//

#ifndef METAL_SLUG_WEAPON_H
#define METAL_SLUG_WEAPON_H


class Weapon {
public:
    Weapon (int b): nBullet(b) {};
    virtual ~Weapon();

    virtual void shoot ()=0;
    virtual void draw()=0;


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

protected:
    float PosX;
    float PosY;
    int nBullet;


};


#endif //METAL_SLUG_WEAPON_H
