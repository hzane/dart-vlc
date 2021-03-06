/*
 * dart_vlc: A media playback library for Dart & Flutter. Based on libVLC & libVLC++.
 * 
 * Hitesh Kumar Saini
 * https://github.com/alexmercerind
 * saini123hitesh@gmail.com; alexmercerind@gmail.com
 * 
 * GNU Lesser General Public License v2.1
 */

#include "../mediasource/playlist.hpp"
#include "../device.hpp"
#include "../equalizer.hpp"


class PlayerState {
public:
	int id;
	int index = 0;
	Playlist* medias = new Playlist({}, PlaylistMode::single);
	bool isPlaying = false;
	bool isValid = true;
	bool isSeekable = true;
	bool isCompleted = false;
	int position = 0;
	int duration = 0;
	float volume = 1.0;
	float rate = 1.0;
	bool isPlaylist = false;
	Device* device = nullptr;
	Equalizer* equalizer = nullptr;
};
