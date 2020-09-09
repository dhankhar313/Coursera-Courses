# Quiz

### Question 1
What of these libraries are associated with web scraping?
### Answer
    BeautifulSoup
    requests

### Question 2
What are valid methods for getting an div element through BeautifulSoup?
### Answer
    soup.find_all('div')
    soup['div']
    soup.find('div')

### Question 3
How can you search for elements of any type that has a given class?
### Answer
    Through soup.find_all(None, {'class':'given_class'})

### Question 4
What are some of the key functionalities of the browser developer tools?
### Answer
    A JavaScript console that allows you to run code on the web page

    A interactive inspection of the web page soure code
    
    An analyzer for all the traffic that happens when you interact with a web page

### Question 5
Why would you use a selector on BeautifulSoup?
### Answer
    Because you don't have to do a lot of source code exploration in order to use it
    
    Because you can have it easily through the inspect element functionality of the DevTools

    Because it allows you to navigate on complex patterns

### Question 6
What of those are valid ways of performing a POST request?
### Answer
    r = req.post(LINK)
     
    params = json.dumps({'username': 'admin'})
    headers = {'Content-Type': 'application/json'}
    r = req.post(LINK, params, headers=headers)
    
### Question 7
Why would you use a Session object for performing GET and POST requests?
### Answer
    In order to store cookies and mantain the connection state

