import matplotlib.pyplot as plt
import numpy as np

def complexity_graph(chunk):
    # Generate data for the graph
    x = np.linspace(1, 1000, 1000)
    y = x / chunk

    # Create the plot
    plt.plot(x, y)
    plt.xlabel('Number of elements in stack a')
    plt.ylabel('Time complexity')
    plt.title('Time complexity of sort_under_thundo as a function of chunk size')
    plt.grid(True)

    # Show the plot
    plt.show()

# # Generate a graph for chunk = 100
# complexity_graph(100)

# # Generate a graph for chunk = 500
# complexity_graph(500)

def convert_to_per(str):
    str = str.split(" ")
    print(str)

convert_to_per("90 51 35 98 77 69 14 15 61 19 43 53 31 37 80 87 13 60 84 89 25 55 42 0 76 52 57 92 93 9 20 38 63 23 91 39 48 74 65 11 18 70 21 5 44 50 45 83 8 72 10 17 68 67 54 79 85 78 46 29 4 24 7 59 73 47 95 32 34 1 27 62 3 81 30 2 12 33 49 86 99 64 22 40 94 28 96 82 36 6 71 58 26 66 75 41 56 97 88 16")