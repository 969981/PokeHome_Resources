/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00666684; name: FUN_.text__00666684
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00666684(undefined8 *param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  if ((long)param_2 < 1) {
    *(undefined1 *)(param_1 + 1) = 0;
    *param_1 = _DAT_0070fd6e;
    return;
  }
  if (param_2 < 360000) {
    lVar2 = param_2 + (long)(int)((param_2 & 0xffffffff) / 0xe10) * -0xe10;
    iVar1 = (int)lVar2 / 0x3c;
    FUN__text__006599c0(param_1,9,0x7181d4,(param_2 & 0xffffffff) / 0xe10,(long)iVar1,
                        lVar2 + (long)iVar1 * -0x3c);
    return;
  }
  if (param_2 < 86400000) {
    FUN__text__006599c0(param_1,9,0x70bcdc,param_2 / 0x15180,(param_2 % 0x15180) / 0xe10);
    return;
  }
  FUN__text__006599c0(param_1,9,0x71a4fd);
  return;
}


