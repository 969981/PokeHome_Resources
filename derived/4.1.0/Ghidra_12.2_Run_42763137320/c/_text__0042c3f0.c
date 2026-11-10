/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0042c3f0; name: FUN_.text__0042c3f0
 */


undefined8 FUN__text__0042c3f0(long *param_1,long param_2,ushort param_3,float *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  ushort uVar5;
  long *plVar6;
  ushort *puVar7;
  float *pfVar8;
  ulong uVar9;
  uint uVar10;
  long lVar11;
  undefined8 uVar12;
  float fVar13;
  
  plVar6 = (long *)(**(code **)(*param_1 + 0x80))();
  if ((plVar6 == (long *)0x0) || (lVar11 = *plVar6, lVar11 == 0)) {
    uVar12 = 0;
  }
  else {
    uVar12 = 0;
    do {
      puVar7 = *(ushort **)(lVar11 + 0x20);
      fVar13 = 0.0;
      if (puVar7 != (ushort *)0x0) {
        uVar5 = *puVar7;
        uVar10 = (uint)uVar5;
        if (uVar5 < 2) {
          uVar10 = 1;
        }
        uVar9 = (ulong)uVar10;
        pfVar8 = (float *)((long)puVar7 + ((ulong)((uint)uVar5 * 2 + 9) & 0x3fff8));
        do {
          puVar7 = puVar7 + 1;
          if (*puVar7 == param_3) {
            if ((char)param_1[1] != '\0') {
              fVar13 = *pfVar8;
            }
            break;
          }
          pfVar8 = pfVar8 + 4;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      uVar10 = *(uint *)(param_2 + 0x68);
      uVar3 = *(uint *)(param_2 + 0x6c);
      uVar4 = *(undefined4 *)(lVar11 + 0x38);
      if (uVar10 < uVar3) {
LAB__text__0042c4e8:
        *(uint *)(param_2 + 0x68) = uVar10 + 1;
        if (*(long *)(param_2 + 0x60) != 0) {
          puVar1 = (undefined4 *)(*(long *)(param_2 + 0x60) + (ulong)uVar10 * 0x10);
          uVar12 = 1;
          *puVar1 = 2;
          puVar1[1] = uVar4;
          *(ushort *)(puVar1 + 2) = param_3;
          puVar1[3] = fVar13;
          *param_4 = *param_4 + fVar13;
        }
      }
      else {
        iVar2 = uVar3 + (uVar3 >> 1);
        if (uVar3 == 0) {
          iVar2 = 1;
        }
        uVar9 = FUN__text__0042cd80(param_2 + 0x60,iVar2);
        if (((uVar9 & 1) != 0) && (uVar10 < *(uint *)(param_2 + 0x6c))) {
          uVar10 = *(uint *)(param_2 + 0x68);
          goto LAB__text__0042c4e8;
        }
      }
      lVar11 = *(long *)(lVar11 + 0x10);
    } while (lVar11 != 0);
  }
  return uVar12;
}


