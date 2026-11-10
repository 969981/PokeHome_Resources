/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0012e430; name: FUN_.text__0012e430
 */


void FUN__text__0012e430(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,
                        undefined8 *param_4,long param_5,long param_6,long param_7)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  code *pcVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  
  uVar8 = tpidr_el0;
  if (param_2 != param_3) {
    uVar9 = uVar8 & 0xffffffffffffe000;
    lVar10 = 0;
    lVar3 = *(long *)(uVar9 + 0x98);
    do {
      if (lVar3 == 0x10) goto LAB__text__0012e844;
      puVar1 = (undefined8 *)((long)param_2 + lVar10);
      puVar2 = (undefined8 *)(param_5 + lVar10);
      *(undefined8 *)((uVar9 | 0x18) + lVar3 * 8) = *param_1;
      *(long *)(uVar9 + 0x98) = *(long *)(uVar9 + 0x98) + 1;
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
        uVar7 = puVar1[4];
        puVar2[2] = puVar1[2];
        puVar2[3] = uVar4;
        puVar2[4] = uVar7;
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
        uVar7 = puVar1[0x14];
        puVar2[0x12] = puVar1[0x12];
        puVar2[0x13] = uVar4;
        puVar2[0x14] = uVar7;
        pcVar5 = (code *)puVar1[0x13];
        if (pcVar5 != (code *)0x0) {
          puVar1[0x14] = 0;
          puVar1[0x15] = 0;
          puVar1[0x12] = 0;
          puVar1[0x13] = 0;
          (*pcVar5)(puVar1 + 0x16);
        }
      }
      lVar10 = lVar10 + 0x110;
      lVar3 = *(long *)(uVar9 + 0x98) + -1;
      *(long *)(uVar9 + 0x98) = lVar3;
    } while (puVar1 + 0x22 != param_3);
    param_5 = param_5 + lVar10;
  }
  if (param_6 != 0) {
    lVar10 = 0;
    uVar9 = uVar8 & 0xffffffffffffe000;
    lVar6 = *(long *)(uVar9 + 0x98);
    lVar3 = param_6;
    do {
      if (lVar6 == 0x10) goto LAB__text__0012e844;
      puVar1 = (undefined8 *)(param_5 + lVar10);
      puVar2 = (undefined8 *)(param_7 + lVar10);
      *(undefined8 *)((uVar9 | 0x18) + lVar6 * 8) = *param_1;
      *(long *)(uVar9 + 0x98) = *(long *)(uVar9 + 0x98) + 1;
      uVar4 = *puVar2;
      puVar1[3] = 0;
      puVar1[2] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      *puVar1 = uVar4;
      if ((code *)puVar2[5] != (code *)0x0) {
        (*(code *)puVar2[5])(puVar2 + 6,puVar1 + 6);
        uVar4 = puVar2[3];
        puVar1[5] = puVar2[5];
        uVar7 = puVar2[4];
        puVar1[2] = puVar2[2];
        puVar1[3] = uVar4;
        puVar1[4] = uVar7;
        pcVar5 = (code *)puVar2[3];
        if (pcVar5 != (code *)0x0) {
          puVar2[4] = 0;
          puVar2[5] = 0;
          puVar2[2] = 0;
          puVar2[3] = 0;
          (*pcVar5)(puVar2 + 6);
        }
      }
      puVar1[0x12] = 0;
      puVar1[0x14] = 0;
      puVar1[0x15] = 0;
      puVar1[0x13] = 0;
      if ((code *)puVar2[0x15] != (code *)0x0) {
        (*(code *)puVar2[0x15])(puVar2 + 0x16,puVar1 + 0x16);
        uVar4 = puVar2[0x13];
        puVar1[0x15] = puVar2[0x15];
        uVar7 = puVar2[0x14];
        puVar1[0x12] = puVar2[0x12];
        puVar1[0x13] = uVar4;
        puVar1[0x14] = uVar7;
        pcVar5 = (code *)puVar2[0x13];
        if (pcVar5 != (code *)0x0) {
          puVar2[0x14] = 0;
          puVar2[0x15] = 0;
          puVar2[0x12] = 0;
          puVar2[0x13] = 0;
          (*pcVar5)(puVar2 + 0x16);
        }
      }
      lVar3 = lVar3 + -1;
      lVar10 = lVar10 + 0x110;
      lVar6 = *(long *)(uVar9 + 0x98) + -1;
      *(long *)(uVar9 + 0x98) = lVar6;
    } while (lVar3 != 0);
  }
  if (param_3 != param_4) {
    lVar10 = 0;
    uVar8 = uVar8 & 0xffffffffffffe000;
    lVar3 = *(long *)(uVar8 + 0x98);
    do {
      if (lVar3 == 0x10) {
LAB__text__0012e844:
                    /* WARNING: Subroutine does not return */
        FUN__text__00102c10();
      }
      puVar1 = (undefined8 *)(param_5 + param_6 * 0x110 + lVar10);
      puVar2 = (undefined8 *)((long)param_3 + lVar10);
      *(undefined8 *)((uVar8 | 0x18) + lVar3 * 8) = *param_1;
      *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + 1;
      uVar4 = *puVar2;
      puVar1[3] = 0;
      puVar1[2] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      *puVar1 = uVar4;
      if ((code *)puVar2[5] != (code *)0x0) {
        (*(code *)puVar2[5])(puVar2 + 6,puVar1 + 6);
        uVar4 = puVar2[3];
        puVar1[5] = puVar2[5];
        uVar7 = puVar2[4];
        puVar1[2] = puVar2[2];
        puVar1[3] = uVar4;
        puVar1[4] = uVar7;
        pcVar5 = (code *)puVar2[3];
        if (pcVar5 != (code *)0x0) {
          puVar2[4] = 0;
          puVar2[5] = 0;
          puVar2[2] = 0;
          puVar2[3] = 0;
          (*pcVar5)(puVar2 + 6);
        }
      }
      puVar1[0x12] = 0;
      puVar1[0x14] = 0;
      puVar1[0x15] = 0;
      puVar1[0x13] = 0;
      if ((code *)puVar2[0x15] != (code *)0x0) {
        (*(code *)puVar2[0x15])(puVar2 + 0x16,puVar1 + 0x16);
        uVar4 = puVar2[0x13];
        puVar1[0x15] = puVar2[0x15];
        uVar7 = puVar2[0x14];
        puVar1[0x12] = puVar2[0x12];
        puVar1[0x13] = uVar4;
        puVar1[0x14] = uVar7;
        pcVar5 = (code *)puVar2[0x13];
        if (pcVar5 != (code *)0x0) {
          puVar2[0x14] = 0;
          puVar2[0x15] = 0;
          puVar2[0x12] = 0;
          puVar2[0x13] = 0;
          (*pcVar5)(puVar2 + 0x16);
        }
      }
      lVar10 = lVar10 + 0x110;
      lVar3 = *(long *)(uVar8 + 0x98) + -1;
      *(long *)(uVar8 + 0x98) = lVar3;
    } while (puVar2 + 0x22 != param_4);
  }
  return;
}


