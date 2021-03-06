#pragma once
enum
{
  Hnrtoolbox = 1037815,

  NRTOOLBOX_HOOK_VIEWPORT_GROUP = 1000,
  NRTOOLBOX_HOOK_VIEWPORT_SHOWUVS = 1001,

  NRTOOLBOX_HOOK_SAFEFRAME_GROUP = 2000,
  NRTOOLBOX_HOOK_SAFEFRAME_ENABLED = 2001,
  NRTOOLBOX_HOOK_SAFEFRAME_COLOR = 2002,
  NRTOOLBOX_HOOK_SAFEFRAME_ALPHA = 2003,
  NRTOOLBOX_HOOK_SAFEFRAME_BORDER = 2004,
  NRTOOLBOX_HOOK_SAFEFRAME_BORDERCOLOR = 2005,

  NRTOOLBOX_HOOK_TIMEHIDE_GROUP = 3000,
  NRTOOLBOX_HOOK_TIMEHIDE_ONLYSELECTED = 3001,
  NRTOOLBOX_HOOK_TIMEHIDE_ONLYANIMATED = 3002,
  NRTOOLBOX_HOOK_TIMEHIDE_TRACKS = 3003,
    NRTOOLBOX_HOOK_TIMEHIDE_TRACKS_SHOWALL = 0,
    NRTOOLBOX_HOOK_TIMEHIDE_TRACKS_ANIMATED = 1,
    NRTOOLBOX_HOOK_TIMEHIDE_TRACKS_PREVIEWRANGE = 2,

  NRTOOLBOX_HOOK_SWATCHES_GROUP = 4000,
  NRTOOLBOX_HOOK_SWATCHES_SYNCHRONIZE = 4001,
  NRTOOLBOX_HOOK_SWATCHES = 4002,
};
