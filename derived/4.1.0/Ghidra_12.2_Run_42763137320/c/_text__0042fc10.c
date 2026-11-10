/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0042fc10; name: FUN_.text__0042fc10
 */


bool FUN__text__0042fc10(undefined8 *param_1,uint param_2)

{
  uint uVar1;
  float fVar2;
  uint uVar3;
  byte bVar4;
  undefined8 *puVar6;
  undefined8 *puVar5;
  float fVar7;
  float fVar8;
  
  uVar3 = *(uint *)(param_1 + 3);
  uVar1 = *(uint *)((long)param_1 + 0x1c) + uVar3;
  if (param_2 < uVar1) {
    bVar4 = *(byte *)(param_1 + 8);
    if (((bVar4 >> 1 & 1) == 0) || (*(float *)((long)param_1 + 0x44) == 0.0)) {
      fVar8 = 0.0;
      if (uVar3 <= param_2 && param_2 - uVar3 != 0) {
        fVar8 = (float)(param_2 - uVar3) / (float)*(uint *)((long)param_1 + 0x1c);
      }
      *(float *)(param_1 + 4) = fVar8;
      fVar8 = (float)FUN__text__0042fd80(fVar8,*(undefined4 *)(param_1 + 1),
                                         *(undefined4 *)((long)param_1 + 0xc),
                                         *(undefined4 *)(param_1 + 7));
      bVar4 = *(byte *)(param_1 + 8);
    }
    else {
      fVar8 = *(float *)((long)param_1 + 0x14) +
              *(float *)((long)param_1 + 0x44) *
              (*(float *)(param_1 + 2) - *(float *)((long)param_1 + 0x14));
    }
    if ((bVar4 & 1) != 0) {
      fVar2 = (float)((uint)fVar8 & 0x7fffff | 0x3f800000);
      fVar7 = fVar2 + 1.0;
      fVar8 = ((float)((uint)fVar8 >> 0x17 & 0xff) * 0.30103 + -38.230812 +
              (fVar2 * 1.1581186 * fVar2 * fVar2 + -1.1581186) / (fVar7 * fVar7 * fVar7)) * 20.0;
    }
  }
  else {
    fVar8 = *(float *)((long)param_1 + 0x14);
  }
  *(float *)(param_1 + 2) = fVar8;
  if (*(int *)(param_1 + 6) != 0) {
    puVar5 = (undefined8 *)param_1[5];
    do {
      puVar6 = puVar5 + 1;
      (*(code *)**(undefined8 **)*puVar5)(fVar8,(undefined8 *)*puVar5,*param_1,uVar1 <= param_2);
      puVar5 = puVar6;
    } while (puVar6 != (undefined8 *)(param_1[5] + (ulong)*(uint *)(param_1 + 6) * 8));
  }
  return uVar1 <= param_2;
}


