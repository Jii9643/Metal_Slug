//
// Created by federico on 18/10/2017.
//

#include "Bullet.h"
#include "GameCharacter.h"


void Bullet :: hit(GameCharacter &enemy) {

    Bullet standardBullet (0,0,1);

    if (standardBullet.PosY == enemy.getPosY() && standardBullet.PosX == enemy.getPosX())
        enemy.setHp(enemy.getHp() - standardBullet.damage);
}
