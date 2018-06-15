import pytesseract as ocr 
from PIL import Image


phrase = ocr.image_to_string(Image.open('placa_saida.jpg'), lang='por')
print(phrase)