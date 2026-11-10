/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0053a11c; name: FUN_.text__0053a11c
 */


undefined1  [16]
FUN__text__0053a11c(undefined1 param_1 [16],undefined1 param_2 [16],undefined8 param_3,
                   undefined8 *param_4,long param_5,long param_6,long param_7,long param_8,
                   uint param_9)

{
  byte bVar1;
  undefined8 *puVar2;
  float fVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  long local_a0;
  long lStack_98;
  long local_90;
  float local_88;
  byte local_84;
  byte local_83;
  undefined1 auStack_80 [8];
  long local_78;
  
  *param_4 = *(undefined8 *)(param_7 + 0xb0);
  FUN__text__00521214(param_5,&local_78,auStack_80);
  if (param_9 < *(uint *)(param_8 + 0x80)) {
    puVar2 = (undefined8 *)(*(long *)(param_8 + 0x78) + (ulong)param_9 * 0x18);
  }
  else {
    puVar2 = (undefined8 *)
             (*(long *)(*(long *)(*(long *)(param_8 + 8) + 8) + 0x20) + (ulong)param_9 * 0x38 + 0x18
             );
  }
  fVar3 = *(float *)(param_6 + 0x128);
  uVar4 = 0;
  uVar5 = *puVar2;
  uVar6 = puVar2[1];
  uVar7 = puVar2[2];
  fVar8 = fVar3 + SQRT(*(float *)(param_5 + 0x40) * *(float *)(param_5 + 0x40) +
                       *(float *)(param_5 + 0x3c) * *(float *)(param_5 + 0x3c));
  bVar1 = FUN__text__00509350(param_8);
  local_83 = FUN__text__00509374(param_8);
  local_84 = bVar1 & 1;
  local_83 = local_83 & 1;
  local_b8 = uVar5;
  uStack_b0 = uVar6;
  local_a8 = uVar7;
  local_a0 = param_6 + 0x80;
  lStack_98 = param_6 + 0x48;
  local_90 = param_6 + 8;
  local_88 = fVar8;
  local_d0 = FUN__text__00521904(param_5,(ulong)(local_78 != param_7));
  uStack_c8 = CONCAT44(uVar4,fVar3);
  local_c0 = param_3;
  FUN__text__00539e90(param_4,&local_d0,param_5 + (ulong)(local_78 != param_7) * 0x90 + 0x418,
                      &local_b8);
  return ZEXT816(0);
}


