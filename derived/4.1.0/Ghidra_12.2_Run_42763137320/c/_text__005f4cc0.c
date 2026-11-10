/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005f4cc0; name: FUN_.text__005f4cc0
 */


long FUN__text__005f4cc0(long param_1,undefined4 *param_2)

{
  undefined2 uVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  short *psVar5;
  undefined4 uVar6;
  bool bVar7;
  short sVar8;
  uint uVar9;
  undefined4 uVar10;
  ulong uVar11;
  
  uVar3 = FUN__text__005f3244(*(undefined8 *)(param_1 + 0x78));
  lVar4 = FUN__text__005f3720(uVar3,*(undefined4 *)(param_1 + 0xb0));
  if (lVar4 == 0) {
    uVar6 = 0;
    goto LAB__text__005f4de8;
  }
  psVar5 = (short *)(lVar4 + (long)*(int *)(param_1 + 0xac) * 2);
  if (*psVar5 == 0x10) {
    *(undefined1 *)(param_1 + 0xb9) = 1;
    uVar1 = FUN__text__005f37a0(psVar5);
    *(undefined2 *)(param_1 + 0xc0) = uVar1;
    uVar2 = FUN__text__005f37c0(psVar5);
    uVar9 = uVar2 & 0xffff;
    if ((uVar2 & 0xfff0) != 0) {
      uVar9 = 0x10;
    }
    *(uint *)(param_1 + 0xc4) = uVar9;
    if (uVar9 != 0) {
      uVar11 = 0;
      do {
        uVar1 = FUN__text__005f37f0(psVar5,uVar11 & 0xffffffff);
        uVar9 = *(uint *)(param_1 + 0xc4);
        *(undefined2 *)(param_1 + 200 + uVar11 * 2) = uVar1;
        uVar11 = uVar11 + 1;
      } while (uVar11 < uVar9);
    }
    psVar5 = (short *)FUN__text__005f3780(psVar5);
LAB__text__005f4dd0:
    sVar8 = *psVar5;
    uVar6 = (undefined4)((ulong)((long)psVar5 - lVar4) >> 1);
    if (sVar8 == 0) goto LAB__text__005f4de0;
LAB__text__005f4d9c:
    if (sVar8 != 10) {
      uVar10 = uVar6;
    }
    else {
      *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 1;
      uVar10 = 0;
    }
    bVar7 = sVar8 == 10;
    *(undefined4 *)(param_1 + 0xac) = uVar10;
  }
  else {
    *(undefined1 *)(param_1 + 0xb9) = 0;
    sVar8 = *psVar5;
    if (sVar8 != 0 && sVar8 != 10) {
      psVar5 = psVar5 + 1;
      goto LAB__text__005f4dd0;
    }
    uVar6 = (undefined4)((ulong)((long)psVar5 - lVar4) >> 1);
    if (sVar8 != 0) goto LAB__text__005f4d9c;
LAB__text__005f4de0:
    bVar7 = true;
  }
  *(bool *)(param_1 + 0xb8) = bVar7;
LAB__text__005f4de8:
  *param_2 = uVar6;
  return lVar4;
}


