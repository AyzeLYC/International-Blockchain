#include <string>

namespace ui {
    
    struct pageDatas {
        
        string title,
               xSize,
               ySize;
        uint24_t backgroundRGBColor;
        uint16_t backgroundOpacity;
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
                   imageYCoordinate;
            
        };
        
    }
    
    string applicationPages = {};
    
    unsigned int createApplication(string title, string xSize, string ySize, uint24_t backgroundRGBColor, uint16_t backgroundOpacity) {
        
        
        
    };
    
    unsigned int startApplication() {
        
        
        
    };
    unsigned int stopApplication() {
        
        
        
    };
    
    
    unsigned int createPage(string title, string xSize, string ySize, uint24_t backgroundRGBColor, uint16_t backgroundOpacity, string texts[], string images[]) {
        
        if (applicationPages.) {
            
            
            
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
