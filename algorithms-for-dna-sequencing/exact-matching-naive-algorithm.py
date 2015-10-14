def naive(p, t):
    occurrences = []
    for i in range(len(t) - len(p) + 1):
        match = True
        for j in range(len(p)):
            if t[i+j] != p[j]:
                match = False
                break
        if match:
            occurrences.append(i)
    return occurrences

# Worst Case => (t - p) * p = p^2 -2pt +t^2 = O(p^2 + t^2) = O(n^2)
# Best Case  => t - p + 1
