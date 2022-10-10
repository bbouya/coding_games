"""
The purpose is 
format_duration(62) # Return 1 minute and 2 seconds.
for the purpose of this kata, a year is 365 days and a day is 24 hours.

"""
#def format_duration(seconds):
#    pass
#
# solution : 

from email.utils import format_datetime


def format_duration(seconds):
    words = ["year", "day", "hour", "minute", "second"]

    if not seconds : 
        return "now"
    else :
        m, s = divmod(seconds, 60)
        h, m = divmod(m, 60)
        d, h = divmod(h, 24)
        y, d = divmod(d, 365)

        time = [y, d, h, m, s]

        duration = []

        for x,i in enumerate(time):
            if i == 1:
                duration.append(f"{i} {words[x]}s")
            elif i > 1 :
                duration.append(f"{i} {words[x]}s")
        
        if len(duration) == 1:
            return duration[0]
        elif len(duration) == 2:
            return f"{duration[0]} and {duration[1]}"
        else:
            return ",".join(duration[:1]) + " and" + duration[-1]


if __name__ == '__main__':
    s = int(input())
    print(format_duration(s))

