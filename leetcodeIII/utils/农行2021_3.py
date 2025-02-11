from functools import cmp_to_key


def solution(arr):
    # cmp_to_key()
    arr = sorted(arr)
    print(arr)


print(solution(["s1", "s3", "s9", "s4", "h1", "p3", "p2", "q5", "q4", "q9", "k2", "k1"]))