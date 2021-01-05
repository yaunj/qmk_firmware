#pragma once

#ifdef AUDIO_ENABLE

    #define STARTUP_TUNE \
        Q__NOTE(_E6  ),  \
        Q__NOTE(_G6  ),  \
        Q__NOTE(_E7  ),  \
        Q__NOTE(_C7  ),  \
        Q__NOTE(_D7  ),  \
        Q__NOTE(_G7  ),

    #define STARTUP_SONG SONG(STARTUP_TUNE)
    // #define STARTUP_SONG SONG(NO_SOUND)

    #define DEFAULT_LAYER_SONGS { SONG(QWERTY_SOUND), \
                                  SONG(COLEMAK_SOUND), \
                                  SONG(DVORAK_SOUND) \
                                }
#endif
