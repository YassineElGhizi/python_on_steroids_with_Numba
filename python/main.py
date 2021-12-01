from math import sqrt
import time
from numba import jit

@jit(nopython=True)
def haivy_calc():
    for i in range(100000000):
        sqrt(i)

if __name__ == "__main__":
    start_time = time.time()
    haivy_calc()
    print(f"finished in {time.time() - start_time} seconds")