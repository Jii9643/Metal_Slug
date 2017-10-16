//
// Created by gigli on 16/10/2017.
//

#ifndef METAL_SLUG_BOX_H
#define METAL_SLUG_BOX_H


class Box {

public:
    Box (float x, float y): PosX(x), PosY(y) {};
    virtual ~Box();

    virtual void crash()=0;
    virtual void draw()=0;
    virtual void drop()=0;
    virtual void generate()=0;

    float getPosX() const {
        return PosX;
    }

    void setPosX(float PosX) {
        Box::PosX = PosX;
    }

    float getPosY() const {
        return PosY;
    }

    void setPosY(float PosY) {
        Box::PosY = PosY;
    }

protected:
    float PosX;
    float PosY;

};


#endif //METAL_SLUG_BOX_H
