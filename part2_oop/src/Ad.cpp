#include "Ad.hpp"

const std::string describeMe_msg = "Advertiser Class methods :\n"
                                   "getTitle() : gives title of the ad.\n"
                                   "setTitle(new_title) : changes title of the ad to new_title.\n"
                                   "getImgUrl() : gives the URL of the ad's image.\n"
                                   "setImgUrl(new_imgUrl) : changes imgUrl of the ad to new_imgUrl.\n"
                                   "getLink() : gives the link of the ad.\n"
                                   "setLink(new_link) : changes link of the ad to new_link.\n"
                                   "getClicks() : gives number of clicks on the ad.\n"
                                   "setAdvertiser(new_advertiser) : changes ad's advertiser to new_advertiser.\n"
                                   "getViews() : gives number of views of the ad.\n"
                                   "incClicks() : increments number of clicks by one.\n"
                                   "incViews() : increments number of views by one.\n"
                                   "describeMe() : describes the methods action.\n";
Ad::Ad(int _id, std::string _title, std::string _imgUrl, std::string _link, Advertiser* _advertiser)
    : BaseAdvertising(_id), title(_title), imgUrl(_imgUrl), link(_link), advertiser(_advertiser) {}  

std::string Ad::getTitle() {
    return title;
}
void Ad::setTitle(std::string _title) {
    title = _title;
}
std::string Ad::getImgUrl() {
    return imgUrl.url;
}
void Ad::setImgUrl(std::string _url) {
    imgUrl = URL(_url);
}
std::string Ad::getLink() {
    return link.url;
}
void Ad::setLink(std::string _link) {
    link = URL(_link);
}
void Ad::setAdvertiser(Advertiser* _advertiser) {
    advertiser = _advertiser;
}
std::string Ad::describeMe() {
    return describeMe_msg;
}
void Ad::incClicks() {
    clicks++;
    advertiser->incClicks();
}
void Ad::incViews() {
    views++;
    advertiser->incViews();
}