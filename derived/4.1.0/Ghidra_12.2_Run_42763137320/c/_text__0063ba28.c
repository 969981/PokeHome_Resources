/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0063ba28; name: FUN_.text__0063ba28
 */


void FUN__text__0063ba28(undefined8 param_1)

{
  long lVar1;
  undefined8 local_38;
  undefined4 local_30 [2];
  undefined8 local_28;
  
  lVar1 = FUN__text__00602950();
  local_28 = *(undefined8 *)(lVar1 + 0x70);
  local_30[0] = 0x397;
  FUN__text__0063c148(&local_38,param_1);
  if (DAT_00c162c0 != 0) {
    (**(code **)(*(long *)(DAT_00c162c0 + 0x48) + 0x18))();
  }
  DAT_00c162c0 = local_38;
  lVar1 = FUN__text__0063cdec(&local_38,param_1);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  if (DAT_00c16280 != 0) {
    (**(code **)(*(long *)(DAT_00c16280 + 0x48) + 0x18))();
  }
  DAT_00c16280 = lVar1;
  FUN__text__0063d4a0(lVar1,local_30);
  return;
}


