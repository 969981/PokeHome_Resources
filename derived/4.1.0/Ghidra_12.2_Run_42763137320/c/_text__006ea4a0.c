/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006ea4a0; name: FUN_.text__006ea4a0
 */


long FUN__text__006ea4a0(int *param_1,long *param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  
  if ((param_3 == 0) || ((char)param_1[0xc] == '\0')) {
    return 0;
  }
  iVar4 = *param_1;
  lVar5 = *(long *)(param_1 + (long)iVar4 * 0x6c + 0x76);
  uVar1 = (*(long *)(param_1 + (long)iVar4 * 0x6c + 0x70) + param_3 + -1 &
          -*(long *)(param_1 + (long)iVar4 * 0x6c + 0x70)) + lVar5;
  if (uVar1 <= *(ulong *)(param_1 + (long)iVar4 * 0x6c + 0x20)) {
    *(ulong *)(param_1 + (long)iVar4 * 0x6c + 0x76) = uVar1;
    if (*(long *)(param_1 + (long)iVar4 * 0x6c + 0x78) != 0) {
      lVar5 = *(long *)(param_1 + (long)iVar4 * 0x6c + 0x78) + lVar5;
      lVar2 = *(long *)(param_1 + (long)iVar4 * 0x6c + 0x72);
      lVar3 = *(long *)(param_1 + (long)iVar4 * 0x6c + 0x74);
      *param_2 = lVar2;
      param_2[1] = lVar3;
      *param_2 = (lVar5 - *(long *)(param_1 + (long)iVar4 * 0x6c + 0x78)) + lVar2;
      iVar4 = *param_1;
      *(long *)(param_1 + (long)iVar4 * 2 + 4) =
           (*(long *)(param_1 + (long)iVar4 * 0x6c + 0x70) + param_3 + -1 &
           -*(long *)(param_1 + (long)iVar4 * 0x6c + 0x70)) +
           *(long *)(param_1 + (long)iVar4 * 2 + 4);
      return lVar5;
    }
  }
  FUN__text__006d84a0(0,0x800);
  FUN__text__006d84b0(0x717912,param_3);
  FUN__text__006d84b0(0x71c918,*(undefined8 *)(param_1 + (long)*param_1 * 2 + 4),
                      *(undefined8 *)(param_1 + 10));
  return 0;
}


