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

// Global tapping term (default: 200)
#define TAPPING_TERM 200

// Prevent rollover on alphas to accidentally trigger mods
#define IGNORE_MOD_TAP_INTERRUPT

// Enables rapid switch from tap to hold, disables double tap hold auto repeat
#define TAPPING_FORCE_HOLD
#define TAPPING_FORCE_HOLD_PER_KEY

// Apply modifier on keys tapped during a short hold of a modtap
#define PERMISSIVE_HOLD
