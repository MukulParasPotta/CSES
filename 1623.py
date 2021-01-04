def powerset(seq):
    """
    Returns all the subsets of this set. This is a generator.
    """
    if len(seq) <= 1:
        yield seq
        yield []
    else:
        for item in powerset(seq[1:]):
            yield [seq[0]]+item
            yield item


n = int(input())
a = list(map(int, input().split()))

sm = sum(a)
mn = sm
for _ in list(powerset(a)):
    mn = min(abs(2*sum(_) - sm), mn)
print(mn)