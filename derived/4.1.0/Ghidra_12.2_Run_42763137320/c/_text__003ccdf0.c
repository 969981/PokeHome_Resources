/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003ccdf0; name: FUN_.text__003ccdf0
 */


void FUN__text__003ccdf0(long *param_1,ulong param_2,uint param_3)

{
  undefined8 *puVar1;
  long lVar2;
  size_t sVar3;
  char *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 extraout_x8;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  char *pcVar16;
  undefined1 auVar17 [16];
  char acStack_90 [8];
  long local_88 [2];
  char *local_78;
  undefined1 *local_70;
  undefined8 uStack_68;
  
  puVar5 = (undefined8 *)param_1[1];
  if (param_2 <= (ulong)(param_1[2] - (long)puVar5 >> 5)) {
    puVar6 = puVar5;
    if (param_2 != 0) {
      uVar9 = tpidr_el0;
      puVar6 = puVar5 + param_2 * 4;
      uVar9 = uVar9 & 0xffffffffffffe000;
      lVar14 = *(long *)(uVar9 + 0x98);
      do {
        if (lVar14 == 0x10) goto LAB__text__003cd080;
        *(long *)((uVar9 | 0x18) + lVar14 * 8) = param_1[3];
        *(long *)(uVar9 + 0x98) = *(long *)(uVar9 + 0x98) + 1;
        *puVar5 = 0xcbf29ce484222645;
        puVar5[1] = 0x70f683;
        puVar5[2] = 0;
        puVar5[3] = 0;
        puVar5 = puVar5 + 4;
        lVar14 = *(long *)(uVar9 + 0x98) + -1;
        *(long *)(uVar9 + 0x98) = lVar14;
      } while (puVar5 != puVar6);
    }
    param_1[1] = (long)puVar6;
    return;
  }
  lVar14 = (long)puVar5 - *param_1 >> 5;
  uVar9 = lVar14 + param_2;
  if (uVar9 >> 0x3b != 0) {
    auVar17 = FUN__text__003cb610(param_1);
    uStack_68 = 0x3cd08c;
    pcVar16 = (char *)*auVar17._0_8_;
    local_70 = (undefined1 *)(local_88 + 0xb);
    sVar3 = strlen(pcVar16);
    pcVar4 = acStack_90 + -(sVar3 + 0x10 & 0xfffffffffffffff0);
    local_78 = pcVar4;
    pcVar16 = strcpy(pcVar4,pcVar16);
    pcVar16 = strrchr(pcVar16,0x2e);
    pcVar4 = strrchr(pcVar4,0x2f);
    if (pcVar4 < pcVar16) {
      *pcVar16 = '\0';
    }
    if (param_3 < 6) {
                    /* WARNING: Could not emulate address calculation at 0x003cd120 */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK__text__003cd12c + (ulong)*(byte *)((ulong)param_3 + 0x73a8d9) * 4))();
      return;
    }
    FUN__text__003cd438(local_88,&local_78,auVar17._8_8_);
    FUN__text__005dd198(extraout_x8,local_88,param_3);
    if (local_88[0] != 0) {
      (**(code **)(*(long *)(local_88[0] + 0x48) + 0x18))();
    }
    return;
  }
  uVar7 = param_1[2] - *param_1;
  uVar8 = (long)uVar7 >> 4;
  if (uVar8 <= uVar9) {
    uVar8 = uVar9;
  }
  if (0x7fffffffffffffdf < uVar7) {
    uVar8 = 0x7ffffffffffffff;
  }
  if (uVar8 != 0) {
    lVar2 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar8 << 5,8);
    if (lVar2 != 0) goto LAB__text__003cce84;
    (**(code **)(*(long *)param_1[3] + 0xb8))();
  }
  lVar2 = 0;
LAB__text__003cce84:
  uVar9 = tpidr_el0;
  puVar6 = (undefined8 *)(lVar2 + lVar14 * 0x20);
  uVar9 = uVar9 & 0xffffffffffffe000;
  lVar2 = lVar2 + uVar8 * 0x20;
  lVar14 = *(long *)(uVar9 + 0x98);
  puVar1 = puVar6 + param_2 * 4;
  puVar5 = puVar6;
  do {
    if (lVar14 == 0x10) goto LAB__text__003cd080;
    *(long *)((uVar9 | 0x18) + lVar14 * 8) = param_1[3];
    *(long *)(uVar9 + 0x98) = *(long *)(uVar9 + 0x98) + 1;
    *puVar5 = 0xcbf29ce484222645;
    puVar5[1] = 0x70f683;
    puVar5[2] = 0;
    puVar5[3] = 0;
    puVar5 = puVar5 + 4;
    lVar14 = *(long *)(uVar9 + 0x98) + -1;
    *(long *)(uVar9 + 0x98) = lVar14;
  } while (puVar5 != puVar1);
  lVar15 = *param_1;
  lVar13 = param_1[1];
  if (lVar13 == lVar15) {
    lVar14 = param_1[2];
    *param_1 = (long)puVar6;
    param_1[1] = (long)puVar1;
    param_1[2] = lVar2;
  }
  else {
    lVar11 = 0;
    do {
      if (lVar14 == 0x10) {
LAB__text__003cd080:
                    /* WARNING: Subroutine does not return */
        FUN__text__00102c10();
      }
      *(long *)((uVar9 | 0x18) + lVar14 * 8) = param_1[3];
      lVar14 = lVar13 + lVar11;
      lVar12 = lVar11 + -0x20;
      *(long *)(uVar9 + 0x98) = *(long *)(uVar9 + 0x98) + 1;
      *(undefined8 *)((long)puVar6 + lVar11 + -0x20) = *(undefined8 *)(lVar14 + -0x20);
      *(undefined8 *)((long)puVar6 + lVar11 + -0x18) = *(undefined8 *)(lVar14 + -0x18);
      *(undefined8 *)((long)puVar6 + lVar11 + -0x10) = *(undefined8 *)(lVar14 + -0x10);
      uVar10 = *(undefined8 *)(lVar14 + -8);
      *(undefined8 *)(lVar14 + -8) = 0;
      *(undefined8 *)((long)puVar6 + lVar11 + -8) = uVar10;
      lVar14 = *(long *)(uVar9 + 0x98) + -1;
      *(long *)(uVar9 + 0x98) = lVar14;
      lVar11 = lVar12;
    } while (lVar13 + lVar12 != lVar15);
    lVar13 = *param_1;
    lVar15 = param_1[1];
    lVar14 = param_1[2];
    *param_1 = (long)puVar6 + lVar12;
    param_1[1] = (long)puVar1;
    param_1[2] = lVar2;
    for (; lVar15 != lVar13; lVar15 = lVar15 + -0x20) {
      if (*(long *)(lVar15 + -8) != 0) {
        (**(code **)(*(long *)(*(long *)(lVar15 + -8) + 0x48) + 0x18))();
        *(undefined8 *)(lVar15 + -8) = 0;
      }
    }
  }
  if (lVar13 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x003cd06c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],lVar13,lVar14 - lVar13,8);
  return;
}


