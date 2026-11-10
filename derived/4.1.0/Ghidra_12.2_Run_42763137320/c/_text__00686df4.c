/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00686df4; name: FUN_.text__00686df4
 */


undefined8 FUN__text__00686df4(long param_1)

{
  undefined8 uVar1;
  
  if (DAT_00c5f838 == 0) {
    uVar1 = nndetailDiagAbortNoMessageImpl();
    return uVar1;
  }
  nnosLockMutex(&DAT_00c5f870);
  FUN__text__00656b20(DAT_00c5f890,*(undefined8 *)(DAT_00c5f890 + 8),param_1,param_1 + 0x1d8);
  nnosUnlockMutex(&DAT_00c5f870);
  return 0;
}


