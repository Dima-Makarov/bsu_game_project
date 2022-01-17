#pragma once


struct GameMode {
  size_t map_index = 0;
  size_t players_amount = 1;
  size_t bots_amount = 0;
  int32_t laps_amount = 1;
  int volume_settings_parameter = 0;
  bool enable_drifting = false;
};
