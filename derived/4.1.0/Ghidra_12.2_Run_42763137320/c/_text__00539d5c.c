/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00539d5c; name: FUN_.text__00539d5c
 */


undefined1  [16]
FUN__text__00539d5c(undefined8 *param_1,long param_2,long param_3,uint param_4,undefined8 param_5)

{
  byte bVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  long local_90;
  long lStack_88;
  long local_80;
  float local_78;
  byte local_74;
  byte local_73;
  
  *param_1 = param_5;
  uVar3 = (ulong)param_4;
  fVar5 = (float)FUN__text__0047da60(*(undefined8 *)(*(long *)(param_2 + 8) + 0x20));
  if (param_4 < *(uint *)(param_3 + 0x80)) {
    puVar2 = (undefined8 *)(*(long *)(param_3 + 0x78) + uVar3 * 0x18);
  }
  else {
    puVar2 = (undefined8 *)
             (*(long *)(*(long *)(*(long *)(param_3 + 8) + 8) + 0x20) + uVar3 * 0x38 + 0x18);
  }
  uVar7 = *puVar2;
  uVar8 = puVar2[1];
  uVar9 = puVar2[2];
  lVar4 = *(long *)(param_3 + 0x20) + uVar3 * 0x118;
  fVar6 = (float)FUN__text__00509290(param_3);
  bVar1 = FUN__text__00509350(param_3);
  local_73 = FUN__text__00509374(param_3);
  local_c0 = *(undefined8 *)(param_2 + 0xe8);
  uStack_b8 = *(undefined8 *)(param_2 + 0xf0);
  local_74 = bVar1 & 1;
  local_73 = local_73 & 1;
  local_b0 = *(undefined8 *)(param_2 + 0xf8);
  local_a8 = uVar7;
  uStack_a0 = uVar8;
  local_98 = uVar9;
  local_90 = lVar4 + 0x78;
  lStack_88 = lVar4 + 0x40;
  local_80 = lVar4;
  local_78 = fVar6 + fVar5;
  FUN__text__00539e90(param_1,&local_c0,param_2 + 0x58,&local_a8);
  return ZEXT816(0);
}


