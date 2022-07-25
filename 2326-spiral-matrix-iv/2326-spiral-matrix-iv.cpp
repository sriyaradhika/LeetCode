/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>> res(m,vector<int>(n,-1));
        int sr=0,sc=0,er=m-1,ec=n-1;
        int len=m*n;
		int cnt=0;
        while(cnt<len && head!=NULL){
            for(int i=sc;i<=ec && head != NULL;i++)
            { 
                    res[sr][i]=head->val;
                    head=head->next;
                cnt++;
            }                
            sr++;
            for(int i=sr;i<=er && head != NULL;i++){
               
                res[i][ec]=head->val;
                head=head->next;
                cnt++;
            }
            ec--;
            for(int i=ec;i>=sc&& head != NULL;i--){
                
                res[er][i]=head->val;
                   head=head->next;
                cnt++;
                }
            er--;
            for(int i=er;i>=sr&& head != NULL;i--){
             
                res[i][sc]=head->val;
                 head=head->next;
                cnt++;
            }
            sc++;
        }
        return res;
    }
};