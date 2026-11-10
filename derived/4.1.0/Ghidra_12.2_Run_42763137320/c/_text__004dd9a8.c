/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004dd9a8; name: FUN_.text__004dd9a8
 */


undefined4 FUN__text__004dd9a8(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  
  uVar1 = FUN__text__00428734();
  lVar2 = *(long *)(param_1 + 0x18);
  if ((*(byte *)(lVar2 + 10) >> 4 & 1) != 0) {
    local_28 = *(undefined4 *)(param_1 + 0x24);
    local_30 = *(undefined4 *)(param_1 + 0x28);
    uStack_24 = *(undefined4 *)(lVar2 + 0x2b0);
    uStack_2c = 0;
    FUN__text__0048e990(DAT_00ae9a88,*(undefined4 *)(lVar2 + 0x280),&local_30,param_1);
  }
  return uVar1;
}


