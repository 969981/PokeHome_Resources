/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005bd8c0; name: FUN_.text__005bd8c0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN__text__005bd8c0(long param_1,long param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  int local_1ac;
  undefined8 local_1a8;
  long local_1a0;
  long local_198;
  undefined8 local_190;
  code *local_188;
  undefined8 local_180;
  code *local_178;
  undefined1 auStack_170 [96];
  undefined8 local_110;
  code *local_108;
  undefined8 local_100;
  code *local_f8;
  undefined1 auStack_f0 [96];
  undefined4 local_90;
  undefined1 uStack_79;
  int *local_78 [3];
  
  puVar7 = *(undefined8 **)(param_1 + 0x820);
  lVar5 = 0x867578;
  uVar6 = ((long)puVar7 - *(long *)(param_1 + 0x818) >> 5) * 0x38e38e39;
  if ((int)uVar6 != 0) {
    lVar8 = 0;
    iVar3 = 0;
    do {
      if (*(long *)(*(long *)(param_1 + 0x818) + 8 + lVar8) == 0) {
        local_198 = *(long *)(param_2 + 8);
        local_1a0 = 0x867588;
        if (local_198 != 0) {
          (**(code **)(*(long *)(local_198 + 0x48) + 0x10))();
        }
        local_180 = 0;
        local_178 = (code *)0x0;
        local_190 = 0;
        local_188 = (code *)0x0;
        if (*(code **)(param_2 + 0x20) != (code *)0x0) {
          (**(code **)(param_2 + 0x20))(param_2 + 0x30,auStack_170);
          local_190 = *(undefined8 *)(param_2 + 0x10);
          local_188 = *(code **)(param_2 + 0x18);
          local_180 = *(undefined8 *)(param_2 + 0x20);
          local_178 = *(code **)(param_2 + 0x28);
        }
        local_100 = 0;
        local_f8 = (code *)0x0;
        local_110 = 0;
        local_108 = (code *)0x0;
        if (*(code **)(param_2 + 0xa0) != (code *)0x0) {
          (**(code **)(param_2 + 0xa0))(param_2 + 0xb0,auStack_f0);
          local_110 = *(undefined8 *)(param_2 + 0x90);
          local_108 = *(code **)(param_2 + 0x98);
          local_100 = *(undefined8 *)(param_2 + 0xa0);
          local_f8 = *(code **)(param_2 + 0xa8);
        }
        local_1a0 = 0x867718;
        local_90 = *param_3;
        lVar8 = *(long *)(param_1 + 0x818) + lVar8;
        if (*(long *)(lVar8 + 8) != 0) {
          (**(code **)(*(long *)(*(long *)(lVar8 + 8) + 0x48) + 0x18))();
          *(undefined8 *)(lVar8 + 8) = 0;
        }
        lVar5 = local_198;
        local_198 = 0;
        *(long *)(lVar8 + 8) = lVar5;
        pcVar2 = *(code **)(lVar8 + 0x18);
        if (pcVar2 != (code *)0x0) {
          *(undefined8 *)(lVar8 + 0x20) = 0;
          *(undefined8 *)(lVar8 + 0x28) = 0;
          *(undefined8 *)(lVar8 + 0x10) = 0;
          *(undefined8 *)(lVar8 + 0x18) = 0;
          (*pcVar2)(lVar8 + 0x30);
        }
        if (local_178 != (code *)0x0) {
          (*local_178)(auStack_170,lVar8 + 0x30);
          pcVar2 = local_188;
          *(code **)(lVar8 + 0x28) = local_178;
          *(undefined8 *)(lVar8 + 0x10) = local_190;
          *(code **)(lVar8 + 0x18) = local_188;
          *(undefined8 *)(lVar8 + 0x20) = local_180;
          if (local_188 != (code *)0x0) {
            local_180 = 0;
            local_178 = (code *)0x0;
            local_190 = 0;
            local_188 = (code *)0x0;
            (*pcVar2)(auStack_170);
          }
        }
        pcVar2 = *(code **)(lVar8 + 0x98);
        if (pcVar2 != (code *)0x0) {
          *(undefined8 *)(lVar8 + 0xa0) = 0;
          *(undefined8 *)(lVar8 + 0xa8) = 0;
          *(undefined8 *)(lVar8 + 0x90) = 0;
          *(undefined8 *)(lVar8 + 0x98) = 0;
          (*pcVar2)(lVar8 + 0xb0);
        }
        if (local_f8 != (code *)0x0) {
          (*local_f8)(auStack_f0,lVar8 + 0xb0);
          pcVar2 = local_108;
          *(code **)(lVar8 + 0xa8) = local_f8;
          *(undefined8 *)(lVar8 + 0x90) = local_110;
          *(code **)(lVar8 + 0x98) = local_108;
          *(undefined8 *)(lVar8 + 0xa0) = local_100;
          if (local_108 != (code *)0x0) {
            local_100 = 0;
            local_f8 = (code *)0x0;
            local_110 = 0;
            local_108 = (code *)0x0;
            (*pcVar2)(auStack_f0);
          }
        }
        *(undefined4 *)(lVar8 + 0x110) = local_90;
        lVar5 = _DAT_0089f4a8;
        local_1a0 = _DAT_0089f4a8 + 0x10;
        if (local_198 == 0) {
          local_198 = 0;
          pcVar2 = local_108;
        }
        else {
          FUN__text__005d9290(local_198,&local_1a0);
          lVar8 = local_198;
          local_198 = 0;
          pcVar2 = local_108;
          if (lVar8 != 0) {
            (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
            pcVar2 = local_108;
          }
        }
        local_108 = pcVar2;
        if (pcVar2 != (code *)0x0) {
          local_100 = 0;
          local_f8 = (code *)0x0;
          local_110 = 0;
          local_108 = (code *)0x0;
          (*pcVar2)(auStack_f0);
        }
        pcVar2 = local_188;
        if (local_188 != (code *)0x0) {
          local_180 = 0;
          local_178 = (code *)0x0;
          local_190 = 0;
          local_188 = (code *)0x0;
          (*pcVar2)(auStack_170);
        }
        if (local_198 != 0) {
          (**(code **)(*(long *)(local_198 + 0x48) + 0x18))();
        }
        goto LAB__text__005bdcac;
      }
      lVar8 = lVar8 + 0x120;
      iVar3 = iVar3 + 1;
    } while (((uVar6 & 0xffffffff) + (uVar6 & 0xffffffff) * 8) * 0x20 != lVar8);
  }
  if (puVar7 < *(undefined8 **)(param_1 + 0x828)) {
    uVar4 = tpidr_el0;
    uVar4 = uVar4 & 0xffffffffffffe000;
    if (*(long *)(uVar4 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
      FUN__text__00102c10();
    }
    *(undefined8 *)(uVar4 + *(long *)(uVar4 + 0x98) * 8 + 0x18) = *(undefined8 *)(param_1 + 0x830);
    *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + 1;
    *puVar7 = 0x867588;
    lVar8 = *(long *)(param_2 + 8);
    puVar7[1] = lVar8;
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
    }
    puVar7[2] = 0;
    puVar7[4] = 0;
    puVar7[5] = 0;
    puVar7[3] = 0;
    if (*(code **)(param_2 + 0x20) != (code *)0x0) {
      (**(code **)(param_2 + 0x20))(param_2 + 0x30,puVar7 + 6);
      uVar1 = *(undefined8 *)(param_2 + 0x28);
      puVar7[3] = *(undefined8 *)(param_2 + 0x18);
      puVar7[5] = uVar1;
      uVar1 = *(undefined8 *)(param_2 + 0x10);
      puVar7[4] = *(undefined8 *)(param_2 + 0x20);
      puVar7[2] = uVar1;
    }
    puVar7[0x12] = 0;
    puVar7[0x14] = 0;
    puVar7[0x15] = 0;
    puVar7[0x13] = 0;
    if (*(code **)(param_2 + 0xa0) != (code *)0x0) {
      (**(code **)(param_2 + 0xa0))(param_2 + 0xb0,puVar7 + 0x16);
      uVar1 = *(undefined8 *)(param_2 + 0xa8);
      puVar7[0x13] = *(undefined8 *)(param_2 + 0x98);
      puVar7[0x15] = uVar1;
      uVar1 = *(undefined8 *)(param_2 + 0x90);
      puVar7[0x14] = *(undefined8 *)(param_2 + 0xa0);
      puVar7[0x12] = uVar1;
    }
    *puVar7 = 0x867718;
    *(undefined4 *)(puVar7 + 0x22) = *param_3;
    *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + -1;
    *(undefined8 **)(param_1 + 0x820) = puVar7 + 0x24;
  }
  else {
    FUN__text__005c2f80((long *)(param_1 + 0x818),param_2,param_3);
  }
  iVar3 = (int)uVar6;
LAB__text__005bdcac:
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  FUN__text__005cf7d8(&local_1a0,param_2,*param_3,0x1ff);
  FUN__text__0014fe4c(&local_1a8,uVar1,&local_1a0);
  local_78[0] = &local_1ac;
  local_1ac = iVar3;
  lVar8 = FUN__text__005c1080(param_1 + 0x730,&local_1ac,_DAT_008a01d8,local_78,&uStack_79);
  if (*(long *)(lVar8 + 0x18) != 0) {
    (**(code **)(*(long *)(*(long *)(lVar8 + 0x18) + 0x48) + 0x18))();
  }
  *(undefined8 *)(lVar8 + 0x18) = local_1a8;
  local_1a0 = lVar5 + 0x10;
  local_1a8 = 0;
  if (local_198 == 0) {
    local_198 = 0;
    pcVar2 = local_108;
  }
  else {
    FUN__text__005d9290(local_198,&local_1a0);
    lVar5 = local_198;
    local_198 = 0;
    pcVar2 = local_108;
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
      pcVar2 = local_108;
    }
  }
  local_108 = pcVar2;
  if (pcVar2 != (code *)0x0) {
    local_100 = 0;
    local_f8 = (code *)0x0;
    local_110 = 0;
    local_108 = (code *)0x0;
    (*pcVar2)(auStack_f0);
  }
  pcVar2 = local_188;
  if (local_188 != (code *)0x0) {
    local_180 = 0;
    local_178 = (code *)0x0;
    local_190 = 0;
    local_188 = (code *)0x0;
    (*pcVar2)(auStack_170);
  }
  if (local_198 != 0) {
    (**(code **)(*(long *)(local_198 + 0x48) + 0x18))();
  }
  return iVar3;
}


