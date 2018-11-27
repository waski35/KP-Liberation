/*
    KP LIBERATION CORE FUNCTIONS

    File: functions.hpp
    Author: KP Liberation Dev Team - https://github.com/KillahPotatoes
    Date: 2017-10-28
    Last Update: 2018-11-27
    License: GNU General Public License v3.0 - https://www.gnu.org/licenses/gpl-3.0.html

    Description:
        Defines for all functions, which are brought by this module.
*/

class core {
    file = "modules\02_core\fnc";

    // Check if units are near a position
    class core_areUnitsNear {};

    // Build fob and register it
    class core_buildFob {};

    // Checks if player can build fob
    class core_canBuildFob {};

    // Change the owner of a sector
    class core_changeSectorOwner {};

    // Check if win conditions are met
    class core_checkWinCond {};

    // Creates FOB marker
    class core_createFobMarker {};

    // Get all mobile respawn vehicles
    class core_getMobSpawns {};

    // Get the nearest capturable sector
    class core_getNearestSector {};

    // Handle an activated sector
    class core_handleSector {};

    // Handle vehicle spawn event
    class core_handleVehicleSpawn {};

    // Module post initialization
    class core_postInit {
        postInit = 1;
    };

    // Module pre initialization
    class core_preInit {
        preInit = 1;
    };

    // Initialize BIS revive
    class core_reviveInit {};

    // CBA Settings for this module
    class core_settings {};

    // Setup of actions avaible to players
    class core_setupPlayerActions {};

    // The spawn camera sequence
    class core_spawnCam {};

    // Spawning of the Potato 01 helicopter
    class core_spawnPotato {};

    // Spawning of the start fob box
    class core_spawnStartFobBox {};

    // Spawning of the start vehicles
    class core_spawnStartVeh {};

    // Updates the fob markers labels
    class core_updateFobMarkers {};

    // Updates the sector marker colors
    class core_updateSectorMarkers {};
};