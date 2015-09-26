//
//  partition.cpp
//  test
//
//  Created by LiLingyu on 15/8/19.
//  Copyright (c) 2015年 LiLingyu. All rights reserved.
//

#include "partition.h"
void reOrderArray(vector<int> &array)
{
    int tmp = array[0];
    int i=0;
    int j=array.size()-1;
    while (i<j) {
        while (array[j]%2 == 0) {
            j--;
        }
        array[i]=array[j];
        while (array[i]%2 ==1 ) {
            i++;
        }
        array[j]=array[i];
    }
    array[i]=tmp;
}