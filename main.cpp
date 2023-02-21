//5 judges score 0-10
//decimal scores are allow ex: 8.3
//drop the lowest and highest score
//and average the three middle scores

float avgScore(float total){ //a
    float avg = total/3;
    return avg;
}

float lowestScore(float a, float b, float c, float d, float e){ //b
    float lowest;
    if(a<b && a<c && a<d && a<e){
        lowest = a;
    } else if(b<a && b<c && b<d && b<e){
        lowest = b;
    }else if(c<a && c<b && c<d && c<e){
        lowest = c;
    }else if(d<a && d<b && d<c && d<e){
        lowest = d;
    }else{
        lowest = e;
    }
    return lowest;
}

float highestScore(float f, float g, float h, float i, float j){ //c
    float highest;
    if(f>g && f>h && f>i && f>j){
        highest = f;
    } else if(g>f && g>h && g>i && g>j){
        highest = g;
    }else if(h>f && h>g && h>i && h>j){
        highest = h;
    }else if(i>f && i>g && i>h && i>j){
        highest = i;
    }else{
        highest = j;
    }
    return highest;
}

#include <iostream>
int main() {
    float score1, score2, score3, score4, score5;
    int numOfScores=0;
    bool validScore1=true, validScore2=true, validScore3=true, validScore4=true, validScore5=true;

    do{
        while(validScore1)
        {
            std::cout << "Enter score 1: \n";
            std::cin >> score1;

            if(score1 >= 0 && score1 <= 10){
                numOfScores = numOfScores + 1;
                validScore1 = false;
            }
            else{
                std::cout << "Error! Please enter a valid score!\n";
            }
        }
        while(validScore2)
        {
            std::cout << "Enter score 2: \n";
            std::cin >> score2;
            if(score2 >= 0 && score2 <= 10){
                numOfScores = numOfScores + 1;
                validScore2 = false;
            }else{
                std::cout << "Error! Please enter a valid score!\n";
            }
        }
        while(validScore3)
        {
            std::cout << "Enter score 3: \n";
            std::cin >> score3;

            if(score3 >= 0 && score3 <= 10){
                numOfScores = numOfScores + 1;
                validScore3 = false;
            }else{
                std::cout << "Error! Please enter a valid score!\n";
            }
        }
        while(validScore4)
        {
            std::cout << "Enter score 4: \n";
            std::cin >> score4;
            if(score4 >= 0 && score4 <= 10){
                numOfScores = numOfScores + 1;
                validScore4 = false;
            }else{
                std::cout << "Error! Please enter a valid score!\n";
            }
        }
        while(validScore5)
        {
            std::cout << "Enter score 5: \n";
            std::cin >> score5;
            if(score5 >= 0 && score5 <= 10){
                numOfScores = numOfScores + 1;
                validScore5 = false;
            }else{
                std::cout << "Error! Please enter a valid score!\n";
            }
        }
    }while(numOfScores < 5);

    float lower = lowestScore(score1, score2, score3, score4,score5);
    float higher = highestScore(score1, score2, score3, score4,score5);
    std::cout << "Lowest score: " << lower << std::endl;
    std::cout << "Highest score: " << higher << std::endl;

    float total = score1 + score2 + score3 + score4 + score5;
    total = total - lower - higher;
    std::cout << "Total score: " << total << std::endl;
    std::cout << "Score average: " << avgScore(total)<< std::endl;

    return 0;
}