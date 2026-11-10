/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0063b748; name: FUN_.text__0063b748
 */


void FUN__text__0063b748(undefined8 param_1)

{
  long lVar1;
  undefined8 local_38;
  undefined4 local_30 [2];
  undefined8 local_28;
  
  lVar1 = FUN__text__00602950();
  local_28 = *(undefined8 *)(lVar1 + 0x50);
  local_30[0] = 0x2e6;
  FUN__text__0063bb98(&local_38,param_1);
  if (DAT_00c162a0 != 0) {
    (**(code **)(*(long *)(DAT_00c162a0 + 0x48) + 0x18))();
  }
  DAT_00c162a0 = local_38;
  lVar1 = FUN__text__0063cdec(&local_38,param_1);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  if (DAT_00c16260 != 0) {
    (**(code **)(*(long *)(DAT_00c16260 + 0x48) + 0x18))();
  }
  DAT_00c16260 = lVar1;
  FUN__text__0063d4a0(lVar1,local_30);
  return;
}


