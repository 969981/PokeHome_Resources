/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00591494; name: FUN_.text__00591494
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__00591494(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN__text__004e4e04(&DAT_00aeaf68,*(undefined4 *)(param_1 + 0x84),
                              *(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x98),
                              param_1 + 0x8c,(long *)(param_1 + 0x90));
  if ((int)uVar1 == 1) {
    lVar2 = FUN__text__00400f80(5,*(int *)(param_1 + 0x98) * *(int *)(param_1 + 0x88) * 2);
    *(long *)(param_1 + 0xd0) = lVar2;
    if (lVar2 == 0) {
      if (*(long *)(param_1 + 0x90) != 0) {
        FUN__text__004e506c(_DAT_008a4fc0,*(undefined4 *)(param_1 + 0x8c));
        *(undefined8 *)(param_1 + 0x90) = 0;
        if (*(long *)(param_1 + 0xd0) != 0) {
          FUN__text__00400fc0(5);
          *(undefined8 *)(param_1 + 0xd0) = 0;
        }
      }
      return 0x34;
    }
    uVar1 = 1;
    *(undefined1 *)(param_1 + 0xb8) = 1;
    *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0x84) / 400;
  }
  return uVar1;
}


