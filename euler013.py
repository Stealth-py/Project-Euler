print(str(sum([int(input()) for _ in range(int(input()))]))[0:10])

"""
This looks interesting, doesn't it?
So what happened here was first user inputs the range for which we then take
inputs repetatively in a list. Then the sum function sums up the whole list
and we wrap it all in str which convert the object to a string and [0:10]
fetches us the first 10 digits of the string.
"""
