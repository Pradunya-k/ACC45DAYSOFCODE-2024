
T = int(input())
results = []

for _ in range(T):
  
    X, Y = map(int, input().split())
   
    distance = abs(Y - X)
   
    results.append(str(distance))

print("\n".join(results))
