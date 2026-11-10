/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00241bc0; name: FUN_.text__00241bc0
 */


undefined4 FUN__text__00241bc0(long param_1,long param_2)

{
  int iVar1;
  char cVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined6 local_d0;
  undefined2 uStack_ca;
  undefined6 uStack_c8;
  undefined8 local_c0;
  undefined4 uStack_b8;
  undefined2 local_b4;
  undefined2 uStack_b2;
  undefined6 uStack_b0;
  undefined2 local_aa;
  undefined8 local_a8;
  undefined1 local_a0;
  undefined4 local_9c;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined2 local_50;
  undefined8 local_4c;
  undefined8 local_40;
  undefined8 uStack_38;
  
  puVar9 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar3 = (long *)(**(code **)*puVar9)(puVar9);
  plVar4 = (long *)FUN__text__0023e748();
  if (plVar4 != plVar3) {
    do {
      plVar3 = (long *)*plVar3;
    } while (plVar3 != plVar4 && plVar3 != (long *)0x0);
  }
  iVar1 = *(int *)(puVar9[2] + 4);
  if (iVar1 != 2) {
    if (iVar1 == 1) {
      lVar5 = *(long *)(param_1 + 0x88);
      local_e0 = 0;
      uStack_d8 = 0;
      local_d0 = 0;
      local_40 = *(undefined8 *)(lVar5 + 0x6d8);
      uStack_38 = *(undefined8 *)(lVar5 + 0x6e0);
      uStack_ca = 0;
      uStack_c8 = 0;
      local_aa = 0x101;
      local_9c = 0;
      local_98 = 0;
      local_4c = 0;
      local_a0 = 0;
      local_a8 = 0;
      local_50 = 0;
      local_c0 = 0;
      uStack_b8 = 0;
      local_b4 = 0;
      uStack_b2 = 0;
      uStack_b0 = 0;
      local_60 = 0;
      uStack_58 = 0;
      local_70 = 0;
      uStack_68 = 0;
      local_80 = 0;
      uStack_78 = 0;
      local_90 = 0;
      uStack_88 = 0;
      FUN__text__0024591c(lVar5,&local_e0,*(undefined4 *)(lVar5 + 0x6f0),&local_40);
      uVar8 = CONCAT22(uStack_b2,local_b4) - 7;
      if (uVar8 < 3) {
        uVar8 = *(uint *)((long)(int)uVar8 * 4 + 0x72bbe8);
        cVar2 = *(char *)(param_2 + 0x37);
      }
      else {
        uVar8 = 9999;
        cVar2 = *(char *)(param_2 + 0x37);
      }
      if (cVar2 == '\0') {
        return 3;
      }
      if (*(char *)(param_2 + 0x35) != '\0') {
        return 2;
      }
      if (*(char *)(param_2 + 0x38) != '\0') {
        return 5;
      }
      if (*(char *)(param_2 + 0x39) != '\0') {
        return 0xf;
      }
      if (*(char *)(param_2 + 0x3a) != '\0') {
        return 6;
      }
      if (*(uint *)(param_2 + 0x30) < uVar8) {
        return 0;
      }
      if (CONCAT22(uStack_b2,local_b4) == 7) {
        return 0xd;
      }
      uVar6 = FUN__text__003279c0();
      uVar7 = 0xe;
      if ((uVar6 & 1) == 0) {
        uVar7 = 4;
      }
      return uVar7;
    }
    if (iVar1 != 0) {
      return 2;
    }
  }
  if (*(char *)(param_2 + 0x36) == '\0') {
    uVar7 = 0x11;
    if (*(int *)(param_2 + 0x98) != 2) {
      uVar7 = 1;
    }
    return uVar7;
  }
  if (*(char *)(param_2 + 0x35) != '\0') {
    return 2;
  }
  if (*(char *)(param_2 + 0x38) != '\0') {
    return 5;
  }
  if (*(char *)(param_2 + 0x39) != '\0') {
    return 0xf;
  }
  if (*(char *)(param_2 + 0x3a) != '\0') {
    return 6;
  }
  if (*(char *)(param_2 + 0x3b) != '\0') {
    return 7;
  }
  if (*(char *)(param_2 + 0x3c) != '\0') {
    return 8;
  }
  if (*(char *)(param_2 + 0x3d) != '\0') {
    return 9;
  }
  if (*(char *)(param_2 + 0x3e) != '\0') {
    return 10;
  }
  if (*(char *)(param_2 + 0x3f) != '\0') {
    return 0xb;
  }
  if (*(char *)(param_2 + 0x40) != '\0') {
    return 0xc;
  }
  if (*(uint *)(param_2 + 0x98) < 4) {
    return *(undefined4 *)((long)(int)*(uint *)(param_2 + 0x98) * 4 + 0x724900);
  }
  return 2;
}


