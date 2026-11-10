/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002d1640; name: FUN_.text__002d1640
 */


void FUN__text__002d1640(long *param_1,uint param_2,uint param_3)

{
  int *piVar1;
  long lVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  int *piVar8;
  
  lVar2 = *param_1;
  sVar3 = *(short *)param_1[1];
  uVar6 = FUN__text__002d45f0(*(undefined8 *)(lVar2 + 0x90),sVar3,param_2);
  if ((uVar6 & 1) != 0) {
LAB__text__002d167c:
    uVar4 = 1 << (ulong)(param_2 & 0x1f);
    *(uint *)(param_1[2] + 4) = *(uint *)(param_1[2] + 4) | uVar4;
    *(uint *)param_1[2] = *(uint *)param_1[2] | uVar4;
    *(byte *)(param_1[2] + 0x10) =
         *(byte *)(param_1[2] + 0x10) | (byte)(1 << (ulong)(param_3 & 0x1f));
    return;
  }
  lVar7 = FUN__text__002f0f30();
  if (lVar7 != 0) {
    if (*(int **)(lVar2 + 0x50) != *(int **)(lVar2 + 0x58)) {
      piVar8 = *(int **)(lVar2 + 0x50) + 1;
      do {
        if (((short)piVar8[-1] == sVar3) &&
           ((uint)*(ushort *)((long)piVar8 + -2) == (param_2 & 0xffff))) {
          if (*piVar8 == 0) {
            return;
          }
          iVar5 = FUN__text__002d5ea0();
          if (iVar5 == 0) {
            return;
          }
          goto LAB__text__002d167c;
        }
        piVar1 = piVar8 + 1;
        piVar8 = piVar8 + 2;
      } while (piVar1 != *(int **)(lVar2 + 0x58));
    }
  }
  return;
}


