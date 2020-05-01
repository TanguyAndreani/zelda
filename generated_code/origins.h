#include <SFML/Graphics.h>
const sfVector2f boomerang_loop_origs[5];
const sfVector2f hud_boomerang_origs[2];
const sfVector2f hud_boomerang_desc_origs[2];
const sfVector2f hud_origs[2];
const sfVector2f hud_heart_empty_origs[2];
const sfVector2f hud_heart_full_origs[2];
const sfVector2f hud_heart_half_origs[2];
const sfVector2f hud_lantern_origs[2];
const sfVector2f hud_lantern_desc_origs[2];
const sfVector2f hud_pause_origs[2];
const sfVector2f hud_selection_origs[2];
const sfVector2f link_down_attack_origs[7];
const sfVector2f link_down_boomerang_throw_origs[3];
const sfVector2f link_down_carry_idle_origs[2];
const sfVector2f link_down_carry_walk_origs[7];
const sfVector2f link_down_charge_super_attack_origs[2];
const sfVector2f link_down_idle_origs[2];
const sfVector2f link_down_idle_shield_origs[2];
const sfVector2f link_down_pull_origs[3];
const sfVector2f link_down_super_attack_origs[13];
const sfVector2f link_down_walk_origs[9];
const sfVector2f link_down_walk_shield_origs[9];
const sfVector2f link_falling_origs[7];
const sfVector2f link_left_attack_origs[7];
const sfVector2f link_left_boomerang_throw_origs[3];
const sfVector2f link_left_carry_idle_origs[2];
const sfVector2f link_left_carry_walk_origs[4];
const sfVector2f link_left_charge_super_attack_origs[2];
const sfVector2f link_left_idle_origs[2];
const sfVector2f link_left_idle_shield_origs[2];
const sfVector2f link_left_pull_origs[3];
const sfVector2f link_left_super_attack_origs[13];
const sfVector2f link_left_walk_origs[9];
const sfVector2f link_left_walk_shield_origs[8];
const sfVector2f link_right_attack_origs[7];
const sfVector2f link_right_boomerang_throw_origs[3];
const sfVector2f link_right_carry_idle_origs[2];
const sfVector2f link_right_carry_walk_origs[4];
const sfVector2f link_right_charge_super_attack_origs[2];
const sfVector2f link_right_idle_origs[2];
const sfVector2f link_right_idle_shield_origs[2];
const sfVector2f link_right_pull_origs[3];
const sfVector2f link_right_super_attack_origs[13];
const sfVector2f link_right_walk_origs[9];
const sfVector2f link_right_walk_shield_origs[8];
const sfVector2f link_sword_rise_origs[2];
const sfVector2f link_up_attack_origs[6];
const sfVector2f link_up_boomerang_throw_origs[3];
const sfVector2f link_up_carry_idle_origs[2];
const sfVector2f link_up_carry_walk_origs[5];
const sfVector2f link_up_charge_super_attack_origs[2];
const sfVector2f link_up_idle_origs[2];
const sfVector2f link_up_idle_shield_origs[2];
const sfVector2f link_up_pull_origs[3];
const sfVector2f link_up_super_attack_origs[13];
const sfVector2f link_up_walk_origs[9];
const sfVector2f link_up_walk_shield_origs[8];
const sfVector2f monster_bk_down_idle_origs[2];
const sfVector2f monster_bk_down_walk_origs[3];
const sfVector2f monster_bk_falling_origs[5];
const sfVector2f monster_bk_left_idle_origs[2];
const sfVector2f monster_bk_left_walk_origs[3];
const sfVector2f monster_bk_right_idle_origs[2];
const sfVector2f monster_bk_right_walk_origs[3];
const sfVector2f monster_bk_up_idle_origs[2];
const sfVector2f monster_bk_up_walk_origs[3];
const sfVector2f monster_crab_idle_origs[2];
const sfVector2f monster_crab_walk_origs[3];
const sfVector2f monster_gk_down_idle_origs[2];
const sfVector2f monster_gk_down_look_left_origs[2];
const sfVector2f monster_gk_down_look_right_origs[2];
const sfVector2f monster_gk_down_walk_origs[3];
const sfVector2f monster_gk_falling_origs[5];
const sfVector2f monster_gk_left_idle_origs[2];
const sfVector2f monster_gk_left_look_down_origs[2];
const sfVector2f monster_gk_left_look_up_origs[2];
const sfVector2f monster_gk_left_walk_origs[3];
const sfVector2f monster_gk_right_idle_origs[2];
const sfVector2f monster_gk_right_look_down_origs[2];
const sfVector2f monster_gk_right_look_up_origs[2];
const sfVector2f monster_gk_right_walk_origs[3];
const sfVector2f monster_gk_up_idle_origs[2];
const sfVector2f monster_gk_up_look_left_origs[2];
const sfVector2f monster_gk_up_look_right_origs[2];
const sfVector2f monster_gk_up_walk_origs[3];
const sfVector2f monster_mouse_down_idle_origs[2];
const sfVector2f monster_mouse_down_walk_origs[3];
const sfVector2f monster_mouse_left_idle_origs[3];
const sfVector2f monster_mouse_left_walk_origs[3];
const sfVector2f monster_mouse_right_idle_origs[3];
const sfVector2f monster_mouse_right_walk_origs[3];
const sfVector2f monster_mouse_up_idle_origs[2];
const sfVector2f monster_mouse_up_walk_origs[3];
const sfVector2f monster_serpent_down_idle_origs[2];
const sfVector2f monster_serpent_down_walk_origs[3];
const sfVector2f monster_serpent_left_idle_origs[2];
const sfVector2f monster_serpent_left_walk_origs[3];
const sfVector2f monster_serpent_right_idle_origs[2];
const sfVector2f monster_serpent_right_walk_origs[3];
const sfVector2f monster_serpent_up_idle_origs[2];
const sfVector2f monster_serpent_up_walk_origs[3];
const sfVector2f monster_trooper_down_attack_origs[32];
const sfVector2f monster_trooper_down_idle_origs[2];
const sfVector2f monster_trooper_down_walk_origs[3];
const sfVector2f monster_trooper_left_attack_origs[44];
const sfVector2f monster_trooper_left_idle_origs[2];
const sfVector2f monster_trooper_left_walk_origs[3];
const sfVector2f monster_trooper_right_attack_origs[44];
const sfVector2f monster_trooper_right_idle_origs[2];
const sfVector2f monster_trooper_right_walk_origs[3];
const sfVector2f monster_trooper_up_attack_origs[23];
const sfVector2f monster_trooper_up_idle_origs[2];
const sfVector2f monster_trooper_up_walk_origs[3];
const sfVector2f monster_yk_down_idle_origs[2];
const sfVector2f monster_yk_left_idle_origs[2];
const sfVector2f monster_yk_right_idle_origs[2];
const sfVector2f monster_yk_up_idle_origs[2];
const sfVector2f npc_priest_down_idle_origs[2];
const sfVector2f npc_priest_left_idle_origs[2];
const sfVector2f npc_priest_right_idle_origs[2];
const sfVector2f npc_priest_up_idle_origs[2];
const sfVector2f npc_uncle_dead_no_sword_origs[2];
const sfVector2f npc_uncle_dead_sword_origs[2];
const sfVector2f npc_uncle_down_idle_origs[2];
const sfVector2f npc_uncle_down_walk_origs[3];
const sfVector2f npc_uncle_left_idle_origs[2];
const sfVector2f npc_uncle_left_walk_origs[3];
const sfVector2f npc_uncle_right_idle_origs[2];
const sfVector2f npc_uncle_right_walk_origs[3];
const sfVector2f npc_zelda_down_idle_origs[2];
const sfVector2f npc_zelda_down_walk_origs[3];
const sfVector2f npc_zelda_laying_down_origs[2];
const sfVector2f npc_zelda_left_idle_origs[2];
const sfVector2f npc_zelda_left_walk_origs[3];
const sfVector2f npc_zelda_levitating_origs[2];
const sfVector2f npc_zelda_right_idle_origs[2];
const sfVector2f npc_zelda_right_walk_origs[3];
const sfVector2f npc_zelda_up_idle_origs[2];
const sfVector2f npc_zelda_up_walk_origs[3];
const sfVector2f object_big_rock_origs[2];
const sfVector2f object_boomerang_origs[2];
const sfVector2f object_bush_origs[2];
const sfVector2f object_chest_closed_origs[2];
const sfVector2f object_chest_open_origs[2];
const sfVector2f object_ground_torch_off_origs[2];
const sfVector2f object_ground_torch_on_origs[4];
const sfVector2f object_ground_torch_sanctuary_origs[4];
const sfVector2f object_heart_container_origs[2];
const sfVector2f object_heart_container_dialog_origs[2];
const sfVector2f object_key_big_origs[2];
const sfVector2f object_key_simple_origs[2];
const sfVector2f object_lamp_origs[2];
const sfVector2f object_map_origs[2];
const sfVector2f object_pot_origs[2];
const sfVector2f object_rock_origs[2];
const sfVector2f object_rupee_blue_origs[4];
const sfVector2f object_rupee_green_origs[4];
const sfVector2f object_rupee_red_origs[4];
const sfVector2f object_wall_torch_origs[4];
const sfVector2f rain_flash_origs[5];
const sfVector2f rain_noflash_origs[5];
const sfVector2f sfx_bush_slash_origs[9];
const sfVector2f sfx_kill_enemy_origs[8];
const sfVector2f sfx_pot_explode_origs[9];
const sfVector2f transition_circle_origs[9];
