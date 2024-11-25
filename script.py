import requests as re 

respuesta = re.get("https://google.com")

html = respuesta.text

print(html)