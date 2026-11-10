/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0042c110; name: FUN_.text__0042c110
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0042c110(long param_1,ushort param_2,float *param_3,char *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  long *plVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  float fVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  uint uVar12;
  float fVar13;
  
  if (*(long *)(param_1 + 0x58) != 0) {
    uVar4 = (uint)param_2;
    plVar8 = (long *)FUN__text__004329c0(*(long *)(param_1 + 0x58) + 0x50,uVar4);
    plVar3 = (long *)(*(long *)(*(long *)(param_1 + 0x58) + 0x50) +
                     (ulong)*(uint *)(*(long *)(param_1 + 0x58) + 0x58) * 8);
    if ((plVar3 != plVar8) && (lVar10 = *plVar8, *(uint *)(lVar10 + 8) == uVar4)) {
      if (*(char *)(lVar10 + 0xc) == '\x01') {
        fVar13 = 1.0;
        if (*param_4 != '\x03') {
          fVar13 = 0.0;
        }
        *param_3 = fVar13;
        lVar10 = *plVar8;
      }
      do {
        plVar11 = plVar8 + 1;
        fVar13 = (float)FUN__text__00435a30(*_DAT_008a45f0,lVar10,param_1 + 0x10);
        uVar6 = *(undefined4 *)(*plVar8 + 4);
        uVar12 = *(uint *)(param_1 + 0x68);
        uVar5 = *(uint *)(param_1 + 0x6c);
        if (uVar12 < uVar5) {
LAB__text__0042c214:
          *(uint *)(param_1 + 0x68) = uVar12 + 1;
          if (*(long *)(param_1 + 0x60) != 0) {
            puVar1 = (undefined4 *)(*(long *)(param_1 + 0x60) + (ulong)uVar12 * 0x10);
            *puVar1 = 1;
            puVar1[1] = uVar6;
            *(ushort *)(puVar1 + 2) = param_2;
            puVar1[3] = fVar13;
            fVar7 = *param_3 * fVar13;
            if (*param_4 != '\x03') {
              fVar7 = *param_3 + fVar13;
            }
            *param_3 = fVar7;
          }
        }
        else {
          iVar2 = uVar5 + (uVar5 >> 1);
          if (uVar5 == 0) {
            iVar2 = 1;
          }
          uVar9 = FUN__text__0042cd80(param_1 + 0x60,iVar2);
          if (((uVar9 & 1) != 0) && (uVar12 < *(uint *)(param_1 + 0x6c))) {
            uVar12 = *(uint *)(param_1 + 0x68);
            goto LAB__text__0042c214;
          }
        }
      } while ((plVar11 != plVar3) &&
              (lVar10 = *plVar11, plVar8 = plVar11, *(uint *)(lVar10 + 8) == uVar4));
    }
  }
  return;
}


