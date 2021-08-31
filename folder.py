import os
import fileinput
import sys


directory = str(input())

  

path = "K:\data-structures\\heap\{} ".format(directory)
pathF = "K:\data-structures\\heap\{}\README.md ".format(directory)


os.mkdir(path)
os.chdir(path)

f1= open("{}.cpp".format(directory),"w+")
with open("K:\data-structures\copyText.text") as f:
    with open("{}.cpp".format(directory),"w+") as f1:
        for line in f:
            f1.write(line)
f1.close()
f= open("README.md","w+")

f.write("# {}\n\n".format(directory))
f.write("## Problem Description\n\n\n\n")
f.write("## Link\n\n")
f.close()

cont = input(" Type y to continue making headers anc class file::  ")
if(cont == 'y' or cont == 'Y' or cont == 'YES' or cont == 'Yes'):
    a = "### "

    def replace(file, searchExp, replaceExp):
        for line in fileinput.input(file, inplace=1):
            line = line.replace(searchExp, replaceExp)
            sys.stdout.write(line)

    arr = ["Input Format","Output Format","Example Input","Example Output","Example Explanation","Example :","Example:","For Example"]

    for i in arr:
        replace(pathF,i, a + i)

    f = open("{}.cpp".format(directory),"r") 
    list_of_lines = f.readlines()
    f.close()

    i = 13
    while (i < len(list_of_lines)):
        if(list_of_lines[i].find("Solution") != -1):
            list_of_lines[9] = "\t" + list_of_lines[i].partition("{")[0] + ";\n"
            break
        i += 1

    f = open("{}.cpp".format(directory),"w+") 
    f.writelines(list_of_lines)
    f.close() 