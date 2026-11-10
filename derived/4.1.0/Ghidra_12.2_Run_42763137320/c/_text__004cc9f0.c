/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004cc9f0; name: FUN_.text__004cc9f0
 */


bool FUN__text__004cc9f0(int *param_1,undefined8 param_2)

{
  int iVar1;
  ushort uVar2;
  long lVar3;
  
  iVar1 = *param_1;
  if ((iVar1 == 1) && (uVar2 = *(ushort *)(*(long *)(param_1 + 2) + 6), (ulong)uVar2 != 0)) {
    lVar3 = 0;
    do {
      FUN__text__004cca70(param_2,*(undefined4 *)(*(long *)(param_1 + 2) + lVar3),
                          (undefined4 *)(*(long *)(param_1 + 2) + lVar3) + 1);
      lVar3 = lVar3 + 0xc;
    } while ((ulong)uVar2 * 0xc != lVar3);
  }
  return iVar1 == 1;
}


