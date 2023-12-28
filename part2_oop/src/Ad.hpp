#ifndef __AD__
#define __AD__

#include <string>

#include "BaseAdvertising.hpp"
#include "Advertiser.hpp"

class Ad : public BaseAdvertising {
protected:
    std::string title;
    URL imgUrl;
    URL link;
    Advertiser* advertiser;
public:
    Ad(int _id, std::string _title, std::string _imgUrl, std::string _link, Advertiser* _advertiser);
    std::string getTitle();
    void setTitle(std::string _title);
    std::string getImgUrl();
    void setImgUrl(std::string _url);
    std::string getLink();
    void setLink(std::string _link);
    void setAdvertiser(Advertiser* _advertiser);
    std::string describeMe();
    void incClicks();
    void incViews();
};

#endif