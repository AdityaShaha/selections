# -*- coding: utf-8 -*-
"""
Created on Sun Sep 11 23:37:00 2016

@author: Aditya
"""
def maximum(a,b):
    if(a>b):
        return 0
    else:
        return 1
        

num1 = input()

num2  = input()

count =0

bin_num1 = map(int,str("{0:b}".format(num1)))

bin_num2=  map(int,str("{0:b}".format(num2)))

if(maximum(len(bin_num1),len(bin_num2))==1):
    for i in range (0,len(bin_num2)-len(bin_num1)):
        bin_num1.insert(i,0)
else:
    for i in range (0,len(bin_num1)-len(bin_num2)):
        bin_num2.insert(i,0)

for i in range (len(bin_num1)):
    if(bin_num1[i]!=bin_num2[i]):
        count+=1

print(count)


        
