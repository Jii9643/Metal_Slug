//
// Created by federico on 18/10/2017.
//

#ifndef METAL_SLUG_SCORE_H
#define METAL_SLUG_SCORE_H


class Score {

public:
    Score( int p): points(p){};
    virtual ~Score();

    virtual void increasePoints()=0;

    int getPoints() const {
        return points;
    }

    void setPoints(int points) {
        Score::points = points;
    }


protected:
    int points;

};


#endif //METAL_SLUG_SCORE_H
