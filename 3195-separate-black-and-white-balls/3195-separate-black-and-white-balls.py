class Solution:
    def minimumSteps(self, s: str) -> int:
        def min_steps_to_group_balls(s):
            n = len(s)
            steps = 0
            black_so_far = 0
            for i in range(n):
                if s[i] == '1':
                    black_so_far += 1
                else:
                    steps += black_so_far

            return steps


        result= min_steps_to_group_balls(s)
        return result
        
        