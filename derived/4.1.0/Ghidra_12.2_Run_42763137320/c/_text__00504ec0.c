/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00504ec0; name: FUN_.text__00504ec0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00504ec0(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  
  plVar1 = _DAT_008a40b0;
  *(byte *)(*_DAT_008a40b0 + 0xc4) = *(byte *)(*_DAT_008a40b0 + 0xc4) | 2;
  FUN__text__00506a10();
  lVar2 = FUN__text__0050c2e0(*plVar1,*param_1);
  if (lVar2 != 0) {
    uVar3 = *(undefined4 *)(param_1 + 1);
    *(undefined4 *)(lVar2 + 0x120) = *(undefined4 *)((long)param_1 + 0xc);
    *(undefined4 *)(lVar2 + 0x11c) = uVar3;
  }
  return;
}


