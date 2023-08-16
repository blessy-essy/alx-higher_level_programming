#!/usr/bin/python3
def multiply_by_2(my_dict):
    new_directory = my_dict.copy()
    list_keys = list(new_directory.keys())

    for i in list_keys:
        new_directory[i] *= 2

    return (new_directory)
