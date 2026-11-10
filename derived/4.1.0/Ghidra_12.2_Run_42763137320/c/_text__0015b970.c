/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0015b970; name: FUN_.text__0015b970
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0015b970(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  long local_98 [5];
  undefined4 local_70;
  long local_68 [5];
  undefined4 local_40;
  undefined8 local_38;
  
  FUN__text__0015ba98(local_68);
  if (local_68[3] == 0) {
    local_98[0] = 0;
    local_98[1] = 0xcbf29ce484222645;
    local_98[4] = 0;
    local_70 = 0;
    local_98[2] = 0x70f683;
    local_98[3] = 0;
  }
  else {
    puVar1 = _DAT_0089f5d0;
    if (local_68[0] != 0) {
      puVar1 = (undefined8 *)(local_68[0] + 0x60);
    }
    local_38 = *puVar1;
    FUN__text__0015c134(local_98,&local_38,0x714479,local_40);
  }
  FUN__text__0015b030(param_1,local_98 + 1,param_3);
  if ((local_98[3] != 0) && (local_98[0] != 0)) {
    (**(code **)(*(long *)(local_98[0] + 0x48) + 0x18))();
  }
  local_98[0] = 0;
  local_98[1] = 0xcbf29ce484222645;
  local_98[2] = 0x70f683;
  local_98[3] = 0;
  if (local_98[4] != 0) {
    (**(code **)(*(long *)(local_98[4] + 0x48) + 0x18))();
  }
  if ((local_68[3] != 0) && (local_68[0] != 0)) {
    (**(code **)(*(long *)(local_68[0] + 0x48) + 0x18))();
  }
  local_68[0] = 0;
  local_68[1] = 0xcbf29ce484222645;
  local_68[2] = 0x70f683;
  local_68[3] = 0;
  if (local_68[4] != 0) {
    (**(code **)(*(long *)(local_68[4] + 0x48) + 0x18))();
  }
  return;
}


