/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0026a484; name: FUN_.text__0026a484
 */


undefined8 FUN__text__0026a484(long param_1,long param_2)

{
  code *pcVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  long local_b8;
  undefined8 local_b0;
  code *local_a8;
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
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  uVar3 = FUN__text__0011b4d8(*(undefined8 *)(param_2 + 0x120));
  if (((uVar3 & 1) != 0) && (*(char *)(param_1 + 0x6dc) != '\0')) {
    *(undefined1 *)(param_1 + 0x6dd) = 1;
    return 0;
  }
  uVar3 = FUN__text__00119a34(param_2,0x2000);
  if ((uVar3 & 1) == 0) goto LAB__text__0026a744;
  local_b0 = 0xd5a646e9eb5de80c;
  if (*(long *)(param_1 + 0x2d0) != 0) {
    uVar3 = FUN__text__003c7ec0(*(long *)(param_1 + 0x2d0),&local_b0);
    if ((uVar3 & 1) == 0) goto LAB__text__0026a744;
    local_b0 = 0x31b5f77ad1a1d139;
    if (*(long *)(param_1 + 0x2d0) != 0) {
      uVar3 = FUN__text__003c7ec0(*(long *)(param_1 + 0x2d0),&local_b0);
      if ((uVar3 & 1) == 0) goto LAB__text__0026a744;
      local_b0 = 0x8e89686f5660e8f;
      if (*(long *)(param_1 + 0x2d0) != 0) {
        uVar3 = FUN__text__003c7ec0(*(long *)(param_1 + 0x2d0),&local_b0);
        if ((uVar3 & 1) == 0) goto LAB__text__0026a744;
        local_b0 = 0xbf2bb2531b7cde14;
        if ((*(long *)(param_1 + 0x2d0) != 0) &&
           (uVar3 = FUN__text__003c7ec0(*(long *)(param_1 + 0x2d0),&local_b0), (uVar3 & 1) == 0))
        goto LAB__text__0026a744;
      }
    }
  }
  if (*(char *)(param_1 + 0x6dd) == '\0') {
    lVar5 = param_1 + 0x110;
    *(undefined1 *)(param_1 + 0x6dc) = 0;
    lVar4 = FUN__text__0012cb14(lVar5,0x72cf98);
    if (*(char *)(lVar4 + 0x82) != '\0') {
      uVar6 = FUN__text__0012cb14(lVar5,0x72cf98);
      FUN__text__003a14c4(uVar6,0);
    }
    uVar3 = FUN__text__00119a34(param_2,4);
    if ((uVar3 & 1) == 0) {
      return 0;
    }
    uVar3 = FUN__text__00119a34(param_2,2);
    if ((uVar3 & 1) == 0) {
      return 0;
    }
    **(undefined4 **)(param_1 + 0x640) = 2;
    *(undefined1 *)(param_1 + 0x6de) = 1;
    lVar4 = DAT_008e1520;
    local_d0 = 0x534980dedb504867;
    uStack_c8 = 0x7119c7;
    local_c0 = 0x18;
    local_b8 = 0;
    uVar6 = FUN__text__003eec14(DAT_008e1520);
    local_40 = 0;
    uStack_38 = 0;
    local_50 = 0;
    uStack_48 = 0;
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
    local_a8 = (code *)0x0;
    iVar2 = FUN__text__003ef560(lVar4,&local_d0,uVar6,0);
    if ((iVar2 != 0) &&
       (FUN__text__0015e5bc(*(undefined8 *)(lVar4 + 0x210),&local_d0,iVar2,uVar6,0,&local_b0,0),
       pcVar1 = local_a8, local_a8 != (code *)0x0)) {
      local_a0 = 0;
      uStack_98 = 0;
      local_b0 = 0;
      local_a8 = (code *)0x0;
      (*pcVar1)(&local_90);
    }
    if (local_b8 != 0) {
      (**(code **)(*(long *)(local_b8 + 0x48) + 0x18))();
    }
    FUN__text__00128ca0(param_1,0,1);
    *(undefined1 *)(param_1 + 0x6dc) = 0;
    FUN__text__0012bca0(lVar5,0);
    FUN__text__0012bcbc(lVar5,0);
    FUN__text__00128ca0(param_1,0,1);
    FUN__text__00128db0(param_1,0,1);
    FUN__text__00128ec0(param_1,0);
    *(undefined1 *)(param_1 + 0x6dc) = 0;
    return 1;
  }
LAB__text__0026a744:
  *(undefined1 *)(param_1 + 0x6dc) = 1;
  lVar5 = FUN__text__0012cb14(param_1 + 0x110,0x72cf98);
  if (*(char *)(lVar5 + 0x82) == '\0') {
    uVar6 = FUN__text__0012cb14(param_1 + 0x110,0x72cf98);
    FUN__text__003a14c4(uVar6,1);
  }
  return 0;
}


