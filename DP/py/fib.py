#Top Down Approach -- Memoization (Recursive)
class Mem_Solution:
    dic = {}
    def fib(self, n: int) -> int:
        if n<=1:
            return n
        if n in self.dic:
            return self.dic[n]
        self.dic[n] = self.fib(n-1) + self.fib(n-2)
        return self.dic[n]


#Bottom up approach -- Tabulation
class Tab_Solution:
    def fib(self, n: int) -> int:
        if n<=1:
            return n
        fib_tab = [0]*(n+1)
        fib_tab[1] = 1
        for i in range(2,n+1):
            fib_tab[i] = fib_tab[i-1] + fib_tab[i-2]
        return fib_tab[n]

#Top Down Approach -- Memoization (Iterative)
class It_Solution:
    def fib(self,n:int) -> int:
        if n <=1:
            return n
        dic = {0:0,1:1}
        for i in range(2,n+1):
            dic[i] = dic[i-1] + dic[i-2]
        return dic[n]

#Tribonachi
class Solution:
  dic = {}
  def tribonacci(self, n: int) -> int:
    if n==0:
      return 0
    if n <=2:
      return 1
    if n in self.dic:
      return self.dic[n]
    self.dic[n] = self.tribonacci(n-1)+self.tribonacci(n-2)+self.tribonacci(n-3)
    return self.dic[n]

print(Mem_Solution().fib(10))