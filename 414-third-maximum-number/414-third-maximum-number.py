class Solution:
    def thirdMax(self, nums: List[int]) -> int:
        res = [*set(nums)];
        res.sort();
        if(len(res)<3):
            return res[len(res)-1];
        # print(res);
        return res[len(res)-3];