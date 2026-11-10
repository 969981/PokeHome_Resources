/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00443660; name: FUN_.text__00443660
 */


void FUN__text__00443660(long param_1,byte *param_2,long *param_3,byte *param_4)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  
  bVar2 = *param_2;
  if (bVar2 == 0xff) {
    if ((((param_2[8] == 0xff) && (*(long *)(param_2 + 0x10) == 0)) &&
        (*(char *)(param_1 + 0x10) != '\0')) && (*param_3 != 0)) {
      FUN__text__004449ec(*(undefined8 *)(param_1 + 8));
      bVar2 = *param_2;
      if (bVar2 != 0xff) goto LAB__text__00443720;
    }
    uVar6 = *(uint *)(param_1 + 0x20);
    if (0 < (int)uVar6) {
      lVar8 = 0;
      do {
        pbVar5 = (byte *)(*(long *)(param_1 + 0x18) + lVar8);
        *param_4 = *pbVar5;
        FUN__text__004437a0(pbVar5,param_2 + 8,param_3,param_4 + 8);
        lVar8 = lVar8 + 0x28;
      } while ((ulong)uVar6 * 0x28 != lVar8);
    }
  }
  else {
LAB__text__00443720:
    uVar6 = *(uint *)(param_1 + 0x20);
    if (uVar6 != 0) {
      iVar7 = 0;
      do {
        iVar1 = iVar7 + (uVar6 >> 1);
        pbVar5 = (byte *)(*(long *)(param_1 + 0x18) + (long)iVar1 * 0x28);
        bVar3 = *pbVar5;
        if (bVar3 == bVar2) {
          *param_4 = bVar2;
          FUN__text__004437a0(pbVar5,param_2 + 8,param_3,param_4 + 8);
          break;
        }
        if (bVar3 < bVar2) {
          iVar7 = iVar1 + 1;
        }
        uVar4 = uVar6 - (bVar3 < bVar2);
        uVar6 = uVar4 >> 1;
      } while (1 < uVar4);
    }
  }
  *param_4 = 0xff;
  return;
}


