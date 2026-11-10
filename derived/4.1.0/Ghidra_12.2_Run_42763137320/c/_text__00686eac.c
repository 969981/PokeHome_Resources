/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00686eac; name: FUN_.text__00686eac
 */


undefined8 FUN__text__00686eac(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (DAT_00c5f838 != 0) {
    nnosLockMutex(&DAT_00c5f870);
    iVar1 = FUN__text__00686e58(DAT_00c5f890,param_1);
    if (iVar1 == 0) {
      FUN__text__00656b20(DAT_00c5f898,*(undefined8 *)(DAT_00c5f898 + 8),param_1,param_1 + 0x1d8);
      nnosSignalEvent(&DAT_00c5f848);
      nnosUnlockMutex(&DAT_00c5f870);
      return 0;
    }
  }
  uVar2 = nndetailDiagAbortNoMessageImpl();
  return uVar2;
}


