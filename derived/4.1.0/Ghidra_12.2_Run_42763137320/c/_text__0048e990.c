/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0048e990; name: FUN_.text__0048e990
 */


void FUN__text__0048e990(undefined8 *param_1,uint param_2,ulong *param_3,ulong param_4)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  uint *puVar4;
  ulong *puVar5;
  uint *puVar6;
  long lVar7;
  ulong *puVar8;
  uint uVar9;
  ulong uVar10;
  
  nn::os::LockMutex((MutexType *)(param_1 + 4));
  puVar4 = (uint *)*param_1;
  uVar9 = *(uint *)(param_1 + 1);
  uVar10 = (ulong)uVar9;
  puVar6 = puVar4;
  if (uVar9 == 0) {
LAB__text__0048ea08:
    if (puVar6 == puVar4 + uVar10 * 0xc) goto LAB__text__0048ea18;
    puVar8 = (ulong *)(puVar6 + 4);
  }
  else {
    lVar7 = uVar10 * 0x30;
    do {
      if (*puVar6 == param_2 && *(ulong *)(puVar6 + 2) == param_4) goto LAB__text__0048ea08;
      puVar6 = puVar6 + 0xc;
      lVar7 = lVar7 + -0x30;
    } while (lVar7 != 0);
LAB__text__0048ea18:
    puVar6 = puVar4;
    if (uVar9 == 0) {
LAB__text__0048ea54:
      if (puVar6 == puVar4 + uVar10 * 0xc) goto LAB__text__0048eaa8;
      puVar8 = (ulong *)(puVar6 + 4);
    }
    else {
      lVar7 = uVar10 * 0x30;
      do {
        if (*puVar6 == param_2 && *(ulong *)(puVar6 + 2) == param_4) goto LAB__text__0048ea54;
        puVar6 = puVar6 + 0xc;
        lVar7 = lVar7 + -0x30;
      } while (lVar7 != 0);
LAB__text__0048eaa8:
      uVar2 = *(uint *)((long)param_1 + 0xc);
      if (uVar2 <= uVar9) {
        iVar1 = uVar2 + (uVar2 >> 1);
        if (uVar2 == 0) {
          iVar1 = 1;
        }
        uVar10 = FUN__text__0048ed60(param_1,iVar1);
        if (((uVar10 & 1) == 0) || (*(uint *)((long)param_1 + 0xc) <= uVar9))
        goto LAB__text__0048ea90;
        uVar9 = *(uint *)(param_1 + 1);
        puVar4 = (uint *)*param_1;
      }
      *(uint *)(param_1 + 1) = uVar9 + 1;
      if (puVar4 == (uint *)0x0) goto LAB__text__0048ea90;
      puVar5 = (ulong *)(puVar4 + (ulong)uVar9 * 0xc);
      puVar5[3] = 0x3f800000ffffffff;
      puVar5[4] = 0x1ffffffff;
      puVar8 = puVar5 + 2;
      *puVar5 = (ulong)param_2;
      puVar5[1] = param_4;
      uVar9 = *(uint *)(param_1 + 1);
    }
    if (uVar9 != 0) {
      uVar3 = nn::os::GetSystemTick();
      param_1[8] = uVar3;
    }
  }
  uVar10 = param_3[1];
  puVar8[1] = *param_3;
  puVar8[2] = uVar10;
  *puVar8 = param_1[8];
  *(uint *)(puVar8 + 3) = *(uint *)(DAT_00ae9a40 + 0x88);
LAB__text__0048ea90:
  nn::os::UnlockMutex((MutexType *)(param_1 + 4));
  return;
}


