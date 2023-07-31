#!/usr/bin/env python
# coding: utf-8

# In[19]:


def SelectionSort(arr, size):
    for s in range(size):
        min=s
        
        for i in range(s+1,size):
            if arr[i]<arr[min]:
                min=i
    
        (arr[s],arr[min])=(arr[min],arr[s])  





def BubbleSort(arr):
    n = len(arr)
    for i in range(n):
        for j in range(0,n-1-i):
            if arr[j]>arr[j+1]:
                arr[j],arr[j+1]=arr[j+1],arr[j]
                

                
arr=[24,23,54,867,45,56,98,45,34,87]
arr1=[24,23,54,867,45,56,98,45,34,87]
size=len(arr)

BubbleSort(arr)
print("The Sorted Array using Bubble Sort: ")
for i in range(size):
    print(arr[i])

SelectionSort(arr1, size)
print("The Sorted Array using Selection Sort: ")
print(arr1)


# In[ ]:





# In[ ]:




