#isDuplicate
# class Solution:
#     def hasDuplicate(self, nums: List[int]) -> bool:
#         curr = 0
#         while curr < len(nums)-1 :
#             curr = curr+1
#             for x in nums[curr+1 :]:
#                 if nums[curr] == x :
#                     return True
#         return False             


# isAnagram
# class Solution:
#     def isAnagram(self, s: str, t: str) -> bool:
#         counter = {}
#         for char in s:
#             if not char in counter :
#                 counter[char] = 1
#             else:    
#                 counter[char] +=1
#         for charr in t:
#             if charr in counter and counter[char]>=0  :
#                 counter[charr] -= 1
#             else :
#                 return False
#         return all(not value for value in counter.values())  



# class Solution:
#     def twoSum(self, nums: List[int], target: int) -> List[int]:
#         for i in range(0,len(nums)):
#             for j in range(i+1,len(nums)):
#                 if nums[i] + nums[j] == target :
#                     return [i,j]



# groupAnagrams 
# class Solution:
#     def isAnagram(self, s: str, t: str) -> bool:
#         counter = {}
#         for char in s:
#             if not char in counter :
#                 counter[char] = 1
#             else:    
#                 counter[char] +=1
#         for charr in t:
#             if charr in counter and counter[char]>=0  :
#                 counter[charr] -= 1
#             else :
#                 return False
#         return all(not value for value in counter.values())  

#     def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
#         sol:List[List[str]] = []
#         for cur in range(0,len(strs)) :
#             shouldSkip = False
#             for prev in sol :
#                 if self.isAnagram(prev[0] , strs[cur]):
#                     shouldSkip = True
#             if shouldSkip :
#                 continue        
#             curLst =[strs[cur]]
#             for nxt in range(cur+1,len(strs)) :
#                 if self.isAnagram(strs[cur] ,strs[nxt] ) :
#                     curLst.append(strs[nxt])
#             sol.append(curLst)
#         return sol     

# top-k-elements-in-list
# class Solution:
#     def topKFrequent(self, nums: List[int], k: int) -> List[int]:
#         sol:Dict[int:int] = {}
#         for item in nums :
#             if item in sol.keys() :
#                 sol[item]+=1
#             else :
#                 sol[item] = 1
#         sol = dict(sorted(sol.items() ,key = lambda item:item[1], reverse=True ))
       
#         return list(sol.keys())[:k]          
# import json
# class Solution:

#     def encode(self, strs: List[str]) -> str:
#         # if strs :
#         #     D = ''
#         #     for stn in strs :
#         #         D = D + "</>" + stn
#         #     return D             
#         # return "None"
#         return json.dumps(strs)        

#     def decode(self, s: str) -> List[str]:
#         # if s == "None" :
#         #     return []
#         # else :
#         #     return s.split("</>")
#         return json.loads(s)  



# %  Q(2) --> a
# nT = -20:0.5:20 ;
# x=0.95.^nT; 
# figure('Position', [100, 100, 1000, 350]);
# subplot (1,1,1); 
# stem (nT,x,'cyan','MarkerSize', 3); 
# grid on ;
# xlabel ('nT'); 
# ylabel('x1(n)'); 
# title ('x1(t) =  0.95^t'); 


# %  Q(2) --> a
# nT = -20:0.5:20 ;
# w= 0.1 * pi ;
# x=sin( w * nT ); 
# figure('Position', [100, 100, 1000, 400]);
# subplot (1,1,1); 
# stem (nT,x,'magenta','MarkerSize', 3); 
# grid on ;
# xlabel ('nT'); 
# ylabel('x2(n)'); 
# title ('x2(t) = sin( w * t )'); 

# % Q-->2

# nT = -20:0.5:20;  
# x1 = 0.95.^nT;     
# w = 0.1 * pi; 
# x2 = sin(w * nT); 

# figure('Position', [100, 100, 1200, 600]);

# subplot(1, 2, 1); 
# stem(nT, x1, 'b', 'MarkerSize', 4 ,'LineWidth', 0.5); 
# xlabel('nT');     
# ylabel('x1(n)');  
# title('x1(n) = 0.95^n'); 
# grid on; 

# subplot(1, 2, 2); 
# stem(nT, x2, 'r' , 'MarkerSize', 4 ,'LineWidth', 0.5); 
# xlabel('nT' ); 
# ylabel('x2(t)'); 
# title('x2(t) = sin(wt)'); 
# grid on; 