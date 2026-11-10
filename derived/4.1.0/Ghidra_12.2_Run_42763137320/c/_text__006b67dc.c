/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006b67dc; name: FUN_.text__006b67dc
 */


void FUN__text__006b67dc(long *param_1,long param_2)

{
  byte bVar1;
  undefined4 uVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  float fVar6;
  float local_40;
  float fStack_3c;
  undefined8 local_38;
  undefined8 local_18;
  
  uVar2 = FUN__text__006c1bd0(param_2,*param_1);
  *(undefined8 *)((long)param_1 + 0xcc) = 0xffffffffffffffff;
  *(undefined4 *)((long)param_1 + 0xd4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1b) = uVar2;
  lVar3 = param_1[0xb];
  uVar4 = (uint)*(byte *)(lVar3 + 8);
  if (((*(byte *)(lVar3 + 8) & 1) != 0) && (0.0 < *(float *)(lVar3 + 0x30))) {
    uVar2 = FUN__text__006b8838(param_1,param_2,0);
    lVar3 = param_1[0xb];
    *(undefined4 *)((long)param_1 + 0xcc) = uVar2;
    uVar4 = (uint)*(byte *)(lVar3 + 8);
  }
  if (((uVar4 >> 1 & 1) != 0) && (0.0 < *(float *)(lVar3 + 0x40))) {
    uVar2 = FUN__text__006b8838(param_1,param_2,1);
    lVar3 = param_1[0xb];
    *(undefined4 *)(param_1 + 0x1a) = uVar2;
    uVar4 = (uint)*(byte *)(lVar3 + 8);
  }
  if (((uVar4 >> 2 & 1) == 0) || (*(float *)(lVar3 + 0x58) <= 0.0)) {
    lVar5 = *(long *)(*(long *)(param_2 + 200) + 0x38) + (ulong)*(uint *)(param_1 + 0x1b);
    bVar1 = *(byte *)(param_1 + 0x45);
  }
  else {
    uVar2 = FUN__text__006b8838(param_1,param_2,2);
    *(undefined4 *)((long)param_1 + 0xd4) = uVar2;
    lVar3 = param_1[0xb];
    lVar5 = *(long *)(*(long *)(param_2 + 200) + 0x38) + (ulong)*(uint *)(param_1 + 0x1b);
    if (lVar3 == 0) goto LAB__text__006b68f8;
    bVar1 = *(byte *)(param_1 + 0x45);
  }
  if (((bVar1 >> 2 & 1) == 0) && ((*(byte *)(lVar3 + 8) >> 5 & 1) != 0)) {
    fVar6 = (float)NEON_ucvtf((uint)*(byte *)(*param_1 + 0x5a));
    *(float *)(lVar5 + 0xdc) = (fVar6 / 255.0) / 255.0;
  }
LAB__text__006b68f8:
  local_38 = 0;
  (**(code **)(*(long *)*param_1 + 0x60))((long *)*param_1,&local_38);
  local_40 = 0.0;
  fStack_3c = 0.0;
  (**(code **)(*(long *)*param_1 + 0x68))((long *)*param_1,&local_40);
  local_18 = 0;
  (**(code **)(*(long *)*param_1 + 0x60))((long *)*param_1,&local_18);
  lVar3 = *param_1;
  bVar1 = *(byte *)(lVar3 + 0x5b) & 3;
  fVar6 = ((float)local_18 - *(float *)(lVar3 + 0x50)) * 0.5;
  if (bVar1 == 2) {
    local_40 = fVar6 + local_40;
  }
  else if (bVar1 == 1) {
    local_40 = local_40 - fVar6;
  }
  bVar1 = *(byte *)(lVar3 + 0x5b) >> 2 & 3;
  fVar6 = (local_18._4_4_ - *(float *)(lVar3 + 0x54)) * 0.5;
  if (bVar1 == 2) {
    fStack_3c = fStack_3c - fVar6;
  }
  else if (bVar1 == 1) {
    fStack_3c = fVar6 + fStack_3c;
  }
  FUN__text__0069d960(param_2,lVar5,&local_40,&local_38,1,0x76636c);
  return;
}


