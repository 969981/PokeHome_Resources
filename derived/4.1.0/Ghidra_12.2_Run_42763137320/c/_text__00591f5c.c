/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00591f5c; name: FUN_.text__00591f5c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__00591f5c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN__text__004e4e04(&DAT_00aeaf68,*(undefined4 *)(param_1 + 0x58),
                              *(undefined4 *)(param_1 + 0x5c),*(undefined4 *)(param_1 + 0x70),
                              param_1 + 0x60,(long *)(param_1 + 0x68));
  if ((int)uVar1 == 1) {
    lVar2 = FUN__text__00400f80(5,*(int *)(param_1 + 0x70) * *(int *)(param_1 + 0x5c) * 2);
    *(long *)(param_1 + 0xa8) = lVar2;
    if (lVar2 == 0) {
      if (*(long *)(param_1 + 0x68) != 0) {
        FUN__text__004e506c(_DAT_008a4fc0,*(undefined4 *)(param_1 + 0x60));
        *(undefined8 *)(param_1 + 0x68) = 0;
        if (*(long *)(param_1 + 0xa8) != 0) {
          FUN__text__00400fc0(5);
          *(undefined8 *)(param_1 + 0xa8) = 0;
        }
      }
      return 0x34;
    }
    uVar1 = 1;
    *(undefined1 *)(param_1 + 0x90) = 1;
    *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x58) / 400;
  }
  return uVar1;
}


