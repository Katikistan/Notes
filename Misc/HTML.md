
HTML files require certain elements to set up the document properly. We can let web browsers know that we are using HTML by starting our document with a _document type declaration_.

The declaration looks like this: `<!DOCTYPE html>`


# Tags
`<html>`: To create HTML structure and content, we must add opening and closing `<html>` tags after declaring `<!DOCTYPE html>`:


`<Body>`: The `<body>` tag in HTML contains all of the page’s visible content.
# Comments
`<!-- Outer comment <!-- Inner comment --> This text will render. -->`
# Classes

# Elements
element has a start < x > and and end < /x >


`<a>`: Creates a link to another page or to a location in the current page.

`<abbr>`:Indicates an acronym or abbreviation of a longer word or phrase.

`<acronym>`: Creates text that will be displayed when hovered over.

`<b>`: Used to draw attention to a section of text, usually rendered in boldface.

`blockquote`: Represents a section of a document which contains a longer quotation, usually spanning multiple lines.

`<br>`: make a line break, it's unique in the sense that it doesn't use a closing tag

`<button>`: Represents a button meant to be clicked by the user.

`<canvas>`: Creates graphics and animations in the page for JavaScript and WebGL to interact with

`center`:Displays its contents centered horizontally in the containing element. This is now deprecated and CSS should be used instead.

`cite`:Represents a citation to a referenced work such as a book, a song, or a painting.

`col`:Creates properties for table columns, including styling and attributes, often used within a `<colgroup>` to apply them to multiple columns simultaneously.

`datalist`: Displays pre-defined values to a user while typing into an input box

`<dd>`: Describes details found inside a `<dl>` element. It usually comes with at least one corresponding `<dt>` term tag.

`del`: Shows text that is to be removed from a document, usually rendered in strike-through text.

`<div>`: Represents a generic division of content. It has no semantic meaning, but will separate its contents from the rest of the document.

`<dl>`: Displays terms and details, commonly for metadata purposes.

`<h1> - <h6>`: headings

`<dt>`:Describes a term found inside a `<dl>` tag. It usually comes with at least one corresponding `<dd>` details tag.

`<em>`: will emphasize text, generally render as _italic_ emphasis.

`<embed>`: Inserts external content such as a video, image, page, and more.

`<form>`: Represents an interface to collect and submit user supplied information. This can include open ended text inputs, radio buttons, calendar information, and more.

`<head>`: Represents a collection of metadata related to the current document. It is an immediate child of the `<html>` element and may include other tags such as `<title>`, `<link>`, `<style>`, and `<script>`.

`<hr>`: Represents a semantic, horizontal line break between text elements.

`<html>`: Represents the entire HTML document.

`<i>`: Used to set off HTML text for some reason, as idiomatic, technical, taxonomical and so on. Typically rendered as italic.

`<iframe>`: Represents a container used to embed a second web page inside the current one. It can be used for content from the same domain as the parent, or even from a second domain. 

`<img>`: Displays an image on the web page. is self closing

`<input>`: Creates an interactive element, usually used within a form to allow user input. It can be used to make text boxes, color pickers, date pickers, and other UI elements.

`<kbd>`: Emphasizes characters to look like keys on a keyboard.

`<label>`: Identifies captions for other elements in an HTML document.

`<li>`: Represents a single item in a list of items. It and the other list items must be wrapped in an `<ol>, <ul>, or <menu>` tag.

`<link>`: Connects the current page with an external file.

`<menu>`: Represents an unordered list of items with more semantic meaning than a regular ul element.

`<meta>`: Represents an interface to provide metadata pertaining to the document. Metadata is data that is used to describe the document that contains it.

`<object>`: Represents an external resource such as an image, a nested browsing context, or content to be handled by a browser plugin.

`<ol>`: Represents an ordered list of items.

`<option>`: Represents one option in a dropdown created by the select tag.

`<output>`: Displays the result of a calculation or user action.

`<p>`: paragraph contain a block of plain text.

`<param>`: Used to pass parameters to a resource defined in an object tag.

`<picture>`: Represents multiple possible image sources to be applied to different devices and screen-sizes.

`<q>`: Used to represent a brief inline quotation.

`<s>`: Represents strike-through text that is no longer need, accurate, or correct.

`<script>`: Used to insert runnable code into a document, usually JavaScript. Can be used both to include a script within the HTML document, or to load an external script from another source.

`<select>`: Creates a drop-down list for the user to select from a number of option elements.

`<source>`: Represents an interface for adding source content to the page.

`<span>`: Used for grouping related text or elements for styling and scripting. Contains short pieces of text or other HTML. They are used to separate small pieces of content that are on the same line as other content.

`<strong>`: Used to identify text that is very important, or urgent. Will generally render as **bold** emphasis.

`<script>`:Applies CSS styles to an HTML document.

