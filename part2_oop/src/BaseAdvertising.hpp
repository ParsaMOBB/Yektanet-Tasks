#ifndef __BASEADVERTISING__
#define __BASEADVERTISING__

#include <iostream>
#include <string>

class BaseAdvertising {
protected:
    int id;
    int clicks;
    int views;
public:
    BaseAdvertising();
    BaseAdvertising(int _id);
    int getClicks();
    int getViews();
    void incClicks();
    void incViews();
    std::string describeMe();
};

typedef struct URL {
    std::string url;
    URL(std::string _url); 
} URL;

#endif