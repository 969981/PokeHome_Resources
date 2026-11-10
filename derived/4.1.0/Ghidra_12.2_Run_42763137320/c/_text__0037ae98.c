/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0037ae98; name: FUN_.text__0037ae98
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0037ae98(uint *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  undefined4 local_14;
  
  puVar1 = _DAT_0089f448;
  if (*(long *)(param_1 + 2) != 0) {
    uVar3 = *param_1;
    if (uVar3 < 5 && (1 << (ulong)(uVar3 & 0x1f) & 0x16U) != 0) {
      local_14 = 0;
      FUN__text__00371260(*_DAT_0089f448,&local_14);
      FUN__text__003749d0();
      local_14 = 0;
      lVar2 = FUN__text__00371260(*puVar1,&local_14);
      *(undefined1 *)(lVar2 + 0x98) = 0;
      uVar3 = *param_1;
    }
    if (uVar3 - 3 < 2) {
      local_14 = 1;
      FUN__text__00371260(*puVar1,&local_14);
      FUN__text__003749d0();
      local_14 = 1;
      lVar2 = FUN__text__00371260(*puVar1,&local_14);
      *(undefined1 *)(lVar2 + 0x98) = 0;
    }
    if (*(long *)(param_1 + 2) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 2) + 0x48) + 0x18))();
      param_1[2] = 0;
      param_1[3] = 0;
    }
  }
  return;
}


