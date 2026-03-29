#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

class MediaAnalyzer {
protected:

    string fname;
public:

    MediaAnalyzer(string f):fname(f){}

    void extract(){
        string cmd="exiftool \""+fname+"\" > result.txt";
        system(cmd.c_str());
        cout << "Metadata extracted!" << endl;
    }

    string checki(){
        fstream file("result.txt");
        string temp;
        string content="";

        while(getline(file,temp)){
            content=content+temp;
        }

       if (content.find("DALL-E") != string::npos) return "AI Generated";
else if (content.find("DALL·E") != string::npos) return "AI Generated";
else if (content.find("ChatGPT") != string::npos) return "AI Generated";
else if (content.find("GPT-4o") != string::npos) return "AI Generated";
else if (content.find("GPT-4") != string::npos) return "AI Generated";
else if (content.find("GPT-3") != string::npos) return "AI Generated";
else if (content.find("Midjourney") != string::npos) return "AI Generated";
else if (content.find("Stable Diffusion") != string::npos) return "AI Generated";
else if (content.find("Firefly") != string::npos) return "AI Generated";
else if (content.find("Runway") != string::npos) return "AI Generated";
else if (content.find("Sora") != string::npos) return "AI Generated";
else if (content.find("Pika") != string::npos) return "AI Generated";
else if (content.find("Gemini") != string::npos) return "AI Generated";
else if (content.find("Imagen") != string::npos) return "AI Generated";
else if (content.find("Leonardo") != string::npos) return "AI Generated";
else if (content.find("Canva") != string::npos) return "AI Generated";
else if (content.find("Adobe Generative") != string::npos) return "AI Generated";
else if (content.find("Adobe Firefly") != string::npos) return "AI Generated";
else if (content.find("trainedAlgorithmicMedia") != string::npos) return "AI Generated";
else if (content.find("digitalArtWork") != string::npos) return "AI Generated";
else if (content.find("Bing Image") != string::npos) return "AI Generated";
else if (content.find("Ideogram") != string::npos) return "AI Generated";
else if (content.find("Playground AI") != string::npos) return "AI Generated";
else if (content.find("NightCafe") != string::npos) return "AI Generated";
else if (content.find("Artbreeder") != string::npos) return "AI Generated";
else if (content.find("Deep Dream") != string::npos) return "AI Generated";
else if (content.find("Synthesia") != string::npos) return "AI Generated";
else if (content.find("HeyGen") != string::npos) return "AI Generated";
else if (content.find("Luma") != string::npos) return "AI Generated";
else if (content.find("Kling") != string::npos) return "AI Generated";
else if (content.find("ComfyUI") != string::npos) return "AI Generated";
else if (content.find("InvokeAI") != string::npos) return "AI Generated";
else if (content.find("Automatic1111") != string::npos) return "AI Generated";
else if (content.find("ControlNet") != string::npos) return "AI Generated";
else if (content.find("Dreamstudio") != string::npos) return "AI Generated";
else if (content.find("DreamBooth") != string::npos) return "AI Generated";
else if (content.find("Diffusers") != string::npos) return "AI Generated";
else if (content.find("Hugging Face") != string::npos) return "AI Generated";
else if (content.find("Civitai") != string::npos) return "AI Generated";
else if (content.find("Lexica") != string::npos) return "AI Generated";
else if (content.find("BlueWillow") != string::npos) return "AI Generated";
else if (content.find("Stablecog") != string::npos) return "AI Generated";
else if (content.find("Mage.space") != string::npos) return "AI Generated";
else if (content.find("Dezgo") != string::npos) return "AI Generated";
else if (content.find("Prodia") != string::npos) return "AI Generated";
else if (content.find("Getimg") != string::npos) return "AI Generated";
else if (content.find("Clipdrop") != string::npos) return "AI Generated";
else if (content.find("Stability AI") != string::npos) return "AI Generated";
else if (content.find("StabilityAI") != string::npos) return "AI Generated";
else if (content.find("Replicate") != string::npos) return "AI Generated";
else if (content.find("Fotor") != string::npos) return "AI Generated";
else if (content.find("Craiyon") != string::npos) return "AI Generated";
else if (content.find("WOMBO") != string::npos) return "AI Generated";
else if (content.find("Dream by WOMBO") != string::npos) return "AI Generated";
else if (content.find("Jasper Art") != string::npos) return "AI Generated";
else if (content.find("Photosonic") != string::npos) return "AI Generated";
else if (content.find("Writesonic") != string::npos) return "AI Generated";
else if (content.find("Tome") != string::npos) return "AI Generated";
else if (content.find("Kaiber") != string::npos) return "AI Generated";
else if (content.find("Genmo") != string::npos) return "AI Generated";
else if (content.find("Haiper") != string::npos) return "AI Generated";
else if (content.find("Invideo AI") != string::npos) return "AI Generated";
else if (content.find("Fliki") != string::npos) return "AI Generated";
else if (content.find("Pictory") != string::npos) return "AI Generated";
else if (content.find("Veed") != string::npos) return "AI Generated";
else if (content.find("Descript") != string::npos) return "AI Generated";
else if (content.find("ElevenLabs") != string::npos) return "AI Generated";
else if (content.find("Murf") != string::npos) return "AI Generated";
else if (content.find("Speechify") != string::npos) return "AI Generated";
else if (content.find("Resemble AI") != string::npos) return "AI Generated";
else if (content.find("Play.ht") != string::npos) return "AI Generated";
else if (content.find("Voicify") != string::npos) return "AI Generated";
else if (content.find("Udio") != string::npos) return "AI Generated";
else if (content.find("Suno") != string::npos) return "AI Generated";
else if (content.find("Boomy") != string::npos) return "AI Generated";
else if (content.find("Soundraw") != string::npos) return "AI Generated";
else if (content.find("Aiva") != string::npos) return "AI Generated";
else if (content.find("Loudly") != string::npos) return "AI Generated";
else if (content.find("Beatoven") != string::npos) return "AI Generated";
else if (content.find("Mubert") != string::npos) return "AI Generated";
else if (content.find("DeepMind") != string::npos) return "AI Generated";
else if (content.find("Anthropic") != string::npos) return "AI Generated";
else if (content.find("Claude") != string::npos) return "AI Generated";
else if (content.find("Cohere") != string::npos) return "AI Generated";
else if (content.find("Mistral") != string::npos) return "AI Generated";
else if (content.find("Llama") != string::npos) return "AI Generated";
else if (content.find("Meta AI") != string::npos) return "AI Generated";
else if (content.find("Copilot") != string::npos) return "AI Generated";
else if (content.find("Microsoft Designer") != string::npos) return "AI Generated";
else if (content.find("Microsoft Copilot") != string::npos) return "AI Generated";
else if (content.find("Grok") != string::npos) return "AI Generated";
else if (content.find("xAI") != string::npos) return "AI Generated";
else if (content.find("Perplexity") != string::npos) return "AI Generated";
else if (content.find("You.com") != string::npos) return "AI Generated";
else if (content.find("Poe") != string::npos) return "AI Generated";
else if (content.find("Character AI") != string::npos) return "AI Generated";
else if (content.find("Runway ML") != string::npos) return "AI Generated";
else if (content.find("Wonder Studio") != string::npos) return "AI Generated";
else if (content.find("D-ID") != string::npos) return "AI Generated";
else if (content.find("DeepFaceLab") != string::npos) return "AI Generated";
else if (content.find("FaceSwap") != string::npos) return "AI Generated";
else if (content.find("Reface") != string::npos) return "AI Generated";
else if (content.find("Wombo Dream") != string::npos) return "AI Generated";
else if (content.find("Starry AI") != string::npos) return "AI Generated";
else if (content.find("Foocus") != string::npos) return "AI Generated";
else if (content.find("SeaArt") != string::npos) return "AI Generated";
else if (content.find("TensorArt") != string::npos) return "AI Generated";
else if (content.find("PicFinder") != string::npos) return "AI Generated";
else if (content.find("Pixlr AI") != string::npos) return "AI Generated";
else if (content.find("Remove.bg") != string::npos) return "AI Generated";
else if (content.find("Photoroom") != string::npos) return "AI Generated";
else if (content.find("Luminar AI") != string::npos) return "AI Generated";
else if (content.find("Topaz") != string::npos) return "AI Generated";
else if (content.find("Gigapixel") != string::npos) return "AI Generated";
else if (content.find("Let's Enhance") != string::npos) return "AI Generated";
else if (content.find("Upscayl") != string::npos) return "AI Generated";
else if (content.find("Real-ESRGAN") != string::npos) return "AI Generated";
else if (content.find("GFPGAN") != string::npos) return "AI Generated";
else if (content.find("CodeFormer") != string::npos) return "AI Generated";
else if (content.find("InsightFace") != string::npos) return "AI Generated";
else if (content.find("SimSwap") != string::npos) return "AI Generated";
else if (content.find("Roop") != string::npos) return "AI Generated";
else if (content.find("generative") != string::npos) return "AI Generated";
else if (content.find("Generative AI") != string::npos) return "AI Generated";
else if (content.find("ai-generated") != string::npos) return "AI Generated";
else if (content.find("AI Generated") != string::npos) return "AI Generated";
else if (content.find("artificialIntelligence") != string::npos) return "AI Generated";
else if (content.find("diffusion model") != string::npos) return "AI Generated";
else if (content.find("neural network") != string::npos) return "AI Generated";
else if (content.find("GAN") != string::npos) return "AI Generated";
else if (content.find("VAE") != string::npos) return "AI Generated";
else if (content.find("LoRA") != string::npos) return "AI Generated";
else if (content.find("Dreambooth") != string::npos) return "AI Generated";
else if (content.find("textual inversion") != string::npos) return "AI Generated";
else if (content.find("latent diffusion") != string::npos) return "AI Generated";
else if (content.find("OpenAI") != string::npos) return "AI Generated";
else if (content.find("c2pa") != string::npos) return "AI Generated";
else if (content.find("C2PA") != string::npos) return "AI Generated";
else if (content.find("contentauth") != string::npos) return "AI Generated";
else if (content.find("ContentAuth") != string::npos) return "AI Generated";
else if (content.find("Meitu") != string::npos) return "AI Generated";
else if (content.find("Remini") != string::npos) return "AI Generated";
else if (content.find("FaceApp") != string::npos) return "AI Generated";
else if (content.find("Lensa") != string::npos) return "AI Generated";
else if (content.find("Dawn AI") != string::npos) return "AI Generated";
else if (content.find("Prisma") != string::npos) return "AI Generated";
else if (content.find("Facetune") != string::npos) return "AI Generated";
else if (content.find("Runway Gen") != string::npos) return "AI Generated";
else if (content.find("Gen-2") != string::npos) return "AI Generated";
else if (content.find("Gen-3") != string::npos) return "AI Generated";
else if (content.find("AnimateDiff") != string::npos) return "AI Generated";
else if (content.find("ModelScope") != string::npos) return "AI Generated";
else if (content.find("ZeroScope") != string::npos) return "AI Generated";
else if (content.find("Wan") != string::npos) return "AI Generated";
else if (content.find("CogVideo") != string::npos) return "AI Generated";
else if (content.find("Vidu") != string::npos) return "AI Generated";
else if (content.find("Pixverse") != string::npos) return "AI Generated";
else if (content.find("MiniMax") != string::npos) return "AI Generated";
else if (content.find("Hailuo") != string::npos) return "AI Generated";
else if (content.find("Jimeng") != string::npos) return "AI Generated";
else if (content.find("Janus") != string::npos) return "AI Generated";
else if (content.find("Flux") != string::npos) return "AI Generated";
else if (content.find("FLUX") != string::npos) return "AI Generated";
else if (content.find("Black Forest Labs") != string::npos) return "AI Generated";
else if (content.find("Fal.ai") != string::npos) return "AI Generated";
else if (content.find("Together AI") != string::npos) return "AI Generated";
else if (content.find("Segmind") != string::npos) return "AI Generated";
else if (content.find("Scenario") != string::npos) return "AI Generated";
else if (content.find("Krea") != string::npos) return "AI Generated";
else if (content.find("Magnific") != string::npos) return "AI Generated";
else if (content.find("Higgsfield") != string::npos) return "AI Generated";
else if (content.find("Lightricks") != string::npos) return "AI Generated";
else if (content.find("LTX") != string::npos) return "AI Generated";
else if (content.find("Nijijourney") != string::npos) return "AI Generated";
else if (content.find("Niji") != string::npos) return "AI Generated";
else if (content.find("NovelAI") != string::npos) return "AI Generated";
else if (content.find("Waifu Diffusion") != string::npos) return "AI Generated";
else if (content.find("Anything V") != string::npos) return "AI Generated";
else if (content.find("ChilloutMix") != string::npos) return "AI Generated";
else if (content.find("Deliberate") != string::npos) return "AI Generated";
else if (content.find("RealisticVision") != string::npos) return "AI Generated";
else if (content.find("AbsoluteReality") != string::npos) return "AI Generated";
else if (content.find("Dreamshaper") != string::npos) return "AI Generated";
else if (content.find("Counterfeit") != string::npos) return "AI Generated";
else if (content.find("Photon") != string::npos) return "AI Generated";
else if (content.find("Juggernaut") != string::npos) return "AI Generated";
else if (content.find("epiCRealism") != string::npos) return "AI Generated";
else return "Likely Real";
    }
};

// image inherits base
class image : public MediaAnalyzer {
public:
    image(string f): MediaAnalyzer(f){}
};

// video inherits base
class video : public MediaAnalyzer {
public:
    video(string f): MediaAnalyzer(f){}
};
int main(int argc, char* argv[]){
    string filename = argv[1];
    string ext = filename.substr(filename.find_last_of(".") + 1);

    if(ext == "mp4" || ext == "mov" || ext == "avi"){
        video v(filename);
        v.extract();
        cout << v.checki() << endl;
    }
    else{
        image img(filename);
        img.extract();
        cout << img.checki() << endl;
    }

    return 0;
}