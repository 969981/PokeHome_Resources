/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003dce14; name: FUN_.text__003dce14
 */


void FUN__text__003dce14(undefined8 *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  
  piVar2 = (int *)*param_1;
  if (*piVar2 == 0) {
    *piVar2 = param_2;
    uVar4 = piVar2[4];
    uVar3 = (ulong)(uint)piVar2[5] - 1;
    if (uVar4 <= uVar3) goto LAB__text__003dce5c;
  }
  else {
    uVar4 = piVar2[4];
    uVar3 = (ulong)(uint)piVar2[5] - 1;
    if (uVar4 <= uVar3) {
LAB__text__003dce5c:
      iVar1 = (int)uVar3 - uVar4;
      lVar5 = LZCOUNT(iVar1 + 0x10);
      *(undefined4 *)
       (*(long *)(*(long *)(piVar2 + 8) + (0x1b - lVar5) * 8 + 8) +
       (ulong)(uint)(iVar1 - *(int *)((0x1c - lVar5) * 4 + 0x734874)) * 8) = 5;
      return;
    }
  }
  *(undefined4 *)(*(long *)(piVar2 + 6) + uVar3 * 8) = 5;
  return;
}


