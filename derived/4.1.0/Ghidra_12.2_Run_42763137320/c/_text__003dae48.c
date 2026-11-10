/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003dae48; name: FUN_.text__003dae48
 */


long * FUN__text__003dae48(long *param_1)

{
  int *piVar1;
  uint uVar2;
  size_t sVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  uint *puVar9;
  int *piVar10;
  
  piVar10 = (int *)*param_1;
  uVar2 = piVar10[5];
  uVar7 = (ulong)uVar2 - 1;
  if (uVar7 < (uint)piVar10[4]) {
    puVar9 = (uint *)(*(long *)(piVar10 + 6) + uVar7 * 8);
    uVar6 = *puVar9;
    if ((uVar6 & 0xfffffffb) != 3) goto LAB__text__003dae88;
LAB__text__003daef0:
    if (((uint)piVar10[1] >> 1 & 1) == 0) {
      lVar8 = *(long *)(piVar10 + 2);
      if (((uint)piVar10[1] >> 2 & 1) == 0) {
        lVar5 = *(long *)(piVar10 + 0x14);
        if (piVar10 + 0x26 < (int *)(lVar5 + 1U)) {
LAB__text__003daf14:
          piVar1 = piVar10 + 0x16;
          sVar3 = lVar5 - (long)piVar1;
          *(int **)(piVar10 + 0x14) = piVar1;
          if ((long)sVar3 < 0) {
LAB__text__003db05c:
            if (*(int *)(lVar8 + 0x28) == 0) {
              *(int *)(lVar8 + 0x28) = 0x16;
            }
            goto LAB__text__003db06c;
          }
          if (*(ulong *)(lVar8 + 0x20) < *(long *)(lVar8 + 0x10) + sVar3) {
            uVar7 = FUN__text__003d6a74(lVar8,piVar1,sVar3);
            if ((uVar7 & 1) == 0) goto LAB__text__003db06c;
          }
          else {
            memcpy((void *)(*(long *)(lVar8 + 0x18) + *(long *)(lVar8 + 0x10)),piVar1,sVar3);
            *(size_t *)(lVar8 + 0x10) = *(long *)(lVar8 + 0x10) + sVar3;
          }
        }
LAB__text__003dafbc:
        **(undefined1 **)(piVar10 + 0x14) = 0x7d;
        *(long *)(piVar10 + 0x14) = *(long *)(piVar10 + 0x14) + 1;
        piVar10 = (int *)*param_1;
        uVar2 = piVar10[5];
joined_r0x003daf7c:
        if (uVar2 == 0) {
          return param_1;
        }
        if (uVar2 - 1 == 0) {
          *puVar9 = 1;
          return param_1;
        }
        piVar10[5] = uVar2 - 1;
        return param_1;
      }
      if ((int *)(*(long *)(piVar10 + 0x14) + 1U) <= piVar10 + 0x26) goto LAB__text__003db0ac;
      piVar1 = piVar10 + 0x16;
      sVar3 = *(long *)(piVar10 + 0x14) - (long)piVar1;
      *(int **)(piVar10 + 0x14) = piVar1;
      if ((long)sVar3 < 0) goto LAB__text__003db05c;
      if (*(ulong *)(lVar8 + 0x20) < *(long *)(lVar8 + 0x10) + sVar3) {
        uVar7 = FUN__text__003d6a74(lVar8,piVar1,sVar3);
        if ((uVar7 & 1) != 0) goto LAB__text__003db0ac;
      }
      else {
        memcpy((void *)(*(long *)(lVar8 + 0x18) + *(long *)(lVar8 + 0x10)),piVar1,sVar3);
        *(size_t *)(lVar8 + 0x10) = *(long *)(lVar8 + 0x10) + sVar3;
LAB__text__003db0ac:
        **(undefined1 **)(piVar10 + 0x14) = 10;
        lVar5 = *param_1;
        *(long *)(piVar10 + 0x14) = *(long *)(piVar10 + 0x14) + 1;
        uVar7 = FUN__text__003d9080(lVar5,(ulong)*(uint *)(lVar5 + 0x14) - 1);
        if ((uVar7 & 1) != 0) {
          piVar10 = (int *)*param_1;
          lVar5 = *(long *)(piVar10 + 0x14);
          if (piVar10 + 0x26 < (int *)(lVar5 + 1U)) goto LAB__text__003daf14;
          goto LAB__text__003dafbc;
        }
      }
LAB__text__003db06c:
      if (*(int *)*param_1 == 0) {
        *(int *)*param_1 = 8;
      }
      goto LAB__text__003daf58;
    }
    if (puVar9[1] == 0) goto joined_r0x003daf7c;
    iVar4 = *piVar10;
joined_r0x003db088:
    if (iVar4 != 0) goto LAB__text__003daf58;
    iVar4 = 6;
  }
  else {
    iVar4 = (int)uVar7 - piVar10[4];
    lVar8 = LZCOUNT(iVar4 + 0x10);
    puVar9 = (uint *)(*(long *)(*(long *)(piVar10 + 8) + (0x1b - lVar8) * 8 + 8) +
                     (ulong)(uint)(iVar4 - *(int *)((0x1c - lVar8) * 4 + 0x734874)) * 8);
    uVar6 = *puVar9;
    if ((uVar6 & 0xfffffffb) == 3) goto LAB__text__003daef0;
LAB__text__003dae88:
    iVar4 = *piVar10;
    if (uVar6 != 1) goto joined_r0x003db088;
    if (iVar4 != 0) goto LAB__text__003daf58;
    iVar4 = 0xb;
  }
  *piVar10 = iVar4;
LAB__text__003daf58:
  *puVar9 = 5;
  return param_1;
}


