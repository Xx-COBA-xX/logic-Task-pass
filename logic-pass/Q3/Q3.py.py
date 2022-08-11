def Count_Char (The_String , The_Char) :
    Counter = 0
    for Char in The_String :
        if The_Char == Char :
            Counter += 1
    return Counter

In_String = input("Enter The String : ")
In_Char = input("Enter Char : ")

print (Count_Char(In_String , In_Char))


