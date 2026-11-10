/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0046eb60; name: FUN_.text__0046eb60
 */


undefined8 FUN__text__0046eb60(undefined8 param_1,int *param_2,undefined8 *param_3,long param_4)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  puVar6 = (undefined8 *)*param_3;
  if (puVar6 != (undefined8 *)0x0) {
    if (*(int *)(puVar6 + 2) != *(int *)((long)puVar6 + 0x14)) {
      puVar5 = puVar6;
      goto LAB__text__0046ec10;
    }
    param_3[1] = puVar6;
    puVar5 = (undefined8 *)*puVar6;
    *param_3 = puVar5;
    if (puVar5 != (undefined8 *)0x0) goto LAB__text__0046ec10;
  }
  puVar5 = (undefined8 *)FUN__text__00400f80(0,0x38);
  if (puVar5 == (undefined8 *)0x0) {
    return 0x34;
  }
  *puVar5 = 0;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[3] = 0;
  puVar5[4] = 0;
  puVar5[1] = 0;
  puVar5[2] = 0;
  iVar2 = FUN__text__00470060(puVar5,0x10);
  if (iVar2 != 1) {
    if (puVar5[6] != 0) {
      FUN__text__00400fc0(0);
    }
    *(undefined4 *)((long)puVar5 + 0x2c) = 0;
    puVar5[6] = 0;
    if (puVar5[1] != 0) {
      *(undefined4 *)(puVar5 + 2) = 0;
      FUN__text__00400fc0(0);
      puVar5[1] = 0;
      *(undefined4 *)((long)puVar5 + 0x14) = 0;
    }
    if (puVar5[3] != 0) {
      *(undefined4 *)(puVar5 + 4) = 0;
      FUN__text__00400fc0(0);
      puVar5[3] = 0;
      *(undefined4 *)((long)puVar5 + 0x24) = 0;
    }
    FUN__text__00400fc0(0,puVar5);
    return 0x34;
  }
  *puVar5 = 0;
  plVar1 = (long *)(param_2 + 4);
  if (*(long *)(param_2 + 4) != 0) {
    plVar1 = *(long **)(param_2 + 2);
  }
  *plVar1 = (long)puVar5;
  *(undefined8 **)(param_2 + 2) = puVar5;
  *param_2 = *param_2 + 1;
  *param_3 = puVar5;
  param_3[1] = puVar6;
LAB__text__0046ec10:
  uVar3 = *(uint *)(puVar5 + 2);
  if (*(uint *)((long)puVar5 + 0x14) <= uVar3) {
    FUN__text__00470270(puVar5 + 1);
    uVar3 = *(uint *)(puVar5 + 2);
  }
  *(uint *)(puVar5 + 2) = uVar3 + 1;
  puVar4 = (undefined4 *)(puVar5[1] + (ulong)uVar3 * 0x28);
  puVar4[6] = *(undefined4 *)(param_4 + 0xf8);
  puVar4[7] = *(undefined4 *)(param_4 + 0xfc);
  puVar4[8] = *(undefined4 *)(param_4 + 0x100);
  *puVar4 = *(undefined4 *)(param_4 + 0xc0);
  puVar4[3] = *(undefined4 *)(param_4 + 0xb8);
  puVar4[2] = *(undefined4 *)(param_4 + 0xb4);
  puVar4[1] = *(undefined4 *)(param_4 + 0xb0);
  puVar4[4] = *(undefined4 *)(param_4 + 200);
  puVar4[5] = *(undefined4 *)(param_4 + 0xd4);
  return 1;
}


