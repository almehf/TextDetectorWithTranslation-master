# TextDetectWithTranslation
Text detection with MLKit and google translation API to translate the detected text.<br><br>
This app detects the text from a picture input using camera or photos gallery of the iPhone/Simulator. The app uses on device <a href="https://firebase.google.com/docs/ml-kit/ios/recognize-text"> Text Recognition </a> in iOS using <a href = "https://firebase.google.com/docs/ml-kit/"> MLKit </a> in <a href = "https://firebase.google.com/"> Firebase </a> by Google and then translates the detected text in chosen language using <a href = "https://cloud.google.com/translate/"> Google Cloud Translate API</a>.


<br>
You would need to add GoogleService-Info.plist file to your project for firebase integration in order to use MLKit.
Refer <a href="https://console.firebase.google.com/u/1/project/mlkit-in-ios/overview">these </a> easy steps for the same. You will have to login to your gmail account for accessing the console to firebase.
<br>
<br>
![textdetect](https://user-images.githubusercontent.com/14230368/51840159-5c466e00-2331-11e9-8841-9dc104fe0b93.gif)
