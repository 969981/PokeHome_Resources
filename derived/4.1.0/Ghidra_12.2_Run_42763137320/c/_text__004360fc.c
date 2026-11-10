/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004360fc; name: FUN_.text__004360fc
 */


undefined8
FUN__text__004360fc(float param_1,long param_2,float *param_3,uint *param_4,int *param_5,int param_6
                   ,undefined1 *param_7)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  long local_58 [2];
  float local_48;
  float fStack_44;
  uint local_40;
  uint uStack_3c;
  undefined4 local_38;
  undefined2 local_34;
  undefined1 local_32;
  
  fVar6 = *param_3;
  if (param_6 == 2) {
    fVar4 = param_1;
    if (*(long *)(param_2 + 0x10) != 0) {
      fVar4 = *(float *)(*(long *)(param_2 + 0x10) + 0xc);
    }
    fVar6 = fVar4 + fVar6;
  }
  uVar3 = 0;
  if (((param_5 == (int *)0x0) || (iVar1 = *param_5, iVar1 == 0)) || (fVar6 == param_1)) {
LAB__text__004361ec:
    if (param_4 != (uint *)0x0) goto LAB__text__004361f0;
LAB__text__004361c0:
    local_40 = 0;
    if (uVar3 < 0x80000000) {
      local_40 = uVar3;
    }
  }
  else {
    if (iVar1 == 2) {
      if (fVar6 <= param_1) {
        fVar4 = (float)param_5[2];
      }
      else {
        fVar4 = (float)param_5[1];
      }
      fVar4 = fVar4 * 1000.0;
LAB__text__004361e8:
      uVar3 = (uint)fVar4;
      goto LAB__text__004361ec;
    }
    if (iVar1 == 1) {
      if ((fVar6 <= param_1) || (fVar4 = (float)param_5[1], fVar4 == 0.0)) {
        fVar4 = (float)param_5[2];
        if (fVar4 == 0.0) goto LAB__text__004361b8;
        fVar5 = param_1 - fVar6;
      }
      else {
        fVar5 = fVar6 - param_1;
      }
      fVar4 = (fVar5 * 1000.0) / fVar4;
      goto LAB__text__004361e8;
    }
LAB__text__004361b8:
    uVar3 = 0;
    if (param_4 == (uint *)0x0) goto LAB__text__004361c0;
LAB__text__004361f0:
    local_40 = *param_4;
    if ((int)*param_4 <= (int)uVar3) {
      local_40 = uVar3;
    }
  }
  if ((int)local_40 < 1) {
    return 0;
  }
  if (*(long *)(param_2 + 0x10) != 0) {
    if (param_4 == (uint *)0x0) {
      uVar3 = 4;
    }
    else {
      uVar3 = param_4[1];
    }
    FUN__text__0042f65c(fVar6,DAT_00ae9a60,*(long *)(param_2 + 0x10),0x10000000,local_40,uVar3,0);
    lVar2 = *(long *)(param_2 + 0x10);
    goto joined_r0x004362f8;
  }
  if (fVar6 == param_1) {
    return 0;
  }
  if (param_4 == (uint *)0x0) {
    uStack_3c = 4;
    if (param_5 != (int *)0x0) goto LAB__text__00436244;
LAB__text__004362c4:
    local_32 = false;
  }
  else {
    uStack_3c = param_4[1];
    if (param_5 == (int *)0x0) goto LAB__text__004362c4;
LAB__text__00436244:
    local_32 = *param_5 == 2;
  }
  local_58[1] = 0x10000000;
  local_38 = 9;
  local_34 = 0;
  local_58[0] = param_2;
  local_48 = param_1;
  fStack_44 = fVar6;
  lVar2 = FUN__text__0042f18c(DAT_00ae9a60,local_58,0);
  *(long *)(param_2 + 0x10) = lVar2;
joined_r0x004362f8:
  if (lVar2 == 0) {
    return 0;
  }
  *(undefined1 *)(param_2 + 0x28) = *param_7;
  *param_3 = fVar6;
  *param_7 = 0;
  return 1;
}


