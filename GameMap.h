//
// Created by gigli on 16/10/2017.
//

#ifndef METAL_SLUG_GAMEMAP_H
#define METAL_SLUG_GAMEMAP_H


class GameMap {
public:
    GameMap (int sp,int ep, int wd, int hg, int scp) : startPoint(sp), endPoint (ep), width(wd), height(hg), scrollSpeed(scp) {};
    virtual ~GameMap();

    virtual void createDuck()=0;
    virtual void createEnemy()=0;
    virtual void gameOver()=0;

    int getStartPoint() const {
        return startPoint;
    }

    void setStartPoint(int startPoint) {
        GameMap::startPoint = startPoint;
    }

    int getEndPoint() const {
        return endPoint;
    }

    void setEndPoint(int endPoint) {
        GameMap::endPoint = endPoint;
    }

    int getWidth() const {
        return width;
    }

    void setWidth(int width) {
        GameMap::width = width;
    }

    int getHeight() const {
        return height;
    }

    void setHeight(int height) {
        GameMap::height = height;
    }

    int getScrollSpeed() const {
        return scrollSpeed;
    }

    void setScrollSpeed(int scrollSpeed) {
        GameMap::scrollSpeed = scrollSpeed;
    }

protected:
    int startPoint;
    int endPoint;
    int width;
    int height;
    int scrollSpeed;

};


#endif //METAL_SLUG_GAMEMAP_H
