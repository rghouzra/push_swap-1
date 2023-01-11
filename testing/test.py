#/usr/local/bin/python3/

import os
import random


def main():
    # make a list of numbers from 1 to 5
    numbers = [i for i in range(1, 6)]
    # make a list of random numbers
    random.shuffle(numbers)
    # make a string of random numbers
    random_numbers = ' '.join(map(str, numbers))
    # print the random numbers
    # print(random_numbers)
    # read the output of the push_swap program
    output = os.popen("./push_swap " + random_numbers).read()
    # print the output
    # if the output is has more than 12 lines, print it
    if len(output.splitlines()) > 12:
        print(random_numbers)
        print(output)
        print("=====================================")

if __name__ == "__main__":
    while (True):
        main()