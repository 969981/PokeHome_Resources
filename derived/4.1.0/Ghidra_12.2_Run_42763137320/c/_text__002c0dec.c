/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002c0dec; name: FUN_.text__002c0dec
 */


void FUN__text__002c0dec(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  bool bVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  short *psVar7;
  long lVar8;
  ushort uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 local_5c;
  undefined2 local_58;
  undefined4 local_54;
  undefined2 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  
  uVar6 = FUN__text__00633b34(param_2,2);
  if ((uVar6 & 1) == 0) {
    iVar4 = FUN__text__00631008(param_2);
    sVar3 = FUN__text__00631010(param_2);
    if (iVar4 < 0x225) {
      if ((iVar4 != 0x3b) && (iVar4 != 0x65)) goto LAB__text__002c0e88;
    }
    else if ((iVar4 != 0x225) && (iVar4 != 0x2c9)) {
      if ((iVar4 == 900) && (sVar3 == 1)) {
        return;
      }
      goto LAB__text__002c0e88;
    }
    if (sVar3 != 2) {
LAB__text__002c0e88:
      *(undefined8 *)(param_1 + 0x1f438) = param_2;
      uVar5 = FUN__text__00631008(param_2);
      if (param_3 == 0) {
        bVar2 = false;
      }
      else {
        bVar2 = *(char *)(param_3 + 4) != '\0';
      }
      if ((int)uVar5 < 0x3d5) {
        lVar1 = param_1 + 100;
        lVar8 = lVar1 + (ulong)uVar5 * 0x58;
        *(uint *)(lVar8 + 0x70) = *(uint *)(lVar8 + 0x70) | 1;
        if (*(ushort *)(lVar8 + 0x7c) == 0) {
          uVar9 = *(ushort *)(param_1 + 0x6a);
          if (uVar9 >> 5 < 0x753) {
            uVar9 = uVar9 + 1;
            *(ushort *)(param_1 + 0x6a) = uVar9;
          }
          *(ushort *)(lVar8 + 0x7c) = uVar9;
          psVar7 = (short *)(lVar1 + (ulong)uVar5 * 0x58 + 0x7a);
          sVar3 = *psVar7;
        }
        else {
          psVar7 = (short *)(lVar1 + (ulong)uVar5 * 0x58 + 0x7a);
          sVar3 = *psVar7;
        }
        if (sVar3 == 0) {
          *psVar7 = 1;
        }
      }
      uVar6 = FUN__text__00633b34(param_2,2);
      if ((uVar6 & 1) == 0) {
        local_5c = 0;
        local_58 = 0;
        local_54 = 0;
        local_50 = 0;
        local_4c = 0;
        local_44 = 0xffffffff;
        FUN__text__00205d60(&local_5c,param_2);
        uVar5 = FUN__text__00635270(param_2);
        uVar10 = FUN__text__00635bc8(param_2);
        uVar11 = FUN__text__00635bd4(param_2);
        FUN__text__002c1610(uVar10,uVar11,param_1,&local_5c,uVar5 & 1,bVar2);
      }
      return;
    }
  }
  return;
}


