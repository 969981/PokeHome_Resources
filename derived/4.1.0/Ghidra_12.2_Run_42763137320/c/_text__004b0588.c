/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004b0588; name: FUN_.text__004b0588
 */


void FUN__text__004b0588(undefined8 param_1,ulong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_88 [8];
  undefined8 local_80;
  undefined1 auStack_78 [8];
  undefined8 local_70;
  undefined1 auStack_68 [8];
  undefined8 local_60;
  undefined8 *local_58;
  undefined8 local_50;
  undefined8 *local_48 [2];
  undefined8 *local_38;
  undefined8 *local_18;
  
  FUN__text__00411c10();
  FUN__text__00413d04(auStack_88);
  local_58 = (undefined8 *)0xffffffffffffffff;
  FUN__text__00412c50(local_48,&local_58,0x10,8,0x71ae1c,0,1);
  puVar1 = local_58;
  if (local_48[0] != (undefined8 *)0x0) {
    *local_48[0] = 0x88b5b0;
    local_48[0][1] = param_1;
  }
  local_58 = (undefined8 *)0xffffffffffffffff;
  local_48[0] = puVar1;
  FUN__text__00413d68(auStack_78,local_48,1,local_80);
  local_58 = (undefined8 *)0xffffffffffffffff;
  FUN__text__00412c50(local_48,&local_58,0x18,8,0x71f667,0,1);
  puVar1 = local_58;
  if (local_48[0] != (undefined8 *)0x0) {
    *local_48[0] = 0x88b5d8;
    local_48[0][1] = param_1;
    local_48[0][2] = param_2 & 1;
  }
  local_58 = (undefined8 *)0xffffffffffffffff;
  local_48[0] = puVar1;
  FUN__text__00413d68(auStack_68,local_48,1,local_70);
  local_18 = (undefined8 *)0xffffffffffffffff;
  FUN__text__00412c50(local_48,&local_18,0x10,8,0x7147e7,0,1);
  puVar1 = local_18;
  if (local_48[0] != (undefined8 *)0x0) {
    *local_48[0] = 0x88b600;
  }
  local_18 = (undefined8 *)0xffffffffffffffff;
  local_48[0] = puVar1;
  FUN__text__00413d68(&local_58,local_48,1,local_60);
  local_18 = (undefined8 *)0xffffffffffffffff;
  FUN__text__00412c50(local_48,&local_18,0x10,8,0x716c11,0,1);
  local_38 = local_18;
  if (local_48[0] != (undefined8 *)0x0) {
    *local_48[0] = 0x88b628;
    local_48[0][1] = param_1;
  }
  local_18 = (undefined8 *)0xffffffffffffffff;
  FUN__text__00413d68(local_48,&local_38,1,local_50);
  FUN__text__00413e10(local_48);
  FUN__text__00413b00();
  FUN__text__00411c20();
  return;
}


