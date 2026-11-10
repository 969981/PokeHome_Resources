/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006d7660; name: FUN_.text__006d7660
 */


void FUN__text__006d7660(long param_1)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  code *pcVar4;
  code *pcVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 local_68;
  undefined8 local_60;
  long local_58;
  float local_50;
  undefined4 uStack_4c;
  ulong local_48;
  
  if (*(long *)(param_1 + 0x3f0) == 0) {
    pcVar2 = (code *)0x0;
  }
  else {
    pcVar2 = *(code **)(*(long *)(param_1 + 0x3f0) + 0x40);
  }
  if (*(long *)(param_1 + 0x3e0) == 0) {
    pcVar4 = (code *)0x0;
  }
  else {
    pcVar4 = *(code **)(*(long *)(param_1 + 0x3e0) + 0x40);
  }
  if (*(long *)(param_1 + 1000) == 0) {
    pcVar5 = (code *)0x0;
  }
  else {
    pcVar5 = *(code **)(*(long *)(param_1 + 1000) + 0x40);
  }
  if ((((pcVar2 != (code *)0x0) || (pcVar4 != (code *)0x0)) || (pcVar5 != (code *)0x0)) &&
     (0 < *(int *)(param_1 + 0x28))) {
    uVar6 = 0;
    lVar3 = 0;
    if (pcVar2 == (code *)0x0) {
      do {
        lVar1 = *(long *)(param_1 + 0xb0) + lVar3;
        uStack_4c = *(undefined4 *)(lVar1 + 0xc);
        local_48 = uVar6 & 0xffffffff;
        local_50 = *(float *)(param_1 + 0x44) - *(float *)(lVar1 + 8);
        local_68 = *(undefined8 *)(lVar1 + 0x10);
        local_60 = *(undefined8 *)(lVar1 + 0x18);
        local_58 = param_1;
        if (pcVar4 != (code *)0x0) {
          (*pcVar4)(&local_68);
        }
        if (pcVar5 != (code *)0x0) {
          (*pcVar5)(&local_68);
        }
        uVar6 = uVar6 + 1;
        *(undefined8 *)(*(long *)(param_1 + 0xb0) + lVar3 + 0x18) = 0;
        lVar1 = *(long *)(param_1 + 0xb0) + lVar3;
        lVar3 = lVar3 + 0x20;
        *(undefined8 *)(lVar1 + 0x10) = 0;
      } while ((long)uVar6 < (long)*(int *)(param_1 + 0x28));
    }
    else {
      lVar3 = 0;
      if (pcVar4 == (code *)0x0) {
        do {
          lVar1 = *(long *)(param_1 + 0xb0) + lVar3;
          uStack_4c = *(undefined4 *)(lVar1 + 0xc);
          local_48 = uVar6 & 0xffffffff;
          local_50 = *(float *)(param_1 + 0x44) - *(float *)(lVar1 + 8);
          local_68 = *(undefined8 *)(lVar1 + 0x10);
          local_60 = *(undefined8 *)(lVar1 + 0x18);
          local_58 = param_1;
          (*pcVar2)(&local_68);
          if (pcVar5 != (code *)0x0) {
            (*pcVar5)(&local_68);
          }
          uVar6 = uVar6 + 1;
          *(undefined8 *)(*(long *)(param_1 + 0xb0) + lVar3 + 0x18) = 0;
          lVar1 = *(long *)(param_1 + 0xb0) + lVar3;
          lVar3 = lVar3 + 0x20;
          *(undefined8 *)(lVar1 + 0x10) = 0;
        } while ((long)uVar6 < (long)*(int *)(param_1 + 0x28));
      }
      else {
        lVar3 = 0;
        if (pcVar5 == (code *)0x0) {
          do {
            lVar1 = *(long *)(param_1 + 0xb0) + lVar3;
            uStack_4c = *(undefined4 *)(lVar1 + 0xc);
            local_48 = uVar6 & 0xffffffff;
            local_50 = *(float *)(param_1 + 0x44) - *(float *)(lVar1 + 8);
            local_68 = *(undefined8 *)(lVar1 + 0x10);
            local_60 = *(undefined8 *)(lVar1 + 0x18);
            local_58 = param_1;
            (*pcVar2)(&local_68);
            (*pcVar4)(&local_68);
            uVar6 = uVar6 + 1;
            *(undefined8 *)(*(long *)(param_1 + 0xb0) + lVar3 + 0x18) = 0;
            lVar1 = *(long *)(param_1 + 0xb0) + lVar3;
            lVar3 = lVar3 + 0x20;
            *(undefined8 *)(lVar1 + 0x10) = 0;
          } while ((long)uVar6 < (long)*(int *)(param_1 + 0x28));
        }
        else {
          uVar7 = 0;
          do {
            lVar3 = *(long *)(param_1 + 0xb0) + uVar6;
            uStack_4c = *(undefined4 *)(lVar3 + 0xc);
            local_48 = uVar7 & 0xffffffff;
            local_50 = *(float *)(param_1 + 0x44) - *(float *)(lVar3 + 8);
            local_68 = *(undefined8 *)(lVar3 + 0x10);
            local_60 = *(undefined8 *)(lVar3 + 0x18);
            local_58 = param_1;
            (*pcVar2)(&local_68);
            (*pcVar4)(&local_68);
            (*pcVar5)(&local_68);
            uVar7 = uVar7 + 1;
            *(undefined8 *)(*(long *)(param_1 + 0xb0) + uVar6 + 0x18) = 0;
            lVar3 = *(long *)(param_1 + 0xb0) + uVar6;
            uVar6 = uVar6 + 0x20;
            *(undefined8 *)(lVar3 + 0x10) = 0;
          } while ((long)uVar7 < (long)*(int *)(param_1 + 0x28));
        }
      }
    }
  }
  return;
}


