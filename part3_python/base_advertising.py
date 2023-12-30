class BaseAdvertising:
    def __init__(self, _id=0):
        self.id = _id
        self.clicks = 0
        self.views = 0

    def get_clicks(self):
        return self.clicks

    def get_views(self):
        return self.views

    def inc_clicks(self):
        self.clicks += 1

    def inc_views(self):
        self.views += 1

    def describe_me(self):
        return "BaseAdvertising Class methods:\n" \
               "get_clicks(): gives the number of clicks on the Class.\n" \
               "get_views(): gives the number of views of the Class.\n" \
               "inc_clicks(): increments the number of clicks by one.\n" \
               "inc_views(): increments the number of views by one.\n" \
               "describe_me(): describes the methods action.\n"


class URL:
    def __init__(self, _url):
        self.url = _url
