/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0012f980; name: FUN_.text__0012f980
 */


void FUN__text__0012f980(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,
                        undefined8 *param_4,undefined8 *param_5,long param_6,undefined8 *param_7)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  
  uVar7 = tpidr_el0;
  uVar7 = uVar7 & 0xffffffffffffe000;
  if (param_2 != param_3) {
    lVar3 = *(long *)(uVar7 + 0x98);
    lVar8 = 0;
    do {
      if (lVar3 == 0x10) goto LAB__text__0012fd24;
      puVar1 = (undefined8 *)((long)param_2 + lVar8);
      puVar2 = (undefined8 *)((long)param_5 + lVar8);
      *(undefined8 *)(uVar7 + 0x18 + lVar3 * 8) = *param_1;
      *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + 1;
      uVar4 = *puVar1;
      puVar2[3] = 0;
      puVar2[2] = 0;
      puVar2[4] = 0;
      puVar2[5] = 0;
      *puVar2 = uVar4;
      if ((code *)puVar1[5] != (code *)0x0) {
        (*(code *)puVar1[5])(puVar1 + 6,puVar2 + 6);
        uVar4 = puVar1[3];
        puVar2[5] = puVar1[5];
        uVar6 = puVar1[4];
        puVar2[2] = puVar1[2];
        puVar2[3] = uVar4;
        puVar2[4] = uVar6;
        pcVar5 = (code *)puVar1[3];
        if (pcVar5 != (code *)0x0) {
          puVar1[4] = 0;
          puVar1[5] = 0;
          puVar1[2] = 0;
          puVar1[3] = 0;
          (*pcVar5)(puVar1 + 6);
        }
      }
      puVar2[0x12] = 0;
      puVar2[0x14] = 0;
      puVar2[0x15] = 0;
      puVar2[0x13] = 0;
      if ((code *)puVar1[0x15] != (code *)0x0) {
        (*(code *)puVar1[0x15])(puVar1 + 0x16,puVar2 + 0x16);
        uVar4 = puVar1[0x13];
        puVar2[0x15] = puVar1[0x15];
        uVar6 = puVar1[0x14];
        puVar2[0x12] = puVar1[0x12];
        puVar2[0x13] = uVar4;
        puVar2[0x14] = uVar6;
        pcVar5 = (code *)puVar1[0x13];
        if (pcVar5 != (code *)0x0) {
          puVar1[0x14] = 0;
          puVar1[0x15] = 0;
          puVar1[0x12] = 0;
          puVar1[0x13] = 0;
          (*pcVar5)(puVar1 + 0x16);
        }
      }
      lVar8 = lVar8 + 0x110;
      lVar3 = *(long *)(uVar7 + 0x98) + -1;
      *(long *)(uVar7 + 0x98) = lVar3;
    } while (puVar1 + 0x22 != param_3);
    param_5 = (undefined8 *)((long)param_5 + lVar8);
  }
  if (*(long *)(uVar7 + 0x98) == 0x10) {
LAB__text__0012fd24:
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(undefined8 *)(uVar7 + 0x18 + *(long *)(uVar7 + 0x98) * 8) = *param_1;
  *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + 1;
  uVar4 = *param_7;
  param_5[3] = 0;
  param_5[4] = 0;
  param_5[2] = 0;
  param_5[5] = 0;
  *param_5 = uVar4;
  if ((code *)param_7[4] != (code *)0x0) {
    (*(code *)param_7[4])(param_7 + 6,param_5 + 6);
    uVar4 = param_7[5];
    param_5[3] = param_7[3];
    param_5[5] = uVar4;
    uVar4 = param_7[2];
    param_5[4] = param_7[4];
    param_5[2] = uVar4;
  }
  param_5[0x12] = 0;
  param_5[0x14] = 0;
  param_5[0x15] = 0;
  param_5[0x13] = 0;
  if ((code *)param_7[0x14] != (code *)0x0) {
    (*(code *)param_7[0x14])(param_7 + 0x16,param_5 + 0x16);
    uVar4 = param_7[0x15];
    param_5[0x13] = param_7[0x13];
    param_5[0x15] = uVar4;
    uVar4 = param_7[0x12];
    param_5[0x14] = param_7[0x14];
    param_5[0x12] = uVar4;
  }
  lVar8 = *(long *)(uVar7 + 0x98) + -1;
  *(long *)(uVar7 + 0x98) = lVar8;
  if (param_3 != param_4) {
    lVar3 = 0;
    do {
      if (lVar8 == 0x10) goto LAB__text__0012fd24;
      puVar1 = (undefined8 *)((long)param_3 + lVar3);
      puVar2 = (undefined8 *)((long)param_5 + lVar3 + param_6 * 0x110);
      *(undefined8 *)(uVar7 + 0x18 + lVar8 * 8) = *param_1;
      *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + 1;
      uVar4 = *puVar1;
      puVar2[3] = 0;
      puVar2[2] = 0;
      puVar2[4] = 0;
      puVar2[5] = 0;
      *puVar2 = uVar4;
      if ((code *)puVar1[5] != (code *)0x0) {
        (*(code *)puVar1[5])(puVar1 + 6,puVar2 + 6);
        uVar4 = puVar1[3];
        puVar2[5] = puVar1[5];
        uVar6 = puVar1[4];
        puVar2[2] = puVar1[2];
        puVar2[3] = uVar4;
        puVar2[4] = uVar6;
        pcVar5 = (code *)puVar1[3];
        if (pcVar5 != (code *)0x0) {
          puVar1[4] = 0;
          puVar1[5] = 0;
          puVar1[2] = 0;
          puVar1[3] = 0;
          (*pcVar5)(puVar1 + 6);
        }
      }
      puVar2[0x12] = 0;
      puVar2[0x14] = 0;
      puVar2[0x15] = 0;
      puVar2[0x13] = 0;
      if ((code *)puVar1[0x15] != (code *)0x0) {
        (*(code *)puVar1[0x15])(puVar1 + 0x16,puVar2 + 0x16);
        uVar4 = puVar1[0x13];
        puVar2[0x15] = puVar1[0x15];
        uVar6 = puVar1[0x14];
        puVar2[0x12] = puVar1[0x12];
        puVar2[0x13] = uVar4;
        puVar2[0x14] = uVar6;
        pcVar5 = (code *)puVar1[0x13];
        if (pcVar5 != (code *)0x0) {
          puVar1[0x14] = 0;
          puVar1[0x15] = 0;
          puVar1[0x12] = 0;
          puVar1[0x13] = 0;
          (*pcVar5)(puVar1 + 0x16);
        }
      }
      lVar3 = lVar3 + 0x110;
      lVar8 = *(long *)(uVar7 + 0x98) + -1;
      *(long *)(uVar7 + 0x98) = lVar8;
    } while (puVar1 + 0x22 != param_4);
  }
  return;
}


