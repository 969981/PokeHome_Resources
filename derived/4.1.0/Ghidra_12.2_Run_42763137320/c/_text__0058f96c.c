/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0058f96c; name: FUN_.text__0058f96c
 */


int FUN__text__0058f96c(long param_1,long param_2,int param_3)

{
  uint *puVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  undefined2 uVar8;
  long lVar9;
  uint uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  int local_70 [2];
  undefined8 local_68;
  undefined1 auStack_60 [8];
  short *local_58;
  
  if (param_2 == 0) {
    iVar6 = 2;
  }
  else {
    local_70[0] = 0;
    local_68 = 0;
    iVar6 = FUN__text__004aed30(param_2,param_3,auStack_60,param_1 + 0x40,(uint *)(param_1 + 0x34),
                                (uint *)(param_1 + 0x38),(int *)(param_1 + 0x2c),param_1 + 0x30,
                                local_70,0,0);
    if (iVar6 == 1) {
      if (*local_58 == -1) {
        uVar2 = *(undefined4 *)(local_58 + 10);
        lVar9 = *(long *)(param_1 + 0x18);
        if (lVar9 != 0) {
          sVar5 = local_58[1];
          *(undefined4 *)(lVar9 + 0x2b0) = *(undefined4 *)(local_58 + 2);
          *(undefined4 *)(lVar9 + 0x2b4) = uVar2;
          *(undefined1 *)(lVar9 + 0x2ba) = 5;
          *(ushort *)(lVar9 + 0x2b8) = sVar5 << 8 | 0x20;
        }
        if (local_70[0] != 0) {
          *(undefined8 *)(param_1 + 0x10) = local_68;
        }
        param_2 = param_2 + (ulong)*(uint *)(param_1 + 0x30);
        *(long *)(param_1 + 0x110) = param_2;
        uVar3 = *(uint *)(local_58 + 0xc);
        *(uint *)(param_1 + 0x24) = uVar3;
        uVar11 = *(undefined8 *)(local_58 + 0x12);
        uVar12 = *(undefined8 *)(local_58 + 0x16);
        uVar13 = *(undefined8 *)(local_58 + 0x1a);
        *(undefined8 *)(param_1 + 0xe6) = *(undefined8 *)(local_58 + 0x1d);
        *(undefined8 *)(param_1 + 0xd8) = uVar12;
        *(undefined8 *)(param_1 + 0xe0) = uVar13;
        *(undefined8 *)(param_1 + 0xd0) = uVar11;
        *(undefined8 *)(param_1 + 200) = *(undefined8 *)(local_58 + 0xe);
        uVar4 = *(undefined4 *)(local_58 + 2);
        *(undefined4 *)(param_1 + 0xb8) = uVar2;
        *(undefined4 *)(param_1 + 0xf0) = uVar4;
        uVar10 = *(uint *)(param_1 + 0x38);
        if (uVar10 == 0) {
          uVar10 = uVar3 - 1;
          *(uint *)(param_1 + 0x38) = uVar10;
        }
        iVar6 = 2;
        if (((*(uint *)(param_1 + 0x34) <= uVar10) && (uVar10 < uVar3)) &&
           (*(int *)(param_1 + 0x2c) + *(uint *)(param_1 + 0x30) == param_3)) {
          *(long *)(param_1 + 0x108) = param_2;
          *(undefined4 *)(param_1 + 0x28) = 0;
          if (*(long *)(param_1 + 0x18) == 0) {
            uVar8 = 1;
          }
          else {
            uVar8 = *(undefined2 *)(*(long *)(param_1 + 0x18) + 0x310);
          }
          *(undefined2 *)(param_1 + 0x54) = uVar8;
          iVar6 = FUN__text__0058fb7c(param_1);
          if (iVar6 == 1) {
            if ((*(long *)(param_1 + 0x18) == 0) ||
               ((*(byte *)(*(long *)(param_1 + 0x18) + 0x315) >> 6 & 1) == 0)) {
              iVar7 = 0;
              iVar6 = 1;
            }
            else {
              iVar6 = FUN__text__0058fc80(param_1);
              lVar9 = *(long *)(param_1 + 0x18);
              puVar1 = (uint *)(lVar9 + 0x313);
              iVar7 = *(int *)(lVar9 + 0x30c);
              if ((*puVar1 & 0x400000) != 0) {
                iVar7 = 0;
              }
              *(int *)(param_1 + 0x28) = iVar7 + *(int *)(param_1 + 0x28);
              *(undefined4 *)(lVar9 + 0x30c) = 0;
              *puVar1 = *puVar1 & 0xfe3fffff;
            }
            FUN__text__0058fd64(param_1,iVar7);
          }
        }
      }
      else {
        iVar6 = 7;
      }
    }
  }
  return iVar6;
}


