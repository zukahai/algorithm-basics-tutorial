from gtts import gTTS
import os

text = "Xin chào Hiếu. Rất vui được gặp bạn"
tts = gTTS(text=text, lang='vi')

tts.save("abc.mp3")
os.system("start abc.mp3")