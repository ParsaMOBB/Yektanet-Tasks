#include "Advertiser.hpp"

const std::string help_msg = "Advertiser Class Fields :\n"
                             "id : unique number assigned to each advertiser.\n"
                             "name : name of the advertiser.\n"
                             "clicks : number of clicks on the advertiser ads.\n"
                             "views : number of views of the advertiser ads.\n";
const std::string describeMe_msg = "Advertiser Class methods :\n"
                                   "getName() : gives name of the advertiser.\n"
                                   "setName(new_name) : changes name of the advetiser to new_name.\n"
                                   "help() : gives information about this class fields.\n"
                                   "getClicks() : gives number of clicks on the advertiser ads.\n"
                                   "getViews() : gives number of views of the advertiser ads.\n"
                                   "incClicks() : increments number of clicks by one.\n"
                                   "incViews() : increments number of views by one.\n"
                                   "describeMe() : describes the methods action.\n";
Advertiser::Advertiser(int _id, std::string _name) 
    : BaseAdvertising(_id), name(_name) {}

std::string Advertiser::getName() {
    return name;
}
void Advertiser::setName(std::string _name) {
    name = _name;
}
std::string Advertiser::help() {
    return help_msg;
}
int Advertiser::total_clicks = 0;
int Advertiser::getTotalClicks() {
    return total_clicks;
}
std::string Advertiser::describeMe() {
    return describeMe_msg;
}
void Advertiser::incClicks() {
    clicks++;
    total_clicks++;
}