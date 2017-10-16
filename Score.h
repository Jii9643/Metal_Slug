//
// Created by gigli on 16/10/2017.
//

#ifndef METAL_SLUG_SCORE_H
#define METAL_SLUG_SCORE_H


class Score {
public:
    Score(float x, float y, int p): PosX(x), PosY(y), points(p){};
    virtual ~Score();

    virtual void increasePoints()=0;

    int getPoints() const {
        return points;
    }

    void setPoints(int points) {
        Score::points = points;
    }

    float getPosX() const {
        return PosX;
    }

    void setPosX(float PosX) {
        Score::PosX = PosX;
    }

    float getPosY() const {
        return PosY;
    }

    void setPosY(float PosY) {
        Score::PosY = PosY;
    }

protected:
    int points;
    float PosX;
    float PosY;
};


#endif //METAL_SLUG_SCORE_H
