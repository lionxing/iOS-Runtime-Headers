/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIPrintPanelViewController, PKPrinter, PKPrintSettings, UIPrintingProgress, UIPrintPaper, UIPrintInfo, UIPrintPageRenderer;

@interface UIPrintInteractionControllerInternals : NSObject  {
    int _pageCount;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _pageRange;
    int _currentPage;
    UIPrintPanelViewController *_printPanelViewController;
    UIPrintingProgress *_printingProgress;
    PKPrinter *_printer;
    UIPrintPaper *_paper;
    PKPrintSettings *_printSettings;
    UIPrintInfo *_activePrintInfo;
    int _printInfoState;
    BOOL _supressNotifyDismissed;
    UIPrintPageRenderer *_formatterRenderer;
}


- (void)dealloc;

@end
