/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00413c90; name: FUN_.text__00413c90
 */


void FUN__text__00413c90(undefined8 param_1,undefined8 *param_2)

{
  undefined8 local_28;
  
  if (param_2[1] == 0) {
    FUN__text__00413d14(param_1,0x34);
    return;
  }
  FUN__text__00412dc0(param_2[1],*(undefined4 *)(param_2 + 2),1);
  local_28 = *param_2;
  *param_2 = 0xffffffffffffffff;
  FUN__text__00413d24(param_1,&local_28,*(undefined4 *)((long)param_2 + 0x14));
  return;
}


