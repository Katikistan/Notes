We can create an instance of the `Flask` class. Let’s save the application object in a variable called `app`:
`app = Flask(__name__)`

When creating a `Flask` object, we need to pass in the name of the application. In this case, because we are working with a single module, we can use the special Python variable, `__name__`.

The value of `__name__` depends on how the Python script is executed. If we run a Python script directly, such as with `python app.py` in the terminal, then `__name__` is equal to the string `'__main__'`. On the other hand, if the script is being imported as a module into another Python script, then `__name__` would be equal to its filename.

# Decorators in python
Decorators allow us to wrap another function in order to extend the behaviour of the wrapped function, without permanently modifying it. But before diving deep into decorators let us understand some concepts that will come in handy in learning the decorators.

in Python, functions are [**first class objects**](https://www.geeksforgeeks.org/first-class-functions-python/) which means that functions in Python can be used or passed as arguments. 

### **Properties of first class functions:**
- A function is an instance of the Object type.
- You can store the function in a variable.
- You can pass the function as a parameter to another function.
- You can return the function from a function.
- You can store them in data structures such as hash tables, lists, ...
```python
# Python program to illustrate functions 
# can be treated as objects 
def shout(text): 
	return text.upper() 
print(shout('Hello')) 
yell = shout 
print(yell('Hello')) 

# Python program to illustrate functions 
# can be passed as arguments to other functions 
def shout(text): 
	return text.upper() 

def whisper(text): 
	return text.lower() 

def greet(func): 
	# storing the function in a variable 
	greeting = func("""Hi, I am created by a function passed as an argument.""") 
	print (greeting) 

greet(shout) 
greet(whisper) 
```
In Decorators, functions are taken as the argument into another function and then called inside the wrapper function.


```python
@gfg_decorator
def hello_decorator():
    print("Gfg")

# Above code is equivalent to 
def hello_decorator():
    print("Gfg") 
hello_decorator = gfg_decorator(hello_decorator)

```

# Routing
Each time we visit a URL in a browser, it makes a request to the web server, which processes the request and returns a response back to the browser. In our Flask app, we can create _endpoints_ to handle the various requests. Requests from different URLs can be directed to different endpoints in a process called _routing_.

To build a route, we need to first define a function, known as a _view function_, that contains the code for processing the request and generating a response. The response could be something as simple as a string of text. Then, we can use the `route()` decorator to bind a URL to the view function such that the function will be triggered when the URL is visited:
```python
@app.route('/')
def home():    
	return 'Hello, World!'
```
The `route()` decorator takes the URL path as parameter, or the part of the URL that follows the domain name. All URL paths must start with a leading slash. In the above example, if we visit [http://localhost:5000/](http://localhost:5000/) in the browser, `Hello, World!` will be displayed on the webpage.


```python
from flask import Flask
app = Flask(__name__)
@app.route('/')
@app.route('/home')
def home():
return '<h1>Hello, World!</h1>'

@app.route('/reporter')
def reporter():
return '''
<h2>Reporter Bio</h2>
<a href="/">Return to home page</a>
'''
```
