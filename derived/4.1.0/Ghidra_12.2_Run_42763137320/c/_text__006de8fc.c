/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006de8fc; name: FUN_.text__006de8fc
 */


void FUN__text__006de8fc(undefined8 param_1,long param_2,float *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 local_50;
  undefined8 uStack_48;
  
  lVar5 = *(long *)(param_2 + 0x10);
  lVar7 = *(long *)(lVar5 + 0x418);
  lVar6 = *(long *)(*(long *)(lVar5 + 0x238) + 0x338);
  lVar2 = FUN__text__006eb01c(lVar5 + 0x7a8,*(undefined4 *)(lVar7 + 0x38));
  param_3[0x20] = *(float *)(param_2 + 0x18);
  fVar8 = *(float *)(param_2 + 0x1c);
  param_3[0x1e] = 0.0;
  param_3[0x21] = fVar8;
  lVar4 = *(long *)(param_2 + 0x10);
  puVar1 = (undefined8 *)(*(long *)(lVar4 + 0x1f0) + (long)*(int *)(param_2 + 0x20) * 0x10);
  uStack_48 = puVar1[1];
  local_50 = *puVar1;
  FUN__text__006d9510(*(undefined4 *)(param_2 + 0x1c),*(undefined4 *)(param_2 + 0x18),
                      *(undefined8 *)(lVar4 + 0x98),param_3,*(undefined8 *)(lVar4 + 0x238),&local_50
                     );
  uVar3 = FUN__text__006d9ff0(*(undefined4 *)(param_2 + 0x1c),*(undefined4 *)(param_2 + 0x18),
                              *(undefined8 *)(*(long *)(param_2 + 0x10) + 0x98),param_3 + 4,
                              *(undefined8 *)(*(long *)(param_2 + 0x10) + 0x238),&local_50);
  uVar9 = *(undefined8 *)param_3;
  uVar10 = *(undefined8 *)(param_3 + 4);
  fVar8 = *(float *)(*(long *)(*(long *)(*(long *)(param_2 + 0x10) + 0x238) + 0x18) + 0x360);
  *param_3 = fVar8 * (float)uVar9;
  param_3[1] = fVar8 * (float)((ulong)uVar9 >> 0x20);
  param_3[2] = fVar8 * (float)*(undefined8 *)(param_3 + 2);
  param_3[4] = fVar8 * (float)uVar10;
  param_3[5] = fVar8 * (float)((ulong)uVar10 >> 0x20);
  param_3[6] = fVar8 * (float)*(undefined8 *)(param_3 + 6);
  fVar8 = param_3[0x22];
  param_3[0x22] = *(float *)(param_2 + 0x18);
  uVar3 = FUN__text__006dea80(uVar3,param_2,param_3,lVar6,
                              param_3[0x20] == 0.0 ||
                              0.0 < (float)(int)param_3[0x20] - (float)(int)fVar8);
  lVar2 = lVar2 + (long)(*(int *)(lVar7 + 0x20) * (int)param_3[0x1f]) * 0x50;
  if (*(int *)(lVar6 + 0x28) == 0) {
    FUN__text__006e03d0(0,uVar3,lVar2,param_3,lVar5,lVar6);
  }
  else {
    FUN__text__006e0700(0,uVar3,lVar2,param_3,lVar5,lVar6);
  }
  FUN__text__006eb028(*(long *)(param_2 + 0x10) + 0x7a8);
  return;
}


