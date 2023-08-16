#!/usr/bin/python3
def number_keys(my_dict):
    num = 0
    list_keys = list(my_dict.keys())

    for i in list_keys:
        num += 1

    return (num)
