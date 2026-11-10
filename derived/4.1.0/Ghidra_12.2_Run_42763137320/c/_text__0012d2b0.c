/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0012d2b0; name: FUN_.text__0012d2b0
 */


void FUN__text__0012d2b0(undefined8 *param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  
  puVar6 = (undefined8 *)*param_3;
  param_4 = (undefined8 *)*param_4;
  if (puVar6 != param_4) {
    puVar8 = (undefined8 *)(*(long *)(param_2 + 0x40) + *(long *)(param_2 + 0x48) * 0x110);
    if (param_4 != puVar8) {
      lVar9 = 0;
      do {
        puVar1 = (undefined8 *)((long)param_4 + lVar9);
        puVar2 = (undefined8 *)((long)puVar6 + lVar9);
        *puVar2 = *puVar1;
        pcVar3 = (code *)puVar2[3];
        if (pcVar3 != (code *)0x0) {
          puVar2[4] = 0;
          puVar2[5] = 0;
          puVar2[2] = 0;
          puVar2[3] = 0;
          (*pcVar3)(puVar2 + 6);
        }
        if ((code *)puVar1[5] != (code *)0x0) {
          (*(code *)puVar1[5])(puVar1 + 6,puVar2 + 6);
          uVar4 = puVar1[3];
          puVar2[5] = puVar1[5];
          uVar5 = puVar1[4];
          puVar2[2] = puVar1[2];
          puVar2[3] = uVar4;
          puVar2[4] = uVar5;
          pcVar3 = (code *)puVar1[3];
          if (pcVar3 != (code *)0x0) {
            puVar1[4] = 0;
            puVar1[5] = 0;
            puVar1[2] = 0;
            puVar1[3] = 0;
            (*pcVar3)(puVar1 + 6);
          }
        }
        pcVar3 = (code *)puVar2[0x13];
        if (pcVar3 != (code *)0x0) {
          puVar2[0x14] = 0;
          puVar2[0x15] = 0;
          puVar2[0x12] = 0;
          puVar2[0x13] = 0;
          (*pcVar3)(puVar2 + 0x16);
        }
        if ((code *)puVar1[0x15] != (code *)0x0) {
          (*(code *)puVar1[0x15])(puVar1 + 0x16,puVar2 + 0x16);
          uVar4 = puVar1[0x13];
          puVar2[0x15] = puVar1[0x15];
          uVar5 = puVar1[0x14];
          puVar2[0x12] = puVar1[0x12];
          puVar2[0x13] = uVar4;
          puVar2[0x14] = uVar5;
          pcVar3 = (code *)puVar1[0x13];
          if (pcVar3 != (code *)0x0) {
            puVar1[0x14] = 0;
            puVar1[0x15] = 0;
            puVar1[0x12] = 0;
            puVar1[0x13] = 0;
            (*pcVar3)(puVar1 + 0x16);
          }
        }
        lVar9 = lVar9 + 0x110;
      } while (puVar1 + 0x22 != puVar8);
      puVar6 = (undefined8 *)((long)puVar6 + lVar9);
    }
    lVar9 = (long)puVar8 - (long)puVar6 >> 4;
    lVar7 = lVar9 * -0xf0f0f0f0f0f0f0f;
    if ((long)puVar8 - (long)puVar6 != 0) {
      puVar6 = puVar6 + 0x16;
      do {
        pcVar3 = (code *)puVar6[-3];
        if (pcVar3 != (code *)0x0) {
          puVar6[-2] = 0;
          puVar6[-1] = 0;
          puVar6[-4] = 0;
          puVar6[-3] = 0;
          (*pcVar3)(puVar6);
        }
        pcVar3 = (code *)puVar6[-0x13];
        if (pcVar3 != (code *)0x0) {
          puVar6[-0x12] = 0;
          puVar6[-0x11] = 0;
          puVar6[-0x14] = 0;
          puVar6[-0x13] = 0;
          (*pcVar3)(puVar6 + -0x10);
        }
        lVar7 = lVar7 + -1;
        puVar6 = puVar6 + 0x22;
      } while (lVar7 != 0);
    }
    *(long *)(param_2 + 0x48) = *(long *)(param_2 + 0x48) + lVar9 * 0xf0f0f0f0f0f0f0f;
    puVar6 = (undefined8 *)*param_3;
  }
  *param_1 = puVar6;
  return;
}


