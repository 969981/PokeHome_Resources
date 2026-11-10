/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0067ac40; name: FUN_.text__0067ac40
 */


undefined8 FUN__text__0067ac40(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = FUN__text__00680914(param_1,*(undefined4 *)(param_2 + 8));
  lVar2 = lVar1;
  if (lVar1 != 0) {
    if ((*(byte *)(lVar1 + 0xe4) >> 1 & 1) == 0) {
      lVar2 = 0;
      if (*(int *)(lVar1 + 0xdc) != 5) {
        lVar2 = lVar1;
      }
    }
    else {
      lVar2 = 0;
    }
  }
  if (*(byte *)(param_2 + 0xc) < 9) {
                    /* WARNING: Could not emulate address calculation at 0x0067ac98 */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*(code *)(&UNK__text__0067aca4 +
                      (ulong)*(byte *)((ulong)*(byte *)(param_2 + 0xc) + 0x7618a9) * 4))(lVar2);
    return uVar3;
  }
  FUN__text__00683c60(param_1 + 0x120,param_2);
  *(undefined1 *)(param_2 + 0x90) = 1;
  return 0;
}


