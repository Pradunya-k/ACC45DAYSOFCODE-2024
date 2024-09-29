def minimum_cost_for_chef_tv(T, test_cases):
    results = []
    for case in test_cases:
        N, X = case
        subscriptions_needed = (N + 5) // 6
    
        total_cost = subscriptions_needed * X
        results.append(total_cost)
    return results


T = int(input())
test_cases = [tuple(map(int, input().split())) for _ in range(T)]

results = minimum_cost_for_chef_tv(T, test_cases)
for cost in results:
    print(cost)
