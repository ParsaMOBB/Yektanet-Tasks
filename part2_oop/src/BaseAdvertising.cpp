#include "BaseAdvertising.hpp"

const std::string describeMe_msg = "BaseAdvertising Class methods :\n"
                                   "getClicks() : gives number of clicks on the Class.\n"
                                   "getViews() : gives number of views of the Class.\n"
                                   "incClicks() : increments number of clicks by one.\n"
                                   "incViews() : increments number of views by one.\n"
                                   "describeMe() : describes the methods action.\n";
BaseAdvertising::BaseAdvertising() {
    id = clicks = views = 0;
}
BaseAdvertising::BaseAdvertising(int _id) : id(_id) {
    clicks = views = 0;
}
int BaseAdvertising::getClicks() {
    return clicks;
}
int BaseAdvertising::getViews() {
    return views;
}
void BaseAdvertising::incClicks() {
    clicks++;
}
void BaseAdvertising::incViews() {
    views++;
}
std::string BaseAdvertising::describeMe() {
    return describeMe_msg;
}
URL::URL(std::string _url) : url(_url) {}