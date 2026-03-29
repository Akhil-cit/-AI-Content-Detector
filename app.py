from app import Flask, request, jsonify, render_template
import subprocess
import os

app = Flask(__name__)

UPLOAD_FOLDER = "uploads"
os.makedirs(UPLOAD_FOLDER, exist_ok=True)

@app.route("/")
def home():
    return render_template("index.html")

@app.route("/analyze", methods=["POST"])
def analyze():
    file = request.files["image"]
    filepath = os.path.join(UPLOAD_FOLDER, file.filename)
    file.save(filepath)

    # run C++ exe with image path
    result = subprocess.run(
    ["./main", filepath],
    capture_output=True,
    text=True
)

    return jsonify({"result": result.stdout.strip()})

if __name__ == "__main__":
    app.run(debug=True)