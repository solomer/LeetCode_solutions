//Problem: 1732. Find the Highest Altitude
//Difficulty: Easy
//Link : https://leetcode.com/problems/find-the-highest-altitude/
//Author: solomer

int largestAltitude(int* gain, int gainSize) {
    int alt[gainSize+1];
    alt[0]=0;
    int altitude=0;
    for(int i=1;i<gainSize+1;i++){
        alt[i]=alt[i-1]+gain[i-1];
        if(altitude<alt[i]){
            altitude=alt[i];
        }
    }

    return altitude;
}