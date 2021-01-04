#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>
#icludee <iomainp>
using namespace std;



void printDiamond(ofstream &dout, char ch, int v1);		// D, S, T; will only have one output value
void printTriangle(ofstream &dout, char ch, int v1);
void printSquare(ofstream &dout, char ch,  int v1);
void printRectangle(ofstream &dout, char ch, int v1, int v2);	// R will have two output values



int main(){

	char shape, ch;
	int v1,v2;

	ifstream din;
	ofstream dout;

	din.open("infile.txt");

	if(din.fail())
		{
		cout<<" File location not valid, no file found";
			return 1;
		}
		else
		{
			dout.open("outfile.txt");

		while(din>> shape)
		{
			if(shape!= 'E')
			 {
				if(shape == 'S')
				{
					din>>ch>>v1;
					printSquare(dout,ch,v1);			//calling printSquare method
				}
				else if(shape == 'T')
				{
					din>>ch>>v1;
					printTriangle(dout,ch,v1);
				}
				else if (shape == 'D')
				{
					din>>ch>>v1;
					printDiamond(dout,ch,v1);
				}
				else if (shape == 'R")
				{
					din>>ch>v1>>v2;
					printRectangle(dout, ch,v1,v2);
				}

			}
		}
	din.close();
	dout.close();
		}
	return 0;
	}


void printDiamond(ofstream &dout, char ch, int size){

	int i, j;

	for(i = 0; i < size; i++)
	{
		for(j = 0; j < i; j++)							// Top triangle
			{
				dout << ch;
			}
			dout << endl;
		}
		dout << endl;


	for (i = size -2; i> 0; i--)
		{
		for (j = 1; j <i; j++)
			{
			dout << ch;
			}
			dout << endl;
		}
	}


void printSquare(ofstream &dout, char ch, int v1)
	{
	int i, j;


	for(i = 0; i<v1; i++)										//Making a square
	{
		for(j = 0; j<v1; j++)
			{
				dout << ch ;
			}
		dout << endl;
	}
}


void printTriangle(ofstream &dout, char ch, int v1)
{
	int i, j;


	for(i = 0; i < v1; i++)
	{
		for(j = 0; j <=i; j++)
			{
			dout << ch;
			}
			dout << endl;
		}
		dout << endl;
	}


void printRectangle(ofstream &dout, char ch, int v1, int v2)
{
	int i, j;

	for(i=0; i < v1; i++)
		{
			for(j=0; j < v2; j++)
			{
				dout << ch;
			}
			dout << endl;
	}
}
