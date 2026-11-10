/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00132bf4; name: FUN_.text__00132bf4
 */


void FUN__text__00132bf4(long param_1)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  undefined8 uVar5;
  long lVar6;
  long local_b8;
  undefined1 *local_b0;
  code *local_a8;
  code *local_a0;
  undefined1 *local_98;
  long alStack_90 [12];
  
  local_a0 = (code *)0x0;
  local_98 = (undefined1 *)0x0;
  local_b0 = (undefined1 *)0x0;
  local_a8 = (code *)0x0;
  iVar2 = FUN__text__005f324c(*(undefined8 *)(param_1 + 0x20));
  if (iVar2 == 0) {
    return;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  local_b8 = *(long *)(param_1 + 0x20);
  if (local_b8 != 0) {
    (**(code **)(*(long *)(local_b8 + 0x48) + 0x10))();
  }
  FUN__text__003a5348(uVar5,0,&local_b8);
  if (local_b8 != 0) {
    (**(code **)(*(long *)(local_b8 + 0x48) + 0x18))();
    local_b8 = 0;
  }
  iVar2 = FUN__text__005f324c(*(undefined8 *)(param_1 + 0x28));
  if (iVar2 == 0) {
    iVar2 = 1;
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    local_b8 = *(long *)(param_1 + 0x28);
    if (local_b8 != 0) {
      (**(code **)(*(long *)(local_b8 + 0x48) + 0x10))();
    }
    FUN__text__003a5348(uVar5,1,&local_b8);
    if (local_b8 != 0) {
      (**(code **)(*(long *)(local_b8 + 0x48) + 0x18))();
      local_b8 = 0;
    }
    iVar2 = FUN__text__005f324c(*(undefined8 *)(param_1 + 0x30));
    if (iVar2 == 0) {
      iVar2 = 2;
    }
    else {
      uVar5 = *(undefined8 *)(param_1 + 0x18);
      local_b8 = *(long *)(param_1 + 0x30);
      if (local_b8 != 0) {
        (**(code **)(*(long *)(local_b8 + 0x48) + 0x10))();
      }
      FUN__text__003a5348(uVar5,2,&local_b8);
      if (local_b8 != 0) {
        (**(code **)(*(long *)(local_b8 + 0x48) + 0x18))();
        local_b8 = 0;
      }
      iVar2 = FUN__text__005f324c(*(undefined8 *)(param_1 + 0x38));
      if (iVar2 == 0) {
        iVar2 = 3;
      }
      else {
        uVar5 = *(undefined8 *)(param_1 + 0x18);
        local_b8 = *(long *)(param_1 + 0x38);
        if (local_b8 != 0) {
          (**(code **)(*(long *)(local_b8 + 0x48) + 0x10))();
        }
        FUN__text__003a5348(uVar5,3,&local_b8);
        if (local_b8 != 0) {
          (**(code **)(*(long *)(local_b8 + 0x48) + 0x18))();
          local_b8 = 0;
        }
        iVar2 = FUN__text__005f324c(*(undefined8 *)(param_1 + 0x40));
        if (iVar2 == 0) {
          iVar2 = 4;
        }
        else {
          uVar5 = *(undefined8 *)(param_1 + 0x18);
          local_b8 = *(long *)(param_1 + 0x40);
          if (local_b8 != 0) {
            (**(code **)(*(long *)(local_b8 + 0x48) + 0x10))();
          }
          FUN__text__003a5348(uVar5,4,&local_b8);
          if (local_b8 != 0) {
            (**(code **)(*(long *)(local_b8 + 0x48) + 0x18))();
            local_b8 = 0;
          }
          iVar2 = FUN__text__005f324c(*(undefined8 *)(param_1 + 0x48));
          if (iVar2 == 0) {
            iVar2 = 5;
          }
          else {
            uVar5 = *(undefined8 *)(param_1 + 0x18);
            local_b8 = *(long *)(param_1 + 0x48);
            if (local_b8 != 0) {
              (**(code **)(*(long *)(local_b8 + 0x48) + 0x10))();
            }
            FUN__text__003a5348(uVar5,5,&local_b8);
            if (local_b8 != 0) {
              (**(code **)(*(long *)(local_b8 + 0x48) + 0x18))();
              local_b8 = 0;
            }
            iVar2 = FUN__text__005f324c(*(undefined8 *)(param_1 + 0x50));
            if (iVar2 == 0) {
              iVar2 = 6;
            }
            else {
              uVar5 = *(undefined8 *)(param_1 + 0x18);
              local_b8 = *(long *)(param_1 + 0x50);
              if (local_b8 != 0) {
                (**(code **)(*(long *)(local_b8 + 0x48) + 0x10))();
              }
              FUN__text__003a5348(uVar5,6,&local_b8);
              if (local_b8 != 0) {
                (**(code **)(*(long *)(local_b8 + 0x48) + 0x18))();
                local_b8 = 0;
              }
              iVar2 = 7;
            }
          }
        }
      }
    }
  }
  lVar6 = *(long *)(param_1 + 0x18);
  local_b0 = &LAB__text__00133468;
  local_a8 = FUN__text__001334a8;
  local_a0 = FUN__text__001334ac;
  pcVar4 = *(code **)(lVar6 + 0x168);
  local_98 = &LAB__text__001334b8;
  alStack_90[0] = param_1;
  if (pcVar4 != (code *)0x0) {
    *(undefined8 *)(lVar6 + 0x170) = 0;
    *(undefined8 *)(lVar6 + 0x178) = 0;
    *(undefined8 *)(lVar6 + 0x160) = 0;
    *(undefined8 *)(lVar6 + 0x168) = 0;
    (*pcVar4)(lVar6 + 0x180);
    if (local_a0 == (code *)0x0) goto LAB__text__00132ee8;
  }
  (*local_a0)(alStack_90,lVar6 + 0x180);
  *(undefined8 *)(lVar6 + 0x160) = local_b0;
  *(code **)(lVar6 + 0x168) = local_a8;
  *(code **)(lVar6 + 0x170) = local_a0;
  *(undefined1 **)(lVar6 + 0x178) = local_98;
LAB__text__00132ee8:
  FUN__text__003a5510(*(undefined8 *)(param_1 + 0x18),0);
  FUN__text__003a5510(*(undefined8 *)(param_1 + 0x18),1);
  FUN__text__003a5510(*(undefined8 *)(param_1 + 0x18),2);
  FUN__text__003a5510(*(undefined8 *)(param_1 + 0x18),3);
  FUN__text__003a5510(*(undefined8 *)(param_1 + 0x18),4);
  FUN__text__003a5510(*(undefined8 *)(param_1 + 0x18),5);
  FUN__text__003a5510(*(undefined8 *)(param_1 + 0x18),6);
  if (*(char *)(param_1 + 0xf4) != '\0') {
    sVar1 = *(short *)(param_1 + 0xf6);
    uVar3 = iVar2 - 1;
    if ((uint)(int)sVar1 <= uVar3 && (int)sVar1 != 0xffffffff) {
      uVar3 = (uint)sVar1;
    }
    FUN__text__003a5358(*(undefined8 *)(param_1 + 0x18),uVar3,0x721830,1);
  }
  if (*(uint *)(param_1 + 0xe0) < 6) {
                    /* WARNING: Could not emulate address calculation at 0x00132f88 */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK__text__00132f94 +
              (ulong)*(byte *)((ulong)*(uint *)(param_1 + 0xe0) + 0x721820) * 4))();
    return;
  }
  *(undefined1 *)(param_1 + 0x58) = 1;
  FUN__text__003a6480(*(undefined8 *)(param_1 + 0x18),*(undefined2 *)(param_1 + 0xf8));
  pcVar4 = local_a8;
  if (local_a8 != (code *)0x0) {
    local_a0 = (code *)0x0;
    local_98 = (undefined1 *)0x0;
    local_b0 = (undefined1 *)0x0;
    local_a8 = (code *)0x0;
    (*pcVar4)(alStack_90);
  }
  return;
}


