#include <spawn.h>


@interface Colors : NSObject
 
@end

@implementation Colors

-(const char *) c_black {
    return "\x1B[30m";
}

-(const char *) c_red {
    return "\x1B[31m";
}

-(const char *) c_green {
    return "\x1B[32m";
}

-(const char *) c_yellow {
    return "\x1B[33m";
}

-(const char *) c_blue {
    return "\x1B[34m";
}

-(const char *) c_magenta {
    return "\x1B[35m";
}

-(const char *) c_cyan {
    return "\x1B[36m";
}

-(const char *) c_white {
    return "\x1B[37m";
}

@end
//int LoadColor(BOOL* color){
//
////casing
//
//    const char* c_reset = "\x1B[0m";
//    const char* c_bold = "\x1B[1m"; //bold
//    const char* c_dim = "\x1B[2m";
//    const char* c_ul = "\x1B[4m"; //underline
//    const char* c_blink = "\x1B[5m";
//    const char* c_reverse = "\x1B[7m"; //invert
//    const char* c_hide = "\x1B[8m";
//
//
//if (color) {
////standard colours￼
//    const char* c_black = "\x1B[30m";
//    const char* c_red = "\x1B[31m";
//    const char* c_green = "\x1B[32m";
//    const char* c_yellow = "\x1B[33m";
//    const char* c_blue = "\x1B[34m";
//    const char* c_magenta = "\x1B[35m";
//    const char* c_cyan = "\x1B[36m";
//    const char* c_white = "\x1B[37m";
//
////bright colours
//    const char* c_bblack = "\x1B[30m1m";
//    const char* c_bred = "\x1B[31m1m";
//    const char* c_bgreen = "\x1B[32m1m";
//    const char* c_byellow = "\x1B[33m1m";
//    const char* c_bblue = "\x1B[34m1m";
//    const char* c_bmagenta = "\x1B[35m1m";
//    const char* c_bcyan = "\x1B[36m1m";
//    const char* c_bwhite = "\x1B[37m1m";
//}else{
////blank colours
//    const char* c_black = "\x1B[0m";
//    const char* c_red = "\x1B[0m";
//    const char* c_green = "\x1B[0m";
//    const char* c_yellow = "\x1B[0m";
//    const char* c_blue = "\x1B[0m";
//    const char* c_magenta = "\x1B[0m";
//    const char* c_cyan = "\x1B[0m";
//    const char* c_white = "\x1B[0m";
//
////blank colours
//    const char* c_bblack = "\x1B[0m";
//    const char* c_bred = "\x1B[0m";
//    const char* c_bgreen = "\x1B[0m";
//    const char* c_byellow = "\x1B[0m";
//    const char* c_bblue = "\x1B[0m";
//    const char* c_bmagenta = "\x1B[0m";
//    const char* c_bcyan = "\x1B[0m";
//    const char* c_bwhite = "\x1B[0m";
//return 0;
//}
//return 0;
//}
