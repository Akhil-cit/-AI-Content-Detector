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

       if (content.contains("DALL-E")) { return "AI Generated"; }
    else if (content.contains("DALL·E")) { return "AI Generated"; }
    else if (content.contains("ChatGPT")) { return "AI Generated"; }
    else if (content.contains("GPT-4o")) { return "AI Generated"; }
    else if (content.contains("GPT-4")) { return "AI Generated"; }
    else if (content.contains("GPT-3")) { return "AI Generated"; }
    else if (content.contains("Midjourney")) { return "AI Generated"; }
    else if (content.contains("Stable Diffusion")) { return "AI Generated"; }
    else if (content.contains("Firefly")) { return "AI Generated"; }
    else if (content.contains("Runway")) { return "AI Generated"; }
    else if (content.contains("Sora")) { return "AI Generated"; }
    else if (content.contains("Pika")) { return "AI Generated"; }
    else if (content.contains("Gemini")) { return "AI Generated"; }
    else if (content.contains("Imagen")) { return "AI Generated"; }
    else if (content.contains("Leonardo")) { return "AI Generated"; }
    else if (content.contains("Canva")) { return "AI Generated"; }
    else if (content.contains("Adobe Generative")) { return "AI Generated"; }
    else if (content.contains("Adobe Firefly")) { return "AI Generated"; }
    else if (content.contains("trainedAlgorithmicMedia")) { return "AI Generated"; }
    else if (content.contains("digitalArtWork")) { return "AI Generated"; }
    else if (content.contains("Bing Image")) { return "AI Generated"; }
    else if (content.contains("Ideogram")) { return "AI Generated"; }
    else if (content.contains("Playground AI")) { return "AI Generated"; }
    else if (content.contains("NightCafe")) { return "AI Generated"; }
    else if (content.contains("Artbreeder")) { return "AI Generated"; }
    else if (content.contains("Deep Dream")) { return "AI Generated"; }
    else if (content.contains("Synthesia")) { return "AI Generated"; }
    else if (content.contains("HeyGen")) { return "AI Generated"; }
    else if (content.contains("Luma")) { return "AI Generated"; }
    else if (content.contains("Kling")) { return "AI Generated"; }
    else if (content.contains("ComfyUI")) { return "AI Generated"; }
    else if (content.contains("InvokeAI")) { return "AI Generated"; }
    else if (content.contains("Automatic1111")) { return "AI Generated"; }
    else if (content.contains("ControlNet")) { return "AI Generated"; }
    else if (content.contains("Dreamstudio")) { return "AI Generated"; }
    else if (content.contains("DreamBooth")) { return "AI Generated"; }
    else if (content.contains("Diffusers")) { return "AI Generated"; }
    else if (content.contains("Hugging Face")) { return "AI Generated"; }
    else if (content.contains("Civitai")) { return "AI Generated"; }
    else if (content.contains("Lexica")) { return "AI Generated"; }
    else if (content.contains("BlueWillow")) { return "AI Generated"; }
    else if (content.contains("Stablecog")) { return "AI Generated"; }
    else if (content.contains("Mage.space")) { return "AI Generated"; }
    else if (content.contains("Dezgo")) { return "AI Generated"; }
    else if (content.contains("Prodia")) { return "AI Generated"; }
    else if (content.contains("Getimg")) { return "AI Generated"; }
    else if (content.contains("Clipdrop")) { return "AI Generated"; }
    else if (content.contains("Stability AI")) { return "AI Generated"; }
    else if (content.contains("StabilityAI")) { return "AI Generated"; }
    else if (content.contains("Replicate")) { return "AI Generated"; }
    else if (content.contains("Fotor")) { return "AI Generated"; }
    else if (content.contains("Craiyon")) { return "AI Generated"; }
    else if (content.contains("WOMBO")) { return "AI Generated"; }
    else if (content.contains("Dream by WOMBO")) { return "AI Generated"; }
    else if (content.contains("Jasper Art")) { return "AI Generated"; }
    else if (content.contains("Photosonic")) { return "AI Generated"; }
    else if (content.contains("Writesonic")) { return "AI Generated"; }
    else if (content.contains("Tome")) { return "AI Generated"; }
    else if (content.contains("Kaiber")) { return "AI Generated"; }
    else if (content.contains("Genmo")) { return "AI Generated"; }
    else if (content.contains("Haiper")) { return "AI Generated"; }
    else if (content.contains("Invideo AI")) { return "AI Generated"; }
    else if (content.contains("Fliki")) { return "AI Generated"; }
    else if (content.contains("Pictory")) { return "AI Generated"; }
    else if (content.contains("Veed")) { return "AI Generated"; }
    else if (content.contains("Descript")) { return "AI Generated"; }
    else if (content.contains("ElevenLabs")) { return "AI Generated"; }
    else if (content.contains("Murf")) { return "AI Generated"; }
    else if (content.contains("Speechify")) { return "AI Generated"; }
    else if (content.contains("Resemble AI")) { return "AI Generated"; }
    else if (content.contains("Play.ht")) { return "AI Generated"; }
    else if (content.contains("Voicify")) { return "AI Generated"; }
    else if (content.contains("Udio")) { return "AI Generated"; }
    else if (content.contains("Suno")) { return "AI Generated"; }
    else if (content.contains("Boomy")) { return "AI Generated"; }
    else if (content.contains("Soundraw")) { return "AI Generated"; }
    else if (content.contains("Aiva")) { return "AI Generated"; }
    else if (content.contains("Loudly")) { return "AI Generated"; }
    else if (content.contains("Beatoven")) { return "AI Generated"; }
    else if (content.contains("Mubert")) { return "AI Generated"; }
    else if (content.contains("DeepMind")) { return "AI Generated"; }
    else if (content.contains("Anthropic")) { return "AI Generated"; }
    else if (content.contains("Claude")) { return "AI Generated"; }
    else if (content.contains("Cohere")) { return "AI Generated"; }
    else if (content.contains("Mistral")) { return "AI Generated"; }
    else if (content.contains("Llama")) { return "AI Generated"; }
    else if (content.contains("Meta AI")) { return "AI Generated"; }
    else if (content.contains("Copilot")) { return "AI Generated"; }
    else if (content.contains("Microsoft Designer")) { return "AI Generated"; }
    else if (content.contains("Microsoft Copilot")) { return "AI Generated"; }
    else if (content.contains("Grok")) { return "AI Generated"; }
    else if (content.contains("xAI")) { return "AI Generated"; }
    else if (content.contains("Perplexity")) { return "AI Generated"; }
    else if (content.contains("You.com")) { return "AI Generated"; }
    else if (content.contains("Poe")) { return "AI Generated"; }
    else if (content.contains("Character AI")) { return "AI Generated"; }
    else if (content.contains("Runway ML")) { return "AI Generated"; }
    else if (content.contains("Wonder Studio")) { return "AI Generated"; }
    else if (content.contains("D-ID")) { return "AI Generated"; }
    else if (content.contains("DeepFaceLab")) { return "AI Generated"; }
    else if (content.contains("FaceSwap")) { return "AI Generated"; }
    else if (content.contains("Reface")) { return "AI Generated"; }
    else if (content.contains("Wombo Dream")) { return "AI Generated"; }
    else if (content.contains("Starry AI")) { return "AI Generated"; }
    else if (content.contains("Foocus")) { return "AI Generated"; }
    else if (content.contains("SeaArt")) { return "AI Generated"; }
    else if (content.contains("TensorArt")) { return "AI Generated"; }
    else if (content.contains("PicFinder")) { return "AI Generated"; }
    else if (content.contains("Pixlr AI")) { return "AI Generated"; }
    else if (content.contains("Remove.bg")) { return "AI Generated"; }
    else if (content.contains("Photoroom")) { return "AI Generated"; }
    else if (content.contains("Luminar AI")) { return "AI Generated"; }
    else if (content.contains("Topaz")) { return "AI Generated"; }
    else if (content.contains("Gigapixel")) { return "AI Generated"; }
    else if (content.contains("Let's Enhance")) { return "AI Generated"; }
    else if (content.contains("Upscayl")) { return "AI Generated"; }
    else if (content.contains("Real-ESRGAN")) { return "AI Generated"; }
    else if (content.contains("GFPGAN")) { return "AI Generated"; }
    else if (content.contains("CodeFormer")) { return "AI Generated"; }
    else if (content.contains("InsightFace")) { return "AI Generated"; }
    else if (content.contains("SimSwap")) { return "AI Generated"; }
    else if (content.contains("Roop")) { return "AI Generated"; }
    else if (content.contains("generative")) { return "AI Generated"; }
    else if (content.contains("Generative AI")) { return "AI Generated"; }
    else if (content.contains("ai-generated")) { return "AI Generated"; }
    else if (content.contains("AI Generated")) { return "AI Generated"; }
    else if (content.contains("artificialIntelligence")) { return "AI Generated"; }
    else if (content.contains("diffusion model")) { return "AI Generated"; }
    else if (content.contains("neural network")) { return "AI Generated"; }
    else if (content.contains("GAN")) { return "AI Generated"; }
    else if (content.contains("VAE")) { return "AI Generated"; }
    else if (content.contains("LoRA")) { return "AI Generated"; }
    else if (content.contains("Dreambooth")) { return "AI Generated"; }
    else if (content.contains("textual inversion")) { return "AI Generated"; }
    else if (content.contains("latent diffusion")) { return "AI Generated"; }
    else if (content.contains("OpenAI")) { return "AI Generated"; }
    else if (content.contains("c2pa")) { return "AI Generated"; }
    else if (content.contains("C2PA")) { return "AI Generated"; }
    else if (content.contains("contentauth")) { return "AI Generated"; }
    else if (content.contains("ContentAuth")) { return "AI Generated"; }
    else if (content.contains("Meitu")) { return "AI Generated"; }
    else if (content.contains("Remini")) { return "AI Generated"; }
    else if (content.contains("FaceApp")) { return "AI Generated"; }
    else if (content.contains("Lensa")) { return "AI Generated"; }
    else if (content.contains("Dawn AI")) { return "AI Generated"; }
    else if (content.contains("Prisma")) { return "AI Generated"; }
    else if (content.contains("Facetune")) { return "AI Generated"; }
    else if (content.contains("Runway Gen")) { return "AI Generated"; }
    else if (content.contains("Gen-2")) { return "AI Generated"; }
    else if (content.contains("Gen-3")) { return "AI Generated"; }
    else if (content.contains("AnimateDiff")) { return "AI Generated"; }
    else if (content.contains("ModelScope")) { return "AI Generated"; }
    else if (content.contains("ZeroScope")) { return "AI Generated"; }
    else if (content.contains("Wan")) { return "AI Generated"; }
    else if (content.contains("CogVideo")) { return "AI Generated"; }
    else if (content.contains("Vidu")) { return "AI Generated"; }
    else if (content.contains("Pixverse")) { return "AI Generated"; }
    else if (content.contains("MiniMax")) { return "AI Generated"; }
    else if (content.contains("Hailuo")) { return "AI Generated"; }
    else if (content.contains("Jimeng")) { return "AI Generated"; }
    else if (content.contains("Janus")) { return "AI Generated"; }
    else if (content.contains("Flux")) { return "AI Generated"; }
    else if (content.contains("FLUX")) { return "AI Generated"; }
    else if (content.contains("Black Forest Labs")) { return "AI Generated"; }
    else if (content.contains("Fal.ai")) { return "AI Generated"; }
    else if (content.contains("Together AI")) { return "AI Generated"; }
    else if (content.contains("Segmind")) { return "AI Generated"; }
    else if (content.contains("Scenario")) { return "AI Generated"; }
    else if (content.contains("Krea")) { return "AI Generated"; }
    else if (content.contains("Magnific")) { return "AI Generated"; }
    else if (content.contains("Higgsfield")) { return "AI Generated"; }
    else if (content.contains("Lightricks")) { return "AI Generated"; }
    else if (content.contains("LTX")) { return "AI Generated"; }
    else if (content.contains("Nijijourney")) { return "AI Generated"; }
    else if (content.contains("Niji")) { return "AI Generated"; }
    else if (content.contains("NovelAI")) { return "AI Generated"; }
    else if (content.contains("Waifu Diffusion")) { return "AI Generated"; }
    else if (content.contains("Anything V")) { return "AI Generated"; }
    else if (content.contains("ChilloutMix")) { return "AI Generated"; }
    else if (content.contains("Deliberate")) { return "AI Generated"; }
    else if (content.contains("RealisticVision")) { return "AI Generated"; }
    else if (content.contains("AbsoluteReality")) { return "AI Generated"; }
    else if (content.contains("Dreamshaper")) { return "AI Generated"; }
    else if (content.contains("Counterfeit")) { return "AI Generated"; }
    else if (content.contains("Photon")) { return "AI Generated"; }
    else if (content.contains("Juggernaut")) { return "AI Generated"; }
    else if (content.contains("epiCRealism")) { return "AI Generated"; }
    else { return "Likely Real"; }
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