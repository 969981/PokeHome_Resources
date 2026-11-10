/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002472d0; name: FUN_.text__002472d0
 */


ulong FUN__text__002472d0(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined8 local_58;
  
  puVar7 = (undefined8 *)*param_1;
  uVar5 = *param_2 - (long)puVar7 >> 3;
  if (uVar5 < 6) {
                    /* WARNING: Could not emulate address calculation at 0x0024731c */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (*(code *)(&UNK__text__0024732c + (ulong)*(byte *)(uVar5 + 0x72bbfa) * 4))(1);
    return uVar5;
  }
  puVar4 = puVar7 + 1;
  puVar1 = param_3 + 4;
  puVar8 = puVar7 + 2;
  uVar5 = (*(code *)*param_3)(puVar1,puVar4,puVar7);
  uVar2 = (*(code *)*param_3)(puVar1,puVar8,puVar4);
  if ((uVar5 & 1) == 0) {
    if ((uVar2 & 1) != 0) {
      uVar3 = puVar7[1];
      puVar7[1] = puVar7[2];
      puVar7[2] = uVar3;
      uVar5 = (*(code *)*param_3)(puVar1,puVar4,puVar7);
      if ((uVar5 & 1) != 0) {
        uVar3 = *puVar7;
        *puVar7 = puVar7[1];
        puVar7[1] = uVar3;
      }
    }
  }
  else {
    uVar3 = *puVar7;
    if ((uVar2 & 1) == 0) {
      *puVar7 = puVar7[1];
      puVar7[1] = uVar3;
      uVar5 = (*(code *)*param_3)(puVar1,puVar8,puVar4);
      if ((uVar5 & 1) != 0) {
        uVar3 = *puVar4;
        *puVar4 = *puVar8;
        *puVar8 = uVar3;
      }
    }
    else {
      uVar6 = puVar7[2];
      puVar7[2] = uVar3;
      *puVar7 = uVar6;
    }
  }
  if (puVar7 + 3 != (undefined8 *)*param_2) {
    iVar9 = 0;
    puVar7 = puVar7 + 3;
    do {
      puVar4 = puVar7;
      uVar5 = (*(code *)*param_3)(puVar1,puVar4,puVar8);
      if ((uVar5 & 1) != 0) {
        local_58 = *puVar4;
        do {
          puVar7 = puVar8;
          puVar7[1] = *puVar7;
          if (puVar7 == (undefined8 *)*param_1) break;
          uVar5 = (*(code *)*param_3)(puVar1,&local_58,puVar7 + -1);
          puVar8 = puVar7 + -1;
        } while ((uVar5 & 1) != 0);
        iVar9 = iVar9 + 1;
        *puVar7 = local_58;
        if (iVar9 == 8) {
          return (ulong)(puVar4 + 1 == (undefined8 *)*param_2);
        }
      }
      puVar7 = puVar4 + 1;
      puVar8 = puVar4;
    } while (puVar4 + 1 != (undefined8 *)*param_2);
  }
  return 1;
}


