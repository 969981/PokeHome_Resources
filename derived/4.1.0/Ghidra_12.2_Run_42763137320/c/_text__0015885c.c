/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0015885c; name: FUN_.text__0015885c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN__text__0015885c(long param_1,undefined2 *param_2)

{
  ushort uVar1;
  ulong uVar2;
  
  if (*(int *)(param_1 + 0xc08) == 4) {
    uVar2 = FUN__text__001586b4(param_1,param_2);
    return uVar2;
  }
  if (*(int *)(param_1 + 0xc08) == 3) {
    uVar2 = FUN__text__00158250(*_DAT_0089f538,param_2);
    return uVar2;
  }
  uVar2 = FUN__text__00157130(*param_2,1);
  uVar1 = param_2[uVar2 & 1];
  if (uVar1 < 0x100) {
    return (ulong)((*(uint *)(((ulong)(uVar1 >> 3) & 0x1ffc) + 0x724eb0) &
                   1 << (ulong)(uVar1 & 0x1f)) != 0);
  }
  return 0;
}


