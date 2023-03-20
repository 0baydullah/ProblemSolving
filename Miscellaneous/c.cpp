###------Obaydullah Khan
###-------ID: 201002093


# Implementation of LIST

myList = []  # list declaration

myList.append(6)  # add element to list
myList.append(9)  # add element to list
myList.append(69)  # add element to list
myList.append(96)  # add element to list

print("The List : ", myList)  # printing whole list

myList.pop()  # Remove element from list

print("List after removing : ", myList)
print("\n")

# Implementation of TUPLE

myTuple = tuple(myList)  # Tuple Declaration

print("The Tuple is : ", myTuple)  # Printing Tuple ## Tuple cant be changed
print("\n")

# Implementation of Set

mySet = set()  # Set Declaration

mySet.add(00)  # add element to Set
mySet.add(99)  # add element to Set
mySet.add(77)  # add element to Set

print("The Set is : ", mySet)  # printing Set

mySet.remove(77)  # Remove element from set
print("Set after removing : ", mySet)
print("\n")

# Implementation of Dictionary

myDictionary = {}

myDictionary["ML"] = "Sadia Afroze"  # Adding course name and faculty name as key value pair
myDictionary["DSA"] = "Sultana Umme Habiba"  # Adding course name and faculty name as key value pair
myDictionary["AI"] = "Saurav Das"  # Adding course name and faculty name as key value pair

print("Course name and Faculty names key value pair : ", myDictionary)  # Printing Dictionary

del myDictionary["AI"]  # Deleting key-value pair

print("Dictionary after Removing : ", myDictionary)