`<table>`: Represents an interface for adding tabular data to the page. Tables are two dimensional, made up of rows and columns, and can contain many types of content.

`<textarea>`: Displays multi-line plain-text input.

`<track>`: An HTML element that specifies subtitles, closed captioning, and other text files for media elements.

`<u>`: Displays HTML text with a non-textual annotation. The default rendering of this is a solid underline.

`<ul>`: Represents an unordered list of items.

`<video>`: Represents an interface for adding video content to the page.

# Attributes

HTML **attributes** are data that can be added to the opening tag of an HTML element. These attributes modify the default behavior of the element or provide additional information about it.

Attributes consist of a name and are usually set equal to a value. Values are enclosed in double or single quotation marks.

attributes:`<tagname attribute="value"></tagname>`

Attribute names are not case-sensitive, but it is good practice to write HTML markup in lowercase.
## list of attributes
### class
A **`class`** is an HTML attribute used to select one or more elements for CSS styling or JavaScript purposes.
#### For styling
The `class` attribute is used for assigning styles to elements. Multiple classes can be assigned to a single element in a space-separated list. (e.g. `class="class1 class2 class3"`)

Inside the stylesheet, a class name is selected with the following syntax: `.class-1 {}`


```
<!DOCTYPE html>
<html lang="en">
  <head>
    <style>
      .header-1 {
        background-color: lightblue;
        font-size: 40px;
      }
      .P1 {
        background-color: white;
        font-size: 25px;
      }
      .P2 {
        background-color: yellow;
        font-size: 20px;
      }
    </style>
    <title>Classes</title>
  </head>
  <body>
    <!--HEADER-->
    <div class="title">
      <h1 class="header-1">PIZZA MAN</h1>
    </div>
    <!--HISTORY-->
    <p class="P1">
      Pizza Man is a family-owned business since 1964. Our 
      goal is to make the best pizza and have it delivered 
      to your place.
    </p>
    <p class="P2">We have 3 locations so far and growing. 
    </p>
  </body>
</html>
```
gives:
![](https://i.imgur.com/ufEfMqF.png)### dir
the HTML global **`dir`** attribute sets the direction of an [HTML element](https://www.codecademy.com/resources/docs/html/elements)‘s text. This is useful for languages that use right-to-left 

`dir` can be set to the following values:

| Direction | Description                                                                                                          |
| --------- | -------------------------------------------------------------------------------------------------------------------- |
| `ltr`     | Default left-to-right text direction, i.e., English.                                                                 |
| `rtl`     | Right-to-left text direction, i.e., Arabic.                                                                          |
| `auto`    | The browser figures out the text direction based on the content (only recommended if the text direction is unknown). |
```ad-attention
title: Note
Always declare the language using the `lang` attribute in conjunction with setting the text direction with the `dir` attribute. Language declarations do not imply directionality or vice versa. The two must be set separately.
```
### id
Used to specify a unique id for an HTML element, which cannot be shared across multiple elements within the same HTML document.

Element with a defined `id` attribute that serves as a bookmark:
`<h3 id="my-city">About my city</h3>`

Link to the bookmark:
`<a href="#my-city">Navigate to the section about my city</a>`
A link can also target a location on another page:
`<a href="city.html#my-city">Jump to the section about my city</a>`

Clicking on the link in the examples above will direct the browser screen to the location where `id` is `"my-city"` (either on the same page or on another page).
#### Styling
Similarly to the `class` attribute, `id` is typically used to assign styles to the element it identifies. However, only one specific element can be targeted with `id` (compared to the `class` attribute which can be used to target multiple elements at once).

Styling via `id` in a stylesheet:

```
#my-city {
  color: #ff0000;
}
```
The HTML element with `id` is selected in CSS for styling using `#` followed by the `id` value. This applies to internal or external ruleset styling methods. The example above applies a color to the designated element.
### src
The **`src`** attribute specifies the location of a digital source, which is typically a URL or a [file path] It is required for HTML elements like [`<img>`](https://www.codecademy.com/resources/docs/html/elements/img) so that they can appear on a website or application.
### style
### title

## example
Using an [`<img>`](https://www.codecademy.com/resources/docs/html/elements/img) element, which is commonly used to display images, reveals several attributes, such as `src`, `width`, and `height`. These attributes exert significant influence over the manner in which the image appears on the web page. The dimensions of the particular element, once specified, enable precise control over the end result.

```
<img src="source_of_image.png" width="500" height="600"/>
```
### disabled 
The `disabled` attribute is applied to form elements like buttons and inputs to make them nonfunctional:
# File paths
# Entities
# Lists
# Tags
# Images
```
<img src="image-location.jpg" />
```
The `<img>` tag has a required _attribute_ called `src`. The `src` attribute must be set to the image’s _source_, or the location of the image. In this case, the value of `src` must be the _uniform resource locator_ (URL) of the image. A URL is the web address or local address where a file is stored.