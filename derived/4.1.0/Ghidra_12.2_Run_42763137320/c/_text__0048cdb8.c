/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0048cdb8; name: FUN_.text__0048cdb8
 */


undefined8
FUN__text__0048cdb8(long *param_1,undefined4 param_2,undefined8 param_3,undefined8 *param_4,
                   long param_5,undefined8 param_6,uint param_7,undefined4 param_8)

{
  long lVar1;
  uint uVar2;
  undefined8 *puVar3;
  uint uVar4;
  int *piVar5;
  undefined8 uVar6;
  float fVar7;
  
  nn::os::LockMutex((MutexType *)(param_1 + 3));
  puVar3 = (undefined8 *)FUN__text__00400f80(0,0x70);
  if (puVar3 == (undefined8 *)0x0) {
    uVar6 = 0x34;
    goto LAB__text__0048cefc;
  }
  puVar3[3] = 0;
  puVar3[4] = 0;
  *puVar3 = 0;
  *(undefined4 *)(puVar3 + 4) = 1;
  *(undefined4 *)((long)puVar3 + 0x24) = param_8;
  puVar3[5] = param_3;
  puVar3[0xc] = 0;
  puVar3[0xd] = 0;
  puVar3[10] = 0;
  puVar3[0xb] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  *(undefined4 *)((long)puVar3 + 0x4c) = param_2;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[8] = param_4[1];
  *(undefined4 *)(puVar3 + 9) = *(undefined4 *)(param_4 + 2);
  piVar5 = (int *)*param_4;
  if (piVar5 != (int *)0x0) {
    *piVar5 = *piVar5 + 1;
  }
  puVar3[7] = piVar5;
  uVar4 = param_7 & 0xfff02004;
  if (param_5 != 0) {
    uVar4 = param_7;
  }
  puVar3[10] = param_5;
  puVar3[0xb] = param_6;
  *(uint *)(puVar3 + 0xc) = uVar4;
  uVar4 = *(uint *)(param_1 + 1);
  if ((uVar4 == 0) || (fVar7 = (float)NEON_ucvtf((int)param_1[2]), 0.9 < fVar7 / (float)uVar4)) {
    FUN__text__0048e330(param_1);
    uVar4 = *(uint *)(param_1 + 1);
    if (uVar4 != 0) goto LAB__text__0048cec0;
  }
  else {
LAB__text__0048cec0:
    uVar2 = 0;
    if (uVar4 != 0) {
      uVar2 = *(uint *)((long)puVar3 + 0x4c) / uVar4;
    }
    lVar1 = (ulong)(*(uint *)((long)puVar3 + 0x4c) - uVar2 * uVar4) * 8;
    puVar3[0xd] = *(undefined8 *)(*param_1 + lVar1);
    *(undefined8 **)(*param_1 + lVar1) = puVar3;
    *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  }
  uVar6 = 1;
LAB__text__0048cefc:
  nn::os::UnlockMutex((MutexType *)(param_1 + 3));
  return uVar6;
}


