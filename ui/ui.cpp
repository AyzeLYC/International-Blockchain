#include <string>

namespace ui {
    
    struct pageTexts {
        
        string text,
               textSize,
               textCharacter,
               textXCoordinate,
               textYCoordinate;
        
    };
    struct pageImages {
        
        string imageName,
               imageXCoordinate,
               imageYCoordinate,
               image;
        
    };
    struct pageDatas {
        
        string xSize,
               ySize;
        uint24_t backgroundRGBColor;
        uint16_t backgroundOpacity;
        string texts = new pageTexts,
               images = new pageImages;
        
    }
    
    string applicationPages = {};
    
    unsigned int createApplication(string title, string xSize, string ySize, uint24_t backgroundRGBColor, uint16_t backgroundOpacity) {
        
        
        
    };
    
    unsigned int startApplication() {
        
        
        
    };
    unsigned int stopApplication() {
        
        
        
    };
    
    
    unsigned int createPage(string title, string xSize, string ySize, uint24_t backgroundRGBColor, uint16_t backgroundOpacity, string texts[], string images[]) {
        
        if (applicationPages.includes(title) == true) {
            
            string page = "'" +title +"': '" +(new pageDatas(xSize, ySize, backgroundRGBColor, backgroundOpacity, texts, images)) +"'";
            applicationPages.append(page);
            
        };
        
    };
    unsigned int modifyPage(string title, string xSize, string ySize, uint24_t backgroundRGBColor, uint16_t backgroundOpacity, string texts[], string images[]) {
        
        
        
    };
    unsigned int deletePage(string title) {
        
        
        
    };
    
    unsigned int showPage(string title) {
        
        
        
    };
    unsigned int hidePage(string title) {
        
        
        
    };
    
}
