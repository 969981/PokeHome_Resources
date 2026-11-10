/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00664e8c; name: FUN_.text__00664e8c
 */


undefined8 FUN__text__00664e8c(long *param_1,undefined8 param_2,long param_3,undefined8 *param_4)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *param_1;
  *param_4 = 0;
  if (((*(char *)(lVar3 + 0xf44) < '\0') && ((*(ushort *)(lVar3 + 0x660) >> 3 & 1) == 0)) &&
     (iVar1 = FUN__text__0066748c(param_1,1,param_2,param_3), iVar1 != 0)) {
    uVar2 = 4;
  }
  else {
    while (param_3 != 0) {
      if (*(uint *)(param_1 + 7) < 8) {
                    /* WARNING: Could not emulate address calculation at 0x00664f1c */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (*(code *)(&UNK__text__00664f28 +
                          (ulong)*(byte *)((ulong)*(uint *)(param_1 + 7) + 0x7602b9) * 4))();
        return uVar2;
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}


