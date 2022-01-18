#include "src/helpers/map_data.h"

map_data::JsonFilePaths::JsonFilePaths() {
  QFileInfoList list = QDir("../resources/Jsons").entryInfoList();
  for (const auto& file : list) {
    if (!file.isHidden()) {
      file_paths.push_back(file.filePath());
    }
  }
}

map_data::ImageFilePaths::ImageFilePaths() {
  QFileInfoList map_list =
      QDir("../resources/images/maps").entryInfoList();
  for (const auto& file : map_list) {
    if (!file.isHidden()) {
      maps_file_paths.push_back(file.filePath());
    }
  }
  QFileInfoList minimap_list =
      QDir("../resources/images/maps/minimaps").entryInfoList();
  for (const auto& file : minimap_list) {
   if (!file.isHidden()) {
     minimaps_file_paths.push_back(file.filePath());
   }
  }
}
