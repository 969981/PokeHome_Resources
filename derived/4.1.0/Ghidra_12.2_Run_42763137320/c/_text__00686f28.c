/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00686f28; name: FUN_.text__00686f28
 */


long FUN__text__00686f28(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  
  iVar1 = FUN__text__006869c8();
  if (iVar1 != -1) {
    if (iVar1 < 0x32) {
      lVar2 = FUN__text__00686a30(0x2000,param_1,param_2,0x70f387);
      if (lVar2 == 0) {
        return 0;
      }
      FUN__text__00686df4(lVar2);
      nnosStartThread(lVar2);
      return lVar2;
    }
    nnsocketSetLastErrno(0xb);
  }
  return 0;
}


