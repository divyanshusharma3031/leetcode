class Solution {
public:
    int minNumberOfHours(int initialEnergy, int initialExperience, vector<int>& energy, vector<int>& experience) {
        int ans=0;
        int n=experience.size();
        for(int i=0;i<n;i++)
        {
            initialEnergy=initialEnergy-energy[i];
            if(initialEnergy<=0)
            {
                ans=ans+1-initialEnergy;
                initialEnergy=1;
            }
            
            if(initialExperience<=experience[i])
            {
                ans=ans+experience[i]-initialExperience+1;
                initialExperience=experience[i]+initialExperience+experience[i]-initialExperience+1;
            }
            else
            {
                initialExperience=experience[i]+initialExperience;
            }
        }
        return ans;
    }
};