/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00506f94; name: FUN_.text__00506f94
 */


void FUN__text__00506f94(undefined8 param_1,long param_2,undefined8 param_3,long *param_4,
                        long *param_5)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  undefined1 auStack_78 [4];
  float local_74;
  undefined8 local_70;
  undefined8 local_68;
  ulong local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulong local_48;
  
  lVar1 = FUN__text__0050c2a0(param_1,*(undefined8 *)(param_2 + 0x50));
  *param_4 = lVar1;
  if (lVar1 == 0) {
    lVar1 = FUN__text__0050c2a0(param_1,0xffffffffffffffff);
    *param_4 = lVar1;
    *param_5 = 0;
    lVar1 = *(long *)(param_2 + 0x58);
  }
  else {
    *param_5 = 0;
    lVar1 = *(long *)(param_2 + 0x58);
  }
  local_74 = 1.0;
  if (lVar1 != -1) {
    local_74 = 1.0;
    lVar4 = FUN__text__0050c2e0(param_1,lVar1);
    if ((((lVar4 != 0) && (*(char *)(lVar4 + 0x568) != '\0')) &&
        (uVar2 = FUN__text__00521260(lVar4,*(undefined8 *)(param_2 + 0x50)), (uVar2 & 1) == 0)) &&
       (uVar2 = FUN__text__00521678(lVar4,param_3,param_4,param_5,&local_74,auStack_78),
       (uVar2 & 1) != 0)) {
      lVar4 = *param_4;
      local_58 = *(undefined8 *)(lVar4 + 0x78);
      local_70 = 0xffffffffffffffff;
      local_68 = 0;
      local_60 = 0x3f800000;
      lVar5 = *param_5;
      local_50 = CONCAT44(*(float *)(lVar4 + 0x9c) -
                          *(float *)(lVar4 + 0x9c) * (1.0 - local_74) * (1.0 - local_74),
                          *(undefined4 *)(lVar4 + 0x98));
      local_48 = (ulong)*(uint *)(lVar4 + 0xa4);
      if (lVar5 != 0) {
        local_70 = *(undefined8 *)(lVar5 + 0x78);
        local_68 = CONCAT44(*(float *)(lVar5 + 0x9c) -
                            *(float *)(lVar5 + 0x9c) * local_74 * local_74,
                            *(undefined4 *)(lVar5 + 0x98));
        local_60 = (ulong)*(uint *)(lVar5 + 0xa4);
      }
      puVar3 = &local_70;
      fVar6 = local_74;
      goto LAB__text__005071a8;
    }
  }
  if (*param_4 == 0) {
    fVar6 = 1.0;
    lVar1 = -1;
    puVar3 = &local_58;
    local_48 = 0x3f800000;
    local_58 = 0xffffffffffffffff;
    local_50 = 0;
  }
  else {
    lVar1 = FUN__text__00524280(*param_4,param_3,param_4,param_5,&local_74);
    lVar4 = *param_4;
    local_58 = *(undefined8 *)(lVar4 + 0x78);
    local_70 = 0xffffffffffffffff;
    local_68 = 0;
    local_60 = 0x3f800000;
    lVar5 = *param_5;
    local_50 = CONCAT44(*(float *)(lVar4 + 0x9c) -
                        *(float *)(lVar4 + 0x9c) * (1.0 - local_74) * (1.0 - local_74),
                        *(undefined4 *)(lVar4 + 0x98));
    local_48 = (ulong)*(uint *)(lVar4 + 0xa4);
    if (lVar5 != 0) {
      local_70 = *(undefined8 *)(lVar5 + 0x78);
      local_68 = CONCAT44(*(float *)(lVar5 + 0x9c) - *(float *)(lVar5 + 0x9c) * local_74 * local_74,
                          *(undefined4 *)(lVar5 + 0x98));
      local_60 = (ulong)*(uint *)(lVar5 + 0xa4);
    }
    puVar3 = &local_70;
    fVar6 = local_74;
  }
LAB__text__005071a8:
  FUN__text__004909c4(fVar6,param_2,&local_58,puVar3,lVar1);
  return;
}


