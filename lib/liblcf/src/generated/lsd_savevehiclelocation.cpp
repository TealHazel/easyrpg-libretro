/* !!!! GENERATED FILE - DO NOT EDIT !!!!
 * --------------------------------------
 *
 * This file is part of liblcf. Copyright (c) 2020 liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

// Headers
#include "lsd_reader.h"
#include "lsd_chunks.h"
#include "reader_struct_impl.h"

// Read SaveVehicleLocation.

template <>
char const* const Struct<RPG::SaveVehicleLocation>::name = "SaveVehicleLocation";
static TypedField<RPG::SaveVehicleLocation, bool> static_active(
	&RPG::SaveVehicleLocation::active,
	LSD_Reader::ChunkSaveVehicleLocation::active,
	"active",
	0,
	0
);
static TypedField<RPG::SaveVehicleLocation, int32_t> static_map_id(
	&RPG::SaveVehicleLocation::map_id,
	LSD_Reader::ChunkSaveVehicleLocation::map_id,
	"map_id",
	1,
	0
);
static TypedField<RPG::SaveVehicleLocation, int32_t> static_position_x(
	&RPG::SaveVehicleLocation::position_x,
	LSD_Reader::ChunkSaveVehicleLocation::position_x,
	"position_x",
	1,
	0
);
static TypedField<RPG::SaveVehicleLocation, int32_t> static_position_y(
	&RPG::SaveVehicleLocation::position_y,
	LSD_Reader::ChunkSaveVehicleLocation::position_y,
	"position_y",
	1,
	0
);
static TypedField<RPG::SaveVehicleLocation, int32_t> static_direction(
	&RPG::SaveVehicleLocation::direction,
	LSD_Reader::ChunkSaveVehicleLocation::direction,
	"direction",
	1,
	0
);
static TypedField<RPG::SaveVehicleLocation, int32_t> static_sprite_direction(
	&RPG::SaveVehicleLocation::sprite_direction,
	LSD_Reader::ChunkSaveVehicleLocation::sprite_direction,
	"sprite_direction",
	1,
	0
);
static TypedField<RPG::SaveVehicleLocation, int32_t> static_anim_frame(
	&RPG::SaveVehicleLocation::anim_frame,
	LSD_Reader::ChunkSaveVehicleLocation::anim_frame,
	"anim_frame",
	0,
	0
);
static TypedField<RPG::SaveVehicleLocation, int32_t> static_transparency(
	&RPG::SaveVehicleLocation::transparency,
	LSD_Reader::ChunkSaveVehicleLocation::transparency,
	"transparency",
	0,
	0
);
static TypedField<RPG::SaveVehicleLocation, int32_t> static_remaining_step(
	&RPG::SaveVehicleLocation::remaining_step,
	LSD_Reader::ChunkSaveVehicleLocation::remaining_step,
	"remaining_step",
	0,
	0
);
static TypedField<RPG::SaveVehicleLocation, int32_t> static_move_frequency(
	&RPG::SaveVehicleLocation::move_frequency,
	LSD_Reader::ChunkSaveVehicleLocation::move_frequency,
	"move_frequency",
	0,
	0
);
static TypedField<RPG::SaveVehicleLocation, int32_t> static_layer(
	&RPG::SaveVehicleLocation::layer,
	LSD_Reader::ChunkSaveVehicleLocation::layer,
	"layer",
	1,
	0
);
static TypedField<RPG::SaveVehicleLocation, bool> static_overlap_forbidden(
	&RPG::SaveVehicleLocation::overlap_forbidden,
	LSD_Reader::ChunkSaveVehicleLocation::overlap_forbidden,
	"overlap_forbidden",
	0,
	0
);
static TypedField<RPG::SaveVehicleLocation, int32_t> static_animation_type(
	&RPG::SaveVehicleLocation::animation_type,
	LSD_Reader::ChunkSaveVehicleLocation::animation_type,
	"animation_type",
	1,
	0
);
static TypedField<RPG::SaveVehicleLocation, bool> static_lock_facing(
	&RPG::SaveVehicleLocation::lock_facing,
	LSD_Reader::ChunkSaveVehicleLocation::lock_facing,
	"lock_facing",
	0,
	0
);
static TypedField<RPG::SaveVehicleLocation, int32_t> static_move_speed(
	&RPG::SaveVehicleLocation::move_speed,
	LSD_Reader::ChunkSaveVehicleLocation::move_speed,
	"move_speed",
	1,
	0
);
static TypedField<RPG::SaveVehicleLocation, RPG::MoveRoute> static_move_route(
	&RPG::SaveVehicleLocation::move_route,
	LSD_Reader::ChunkSaveVehicleLocation::move_route,
	"move_route",
	1,
	0
);
static TypedField<RPG::SaveVehicleLocation, bool> static_move_route_overwrite(
	&RPG::SaveVehicleLocation::move_route_overwrite,
	LSD_Reader::ChunkSaveVehicleLocation::move_route_overwrite,
	"move_route_overwrite",
	0,
	0
);
static TypedField<RPG::SaveVehicleLocation, int32_t> static_move_route_index(
	&RPG::SaveVehicleLocation::move_route_index,
	LSD_Reader::ChunkSaveVehicleLocation::move_route_index,
	"move_route_index",
	0,
	0
);
static TypedField<RPG::SaveVehicleLocation, bool> static_move_route_repeated(
	&RPG::SaveVehicleLocation::move_route_repeated,
	LSD_Reader::ChunkSaveVehicleLocation::move_route_repeated,
	"move_route_repeated",
	0,
	0
);
static TypedField<RPG::SaveVehicleLocation, bool> static_sprite_transparent(
	&RPG::SaveVehicleLocation::sprite_transparent,
	LSD_Reader::ChunkSaveVehicleLocation::sprite_transparent,
	"sprite_transparent",
	0,
	0
);
static TypedField<RPG::SaveVehicleLocation, bool> static_route_through(
	&RPG::SaveVehicleLocation::route_through,
	LSD_Reader::ChunkSaveVehicleLocation::route_through,
	"route_through",
	0,
	0
);
static TypedField<RPG::SaveVehicleLocation, int32_t> static_anim_paused(
	&RPG::SaveVehicleLocation::anim_paused,
	LSD_Reader::ChunkSaveVehicleLocation::anim_paused,
	"anim_paused",
	0,
	0
);
static TypedField<RPG::SaveVehicleLocation, bool> static_through(
	&RPG::SaveVehicleLocation::through,
	LSD_Reader::ChunkSaveVehicleLocation::through,
	"through",
	0,
	0
);
static TypedField<RPG::SaveVehicleLocation, int32_t> static_stop_count(
	&RPG::SaveVehicleLocation::stop_count,
	LSD_Reader::ChunkSaveVehicleLocation::stop_count,
	"stop_count",
	0,
	0
);
static TypedField<RPG::SaveVehicleLocation, int32_t> static_anim_count(
	&RPG::SaveVehicleLocation::anim_count,
	LSD_Reader::ChunkSaveVehicleLocation::anim_count,
	"anim_count",
	0,
	0
);
static TypedField<RPG::SaveVehicleLocation, int32_t> static_max_stop_count(
	&RPG::SaveVehicleLocation::max_stop_count,
	LSD_Reader::ChunkSaveVehicleLocation::max_stop_count,
	"max_stop_count",
	0,
	0
);
static TypedField<RPG::SaveVehicleLocation, bool> static_jumping(
	&RPG::SaveVehicleLocation::jumping,
	LSD_Reader::ChunkSaveVehicleLocation::jumping,
	"jumping",
	0,
	0
);
static TypedField<RPG::SaveVehicleLocation, int32_t> static_begin_jump_x(
	&RPG::SaveVehicleLocation::begin_jump_x,
	LSD_Reader::ChunkSaveVehicleLocation::begin_jump_x,
	"begin_jump_x",
	0,
	0
);
static TypedField<RPG::SaveVehicleLocation, int32_t> static_begin_jump_y(
	&RPG::SaveVehicleLocation::begin_jump_y,
	LSD_Reader::ChunkSaveVehicleLocation::begin_jump_y,
	"begin_jump_y",
	0,
	0
);
static TypedField<RPG::SaveVehicleLocation, bool> static_pause(
	&RPG::SaveVehicleLocation::pause,
	LSD_Reader::ChunkSaveVehicleLocation::pause,
	"pause",
	0,
	0
);
static TypedField<RPG::SaveVehicleLocation, bool> static_flying(
	&RPG::SaveVehicleLocation::flying,
	LSD_Reader::ChunkSaveVehicleLocation::flying,
	"flying",
	0,
	0
);
static TypedField<RPG::SaveVehicleLocation, std::string> static_sprite_name(
	&RPG::SaveVehicleLocation::sprite_name,
	LSD_Reader::ChunkSaveVehicleLocation::sprite_name,
	"sprite_name",
	0,
	0
);
static TypedField<RPG::SaveVehicleLocation, int32_t> static_sprite_id(
	&RPG::SaveVehicleLocation::sprite_id,
	LSD_Reader::ChunkSaveVehicleLocation::sprite_id,
	"sprite_id",
	0,
	0
);
static TypedField<RPG::SaveVehicleLocation, bool> static_processed(
	&RPG::SaveVehicleLocation::processed,
	LSD_Reader::ChunkSaveVehicleLocation::processed,
	"processed",
	0,
	0
);
static TypedField<RPG::SaveVehicleLocation, int32_t> static_flash_red(
	&RPG::SaveVehicleLocation::flash_red,
	LSD_Reader::ChunkSaveVehicleLocation::flash_red,
	"flash_red",
	0,
	0
);
static TypedField<RPG::SaveVehicleLocation, int32_t> static_flash_green(
	&RPG::SaveVehicleLocation::flash_green,
	LSD_Reader::ChunkSaveVehicleLocation::flash_green,
	"flash_green",
	0,
	0
);
static TypedField<RPG::SaveVehicleLocation, int32_t> static_flash_blue(
	&RPG::SaveVehicleLocation::flash_blue,
	LSD_Reader::ChunkSaveVehicleLocation::flash_blue,
	"flash_blue",
	0,
	0
);
static TypedField<RPG::SaveVehicleLocation, double> static_flash_current_level(
	&RPG::SaveVehicleLocation::flash_current_level,
	LSD_Reader::ChunkSaveVehicleLocation::flash_current_level,
	"flash_current_level",
	0,
	0
);
static TypedField<RPG::SaveVehicleLocation, int32_t> static_flash_time_left(
	&RPG::SaveVehicleLocation::flash_time_left,
	LSD_Reader::ChunkSaveVehicleLocation::flash_time_left,
	"flash_time_left",
	0,
	0
);
static TypedField<RPG::SaveVehicleLocation, int32_t> static_vehicle(
	&RPG::SaveVehicleLocation::vehicle,
	LSD_Reader::ChunkSaveVehicleLocation::vehicle,
	"vehicle",
	0,
	0
);
static TypedField<RPG::SaveVehicleLocation, int32_t> static_remaining_ascent(
	&RPG::SaveVehicleLocation::remaining_ascent,
	LSD_Reader::ChunkSaveVehicleLocation::remaining_ascent,
	"remaining_ascent",
	0,
	0
);
static TypedField<RPG::SaveVehicleLocation, int32_t> static_remaining_descent(
	&RPG::SaveVehicleLocation::remaining_descent,
	LSD_Reader::ChunkSaveVehicleLocation::remaining_descent,
	"remaining_descent",
	0,
	0
);
static TypedField<RPG::SaveVehicleLocation, std::string> static_orig_sprite_name(
	&RPG::SaveVehicleLocation::orig_sprite_name,
	LSD_Reader::ChunkSaveVehicleLocation::orig_sprite_name,
	"orig_sprite_name",
	0,
	0
);
static TypedField<RPG::SaveVehicleLocation, int32_t> static_orig_sprite_id(
	&RPG::SaveVehicleLocation::orig_sprite_id,
	LSD_Reader::ChunkSaveVehicleLocation::orig_sprite_id,
	"orig_sprite_id",
	0,
	0
);


template <>
Field<RPG::SaveVehicleLocation> const* Struct<RPG::SaveVehicleLocation>::fields[] = {
	&static_active,
	&static_map_id,
	&static_position_x,
	&static_position_y,
	&static_direction,
	&static_sprite_direction,
	&static_anim_frame,
	&static_transparency,
	&static_remaining_step,
	&static_move_frequency,
	&static_layer,
	&static_overlap_forbidden,
	&static_animation_type,
	&static_lock_facing,
	&static_move_speed,
	&static_move_route,
	&static_move_route_overwrite,
	&static_move_route_index,
	&static_move_route_repeated,
	&static_sprite_transparent,
	&static_route_through,
	&static_anim_paused,
	&static_through,
	&static_stop_count,
	&static_anim_count,
	&static_max_stop_count,
	&static_jumping,
	&static_begin_jump_x,
	&static_begin_jump_y,
	&static_pause,
	&static_flying,
	&static_sprite_name,
	&static_sprite_id,
	&static_processed,
	&static_flash_red,
	&static_flash_green,
	&static_flash_blue,
	&static_flash_current_level,
	&static_flash_time_left,
	&static_vehicle,
	&static_remaining_ascent,
	&static_remaining_descent,
	&static_orig_sprite_name,
	&static_orig_sprite_id,
	NULL
};

template class Struct<RPG::SaveVehicleLocation>;
