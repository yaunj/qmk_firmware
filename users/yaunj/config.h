#pragma once

/* Make it clear the keyboard is mine :P */
#undef  MANUFACTURER
#define MANUFACTURER yaunj

// Global tapping term (default: 200)
#ifndef TAPPING_TERM
#define TAPPING_TERM 200
#endif

// Prevent rollover on alphas to accidentally trigger mods
#define IGNORE_MOD_TAP_INTERRUPT

// Enables rapid switch from tap to hold, disables double tap hold auto repeat
#define TAPPING_FORCE_HOLD
#define TAPPING_FORCE_HOLD_PER_KEY

// Apply modifier on keys tapped during a short hold of a modtap
#define PERMISSIVE_HOLD
