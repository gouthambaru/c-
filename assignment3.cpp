#include <iostream>
#include<bits/stdc++.h>
//#include<conio.h>
using namespace std;
#include<cstdlib>
#include<ctime>
int i,j,k,l;
int r,c,point;
int tic[3][3];
int display(int *array,int len,int depth);
void score(int *array1,int r,int c);
int main() {
		display((int *)tic,3,3);
		
		while(true){
			while(true){
				srand(time(NULL));
				int random_num=rand()%3;
				int random_num1=rand()%3;
				//cout << random_num << random_num1;
			
				if  (tic[random_num][random_num1]!=2 &&  tic[random_num][random_num1]!=1){
			
					
						tic[random_num][random_num1]={1};
						cout << "Logic is working";
						break; 
						break;}
					}
		
						 		
				
					
			cout << "\n";
			display((int *)tic,3,3);
			cout << "\n";		
			cout << "Now it is your turn. Please enter your choice of row and column" << endl;
			score((int *)tic,3,3);
			cin >> k >> l;
			
			while (k >= 3 || l >= 3){
				cin.clear();
				cout << "Enter again";
				cin >> k >> l;
														
				}
                              

			
			tic[k][l]=2; 
			//score((int *)tic,3,3);
			}
			}
int display( int *array,int len,int dep) {
        for (i=0;i<len;i++){
                for (j=0;j<dep;j++){
                     
			cout << tic[i][j];
                        }
		cout << "\n";
               
                }
	}

void  score(int *array1,int c, int r){
	int final_score=0;
	int final_score_hum=0;
	

	for (i=0;i<c;i++){
		int point=0;
		int point1=0;
		int check=0;
		int check1=0;
		for (j=0;j<r;j++){
			if (tic[i][j]==1){
				point++;
				//cout << "The point is" << point;
				}
			else if (tic[i][j]==2){
				point1++;
				//cout << "the point 1 is" << point1;
				}
			if (tic[j][i]==1){
				check++;
				}
			else if (tic[j][i]==2){
				check1++;
				}

			}	
		if(point==c){
			//cout << "Computer score is" << point/3 << endl;
			final_score++;
			}
		else if(point1==c){
			//cout << "User score is" << point1/3;
			final_score_hum++;
			
			}
		

		if(check==c){
			cout << "Computer score is" << point/3 << endl;
			final_score++;
			//cout << "comp score" << final_score;
			}
		else if(check1==c){
			final_score_hum++;
			//cout << "human score" << final_score_hum;
		}
		}
		cout << "comp score" << final_score;
		cout << "User score" << final_score_hum;
		}		



