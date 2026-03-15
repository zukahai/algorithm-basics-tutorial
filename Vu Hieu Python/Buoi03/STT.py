import speech_recognition as sr

r = sr.Recognizer()

with sr.Microphone() as source:
    print("🎤 Nói đi...")
    audio = r.listen(source)

try:
    text = r.recognize_google(audio, language="vi-VN")
    print("📝 Bạn nói:", text)
except sr.UnknownValueError:
    print("❌ Không nhận diện được")
except sr.RequestError as e:
    print("❌ Lỗi dịch vụ:", e)
