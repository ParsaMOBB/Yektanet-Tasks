from base_advertising import BaseAdvertising

class Advertiser(BaseAdvertising):
    total_clicks = 0

    def __init__(self, _id, _name):
        super().__init__(_id)
        self.name = _name

    def get_name(self):
        return self.name

    def set_name(self, _name):
        self.name = _name

    @staticmethod
    def help():
        return "Advertiser Class Fields:\n" \
               "id: unique number assigned to each advertiser.\n" \
               "name: name of the advertiser.\n" \
               "clicks: number of clicks on the advertiser ads.\n" \
               "views: number of views of the advertiser ads.\n"

    @staticmethod
    def get_total_clicks():
        return Advertiser.total_clicks

    def describe_me(self):
        return "Advertiser Class methods:\n" \
               "get_name(): gives the name of the advertiser.\n" \
               "set_name(new_name): changes the name of the advertiser to new_name.\n" \
               "help(): gives information about this class fields.\n" \
               "get_clicks(): gives the number of clicks on the advertiser ads.\n" \
               "get_views(): gives the number of views of the advertiser ads.\n" \
               "inc_clicks(): increments the number of clicks by one.\n" \
               "inc_views(): increments the number of views by one.\n" \
               "describe_me(): describes the methods action.\n"

    def inc_clicks(self):
        self.clicks += 1
        Advertiser.total_clicks += 1
