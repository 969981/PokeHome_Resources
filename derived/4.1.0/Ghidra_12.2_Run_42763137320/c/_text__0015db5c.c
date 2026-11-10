/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0015db5c; name: FUN_.text__0015db5c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__0015db5c(long param_1)

{
  code *pcVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  long local_a8;
  undefined8 local_a0;
  code *local_98;
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
  undefined8 local_30;
  undefined8 uStack_28;
  
  if (*(char *)(param_1 + 0x179) == '\0') {
    if (*(char *)(param_1 + 0x17a) == '\0') {
      lVar6 = *(long *)(param_1 + 0x118);
      uVar4 = FUN__text__00119a4c(lVar6,0x300000000);
      if (((uVar4 & 1) == 0) || (*(char *)(param_1 + 0x17b) == '\0')) {
        if (*(char *)(param_1 + 0x1c0) == '\0') {
          bVar2 = FUN__text__0011b4e0(*(undefined8 *)(lVar6 + 0x120));
          *(byte *)(param_1 + 0x1c0) = bVar2 & 1;
          return 0;
        }
        uVar4 = FUN__text__0011b4f8();
        if ((uVar4 & 1) == 0) {
          return 0;
        }
        if (*(char *)(param_1 + 0x17b) == '\0') {
          return 0;
        }
      }
      *(undefined1 *)(param_1 + 0x1c0) = 0;
      local_c0 = 0x89be9c53e7c747e5;
      uStack_b8 = 0x71f07b;
      lVar6 = *_DAT_0089f598;
      local_b0 = 0x18;
      local_a8 = 0;
      uVar5 = FUN__text__003eec14(lVar6);
      local_30 = 0;
      uStack_28 = 0;
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
      local_98 = (code *)0x0;
      iVar3 = FUN__text__003ef560(lVar6,&local_c0,uVar5,0);
      if ((iVar3 != 0) &&
         (FUN__text__0015e5bc(*(undefined8 *)(lVar6 + 0x210),&local_c0,iVar3,uVar5,0,&local_a0,0),
         pcVar1 = local_98, local_98 != (code *)0x0)) {
        local_90 = 0;
        uStack_88 = 0;
        local_a0 = 0;
        local_98 = (code *)0x0;
        (*pcVar1)(&local_80);
      }
      if (local_a8 != 0) {
        (**(code **)(*(long *)(local_a8 + 0x48) + 0x18))();
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x17a) = 0;
    }
  }
  return 1;
}


