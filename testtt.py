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

# Generate a graph for chunk = 100
complexity_graph(100)

# Generate a graph for chunk = 500
complexity_graph(500)
