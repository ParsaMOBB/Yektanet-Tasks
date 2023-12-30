from base_advertising import BaseAdvertising
from base_advertising import URL
from advertiser import Advertiser

class Ad(BaseAdvertising):
    def __init__(self, _id, _title, _img_url, _link, _advertiser):
        super().__init__(_id)
        self.title = _title
        self.img_url = URL(_img_url)
        self.link = URL(_link)
        self.advertiser = _advertiser

    def get_title(self):
        return self.title

    def set_title(self, _title):
        self.title = _title

    def get_img_url(self):
        return self.img_url.url

    def set_img_url(self, _url):
        self.img_url = URL(_url)

    def get_link(self):
        return self.link.url

    def set_link(self, _link):
        self.link = URL(_link)

    def set_advertiser(self, _advertiser):
        self.advertiser = _advertiser

    def describe_me(self):
        return "Ad Class methods:\n" \
               "get_title(): gives the title of the ad.\n" \
               "set_title(new_title): changes the title of the ad to new_title.\n" \
               "get_img_url(): gives the URL of the ad's image.\n" \
               "set_img_url(new_img_url): changes img_url of the ad to new_img_url.\n" \
               "get_link(): gives the link of the ad.\n" \
               "set_link(new_link): changes link of the ad to new_link.\n" \
               "get_clicks(): gives the number of clicks on the ad.\n" \
               "set_advertiser(new_advertiser): changes ad's advertiser to new_advertiser.\n" \
               "get_views(): gives the number of views of the ad.\n" \
               "inc_clicks(): increments the number of clicks by one.\n" \
               "inc_views(): increments the number of views by one.\n" \
               "describe_me(): describes the methods action.\n"

    def inc_clicks(self):
        self.clicks += 1
        self.advertiser.inc_clicks()

    def inc_views(self):
        self.views += 1
        self.advertiser.inc_views()

