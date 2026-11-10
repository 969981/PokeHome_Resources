/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001cac60; name: FUN_.text__001cac60
 */


void FUN__text__001cac60(undefined8 param_1,ulong param_2,ulong param_3,undefined8 param_4,
                        long param_5,uint *param_6,ulong param_7,uint param_8,long param_9,
                        long param_10,byte param_11,byte *param_12,byte *param_13)

{
  uint uVar1;
  long lVar2;
  code *pcVar3;
  byte bVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  undefined8 local_d0;
  code *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  if ((((((param_3 & 1) == 0) || ((param_2 & 1) != 0)) || (*(char *)(param_5 + 0x82) == '\0')) ||
      ((uVar6 = FUN__text__003a150c(param_5), (uVar6 & 1) == 0 ||
       (*(char *)(param_5 + 0x15a) == '\0')))) ||
     (uVar6 = FUN__text__003a1ffc(param_5,param_4), (uVar6 & 1) == 0)) {
    bVar4 = 0;
    *param_6 = 0;
  }
  else {
    uVar1 = *param_6 + 1;
    uVar9 = 300;
    if (uVar1 < 300) {
      uVar9 = *param_6 + 1;
    }
    *param_6 = uVar9;
    uVar8 = uVar9;
    if ((((param_11 & 1) != 0) && (((param_7 & 1) == 0 || ((param_8 & 1) != 0)))) &&
       (uVar8 = uVar1, 2 < uVar9)) {
      *param_6 = 0;
      FUN__text__003a1dd4(param_5);
      lVar2 = DAT_008e1520;
      if (**(char **)(param_10 + 8) != '\0') {
        uVar7 = FUN__text__003eec14(DAT_008e1520);
        local_60 = 0;
        uStack_58 = 0;
        local_70 = 0;
        uStack_68 = 0;
        local_80 = 0;
        uStack_78 = 0;
        local_90 = 0;
        uStack_88 = 0;
        local_a0 = 0;
        uStack_98 = 0;
        local_b0 = 0;
        uStack_a8 = 0;
        local_c0 = 0;
        uStack_b8 = 0;
        local_d0 = 0;
        local_c8 = (code *)0x0;
        iVar5 = FUN__text__003ef560(lVar2,param_10,uVar7,0);
        if ((iVar5 != 0) &&
           (FUN__text__0015e5bc(*(undefined8 *)(lVar2 + 0x210),param_10,iVar5,uVar7,0,&local_d0,0),
           pcVar3 = local_c8, local_c8 != (code *)0x0)) {
          local_c0 = 0;
          uStack_b8 = 0;
          local_d0 = 0;
          local_c8 = (code *)0x0;
          (*pcVar3)(&local_b0);
        }
      }
      uVar8 = *param_6;
    }
    lVar2 = DAT_008e1520;
    if ((uVar8 == 1) && (**(char **)(param_9 + 8) != '\0')) {
      uVar7 = FUN__text__003eec14(DAT_008e1520);
      local_60 = 0;
      uStack_58 = 0;
      local_70 = 0;
      uStack_68 = 0;
      local_80 = 0;
      uStack_78 = 0;
      local_90 = 0;
      uStack_88 = 0;
      local_a0 = 0;
      uStack_98 = 0;
      local_b0 = 0;
      uStack_a8 = 0;
      local_c0 = 0;
      uStack_b8 = 0;
      local_d0 = 0;
      local_c8 = (code *)0x0;
      iVar5 = FUN__text__003ef560(lVar2,param_9,uVar7,0);
      if ((iVar5 != 0) &&
         (FUN__text__0015e5bc(*(undefined8 *)(lVar2 + 0x210),param_9,iVar5,uVar7,0,&local_d0,0),
         pcVar3 = local_c8, local_c8 != (code *)0x0)) {
        local_c0 = 0;
        uStack_b8 = 0;
        local_d0 = 0;
        local_c8 = (code *)0x0;
        (*pcVar3)(&local_b0);
      }
    }
    bVar4 = 1;
  }
  *param_12 = *param_12 | bVar4;
  *param_13 = *param_13 | bVar4;
  return;
}


