# Week 4 Quiz
### Question 1
The format_address function separates out parts of the address string into new strings: house_number and street_name, and returns: "house number X on street named Y". The format of the input string is: numeric house number, followed by the street name which may contain numbers, but never by themselves, and could be several words long. For example, "123 Main Street", "1001 1st Ave", or "55 North Center Drive". Fill in the gaps to complete this function.
### Answer
```
def format_address(address_string):
    list1 = address_string.split()
    hno = list1[0]
    sno = " ".join(list1[1:])
    return f"house number {hno} on street named {sno}"


print(format_address("123 Main Street"))
# Should print: "house number 123 on street named Main Street"

print(format_address("1001 1st Ave"))
# Should print: "house number 1001 on street named 1st Ave"

print(format_address("55 North Center Drive"))
# Should print "house number 55 on street named North Center Drive"

```

### Question 2
The highlight_word function changes the given word in a sentence to its upper-case version. For example, highlight_word("Have a nice day", "nice") returns "Have a NICE day". Can you write this function in just one line?
### Answer
```
def highlight_word(sentence, word):
	return(sentence.replace(word,word.upper()))

print(highlight_word("Have a nice day", "nice"))
print(highlight_word("Shhh, don't be so loud!", "loud"))
print(highlight_word("Automating with Python is fun", "fun"))

```

### Question 3
A professor with two assistants, Jamie and Drew, wants an attendance list of the students, in the order that they arrived in the classroom. Drew was the first one to note which students arrived, and then Jamie took over. After the class, they each entered their lists into the computer and emailed them to the professor, who needs to combine them into one, in the order of each student's arrival. Jamie emailed a follow-up, saying that her list is in reverse order. Complete the steps to combine them into one list as follows: the contents of Drew's list, followed by Jamie's list in reverse order, to get an accurate list of the students as they arrived.
### Answer
```
def combine_lists(list1, list2):
  new_list = list2
  list1.reverse()
  for i in list1:
      new_list.append(i)
  return new_list
	
Jamies_list = ["Alice", "Cindy", "Bobby", "Jan", "Peter"]
Drews_list = ["Mike", "Carol", "Greg", "Marcia"]
print(combine_lists(Jamies_list, Drews_list))
```

### Question 4
Use a list comprehension to create a list of squared numbers (n*n). The function receives the variables start and end, and returns a list of squares of consecutive numbers between start and end inclusively. For example, squares(2, 3) should return [4, 9].
### Answer
```
def squares(start, end):
	return [int(n*n) for n in range(start,end+1)]

print(squares(2, 3)) # Should be [4, 9]
print(squares(1, 5)) # Should be [1, 4, 9, 16, 25]
print(squares(0, 10)) # Should be [0, 1, 4, 9, 16, 25, 36, 49, 64, 81, 100]
```

### Question 5
Complete the code to iterate through the keys and values of the car_prices dictionary, printing out some information about each one.
### Answer
```
def car_listing(car_prices):
  result = ""
  for i in car_prices:
    result += f"{i} costs {car_prices[i]} dollars" + "\n"
  return result

print(car_listing({"Kia Soul":19000, "Lamborghini Diablo":55000, "Ford Fiesta":13000, "Toyota Prius":24000}))
```

### Question 6
Taylor and Rory are hosting a party. They sent out invitations, and each one collected responses into dictionaries, with names of their friends and how many guests each friend is bringing. Each dictionary is a partial list, but Rory's list has more current information about the number of guests. Fill in the blanks to combine both dictionaries into one, with each friend listed only once, and the number of guests from Rory's dictionary taking precedence, if a name is included in both dictionaries. Then print the resulting dictionary.
### Answer
```
def combine_guests(guests1, guests2):
    new_dict = {}
    for i in guests1:
        if i in guests2:
            new_dict[i] = guests1[i]
        else:
            new_dict[i] = guests1[i]
    for i in guests2:
        if i not in new_dict:
            new_dict[i] = guests2[i]
    return new_dict


Rorys_guests = {"Adam": 2, "Brenda": 3, "David": 1, "Jose": 3, "Charlotte": 2, "Terry": 1, "Robert": 4}
Taylors_guests = {"David": 4, "Nancy": 1, "Robert": 2, "Adam": 1, "Samantha": 3, "Chris": 5}

print(combine_guests(Rorys_guests, Taylors_guests))
```

### Question 7
Use a dictionary to count the frequency of letters in the input string. Only letters should be counted, not blank spaces, numbers, or punctuation. Upper case should be considered the same as lower case. For example, count_letters("This is a sentence.") should return {'t': 2, 'h': 1, 'i': 2, 's': 3, 'a': 1, 'e': 3, 'n': 2, 'c': 1}.
### Answer
```
def count_letters(text):
    list1 = []
    for word in text:
        if len(word) > 1:
            for letter in word:
                if letter.isalpha():
                    if letter.isupper():
                        list1.append(letter.lower())
                    else:
                        list1.append(letter)
        else:
            if word.isalpha():
                if word.isupper():
                    list1.append(word.lower())
                else:
                    list1.append(word)
    list2 = list(dict.fromkeys(list1))
    string = ""
    temp = 0
    for i in list2:
        if temp > 0:
            string += ", "
        temp += 1
        string += f"'{i}': {list1.count(i)}"
    return "{" + string + "}"


print(count_letters("AaBbCc"))
# Should be {'a': 2, 'b': 2, 'c': 2}

print(count_letters("Math is fun! 2+2=4"))
# Should be {'m': 1, 'a': 1, 't': 1, 'h': 1, 'i': 1, 's': 1, 'f': 1, 'u': 1, 'n': 1}

print(count_letters("This is a sentence."))
# Should be {'t': 2, 'h': 1, 'i': 2, 's': 3, 'a': 1, 'e': 3, 'n': 2, 'c': 1}

```

### Question 8
What do the following commands return when animal = "Hippopotamus"?
```
>>> print(animal[3:6])
>>> print(animal[-5])
>>> print(animal[10:])

```
### Answer
pop, t, us

### Question 9
What does the list "colors" contain after these commands are executed?
```
colors = ["red", "white", "blue"]
colors.insert(2, "yellow")

```
### Answer
['red', 'white', 'yellow', 'blue']

### Question 10
What do the following commands return?
```
host_addresses = {"router": "192.168.1.1", "localhost": "127.0.0.1", "google": "8.8.8.8"}
host_addresses.keys()

```
### Answer
['router', 'localhost', 'google']
