/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004b2648; name: FUN_.text__004b2648
 */


void FUN__text__004b2648(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_68 [8];
  undefined8 local_60;
  undefined1 auStack_58 [8];
  undefined8 local_50;
  undefined8 *local_48;
  undefined8 local_40;
  undefined8 *local_38;
  undefined8 *local_18;
  
  FUN__text__0040cca0(auStack_68,0x10);
  local_18 = (undefined8 *)0xffffffffffffffff;
  FUN__text__00412c50(&local_48,&local_18,0x10,8,0x71611e,0,1);
  puVar1 = local_18;
  if (local_48 != (undefined8 *)0x0) {
    *local_48 = 0x88b6c8;
    local_48[1] = param_2;
  }
  local_18 = (undefined8 *)0xffffffffffffffff;
  local_48 = puVar1;
  FUN__text__00413d68(auStack_58,&local_48,1,local_60);
  local_18 = (undefined8 *)0xffffffffffffffff;
  FUN__text__00412c50(&local_48,&local_18,0x10,8,0x70e6f6,0,1);
  local_38 = local_18;
  if (local_48 != (undefined8 *)0x0) {
    *local_48 = 0x88b6f0;
  }
  local_18 = (undefined8 *)0xffffffffffffffff;
  FUN__text__00413d68(&local_48,&local_38,1,local_50);
  local_38 = (undefined8 *)0xffffffffffffffff;
  FUN__text__00412c50(&local_18,&local_38,0x10,8,0x713457,0,1);
  puVar1 = local_38;
  if (local_18 != (undefined8 *)0x0) {
    *local_18 = 0x88b718;
    local_18[1] = param_2;
  }
  local_38 = (undefined8 *)0xffffffffffffffff;
  local_18 = puVar1;
  FUN__text__00413d68(param_1,&local_18,1,local_40);
  return;
}


