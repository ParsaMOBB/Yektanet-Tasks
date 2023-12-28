#ifndef __ADVERTISER__
#define __ADVERTISER__

#include <string>

#include "BaseAdvertising.hpp"

class Advertiser : public BaseAdvertising {
protected:
    std::string name;
    static int total_clicks;
public:
    Advertiser(int _id, std::string _name);
    std::string getName();
    void setName(std::string _name);
    static std::string help();
    static int getTotalClicks();
    std::string describeMe();
    void incClicks();
};

#endif