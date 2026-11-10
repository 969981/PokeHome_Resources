/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001337ac; name: FUN_.text__001337ac
 */


void FUN__text__001337ac(long param_1)

{
  char cVar1;
  code *pcVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  short sVar7;
  undefined8 local_188;
  undefined1 *local_180;
  code *local_178;
  code *local_170;
  undefined1 *local_168;
  long alStack_160 [12];
  undefined1 *local_100;
  code *local_f8;
  code *local_f0;
  undefined1 *puStack_e8;
  undefined1 auStack_e0 [96];
  undefined8 local_80;
  long local_78;
  undefined8 local_70;
  undefined8 *local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined1 local_54 [4];
  
  puVar6 = (undefined8 *)(param_1 + 0x18);
  iVar4 = FUN__text__005f324c(*puVar6);
  if (iVar4 == 0) {
    uVar5 = 0;
    sVar7 = *(short *)(param_1 + 0xe6);
    cVar1 = *(char *)(param_1 + 0xe4);
  }
  else {
    iVar4 = FUN__text__005f324c(*(undefined8 *)(param_1 + 0x20));
    if (iVar4 == 0) {
      uVar5 = 1;
      sVar7 = *(short *)(param_1 + 0xe6);
      cVar1 = *(char *)(param_1 + 0xe4);
    }
    else {
      iVar4 = FUN__text__005f324c(*(undefined8 *)(param_1 + 0x28));
      if (iVar4 == 0) {
        uVar5 = 2;
        sVar7 = *(short *)(param_1 + 0xe6);
        cVar1 = *(char *)(param_1 + 0xe4);
      }
      else {
        iVar4 = FUN__text__005f324c(*(undefined8 *)(param_1 + 0x30));
        if (iVar4 == 0) {
          uVar5 = 3;
          sVar7 = *(short *)(param_1 + 0xe6);
          cVar1 = *(char *)(param_1 + 0xe4);
        }
        else {
          iVar4 = FUN__text__005f324c(*(undefined8 *)(param_1 + 0x38));
          if (iVar4 == 0) {
            uVar5 = 4;
            sVar7 = *(short *)(param_1 + 0xe6);
            cVar1 = *(char *)(param_1 + 0xe4);
          }
          else {
            iVar4 = FUN__text__005f324c(*(undefined8 *)(param_1 + 0x40));
            if (iVar4 == 0) {
              uVar5 = 5;
              sVar7 = *(short *)(param_1 + 0xe6);
              cVar1 = *(char *)(param_1 + 0xe4);
            }
            else {
              iVar4 = FUN__text__005f324c(*(undefined8 *)(param_1 + 0x48));
              uVar5 = 6;
              if (iVar4 != 0) {
                uVar5 = 7;
              }
              sVar7 = *(short *)(param_1 + 0xe6);
              cVar1 = *(char *)(param_1 + 0xe4);
            }
          }
        }
      }
    }
  }
  if (cVar1 != '\0') {
    sVar3 = (short)uVar5 + -1;
    if (sVar7 < (short)uVar5 && sVar7 != -1) {
      sVar3 = sVar7;
    }
    sVar7 = sVar3;
  }
  local_5c = 0xffffffffffffffff;
  local_60 = 0;
  local_180 = &LAB__text__00133c58;
  local_178 = FUN__text__00133c98;
  local_f0 = (code *)0x0;
  puStack_e8 = (undefined1 *)0x0;
  local_100 = (undefined1 *)0x0;
  local_f8 = (code *)0x0;
  local_54._0_3_ = 0x10000;
  local_170 = FUN__text__00133c9c;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = (undefined8 *)0x0;
  local_168 = &LAB__text__00133ca8;
  alStack_160[0] = param_1;
  if (*(int *)(param_1 + 0xe0) == 5) {
    local_188 = *(undefined8 *)(param_1 + 0xf0);
    FUN__text__00133cb4(&local_100,&local_188);
    pcVar2 = local_f8;
    if (local_f8 != (code *)0x0) {
      local_f0 = (code *)0x0;
      puStack_e8 = (undefined1 *)0x0;
      local_100 = (undefined1 *)0x0;
      local_f8 = (code *)0x0;
      (*pcVar2)(auStack_e0);
    }
  }
  if (local_170 != (code *)0x0) {
    (*local_170)(alStack_160,auStack_e0);
    local_100 = local_180;
    local_f8 = local_178;
    local_f0 = local_170;
    puStack_e8 = local_168;
  }
  pcVar2 = local_178;
  local_5c = CONCAT44((int)sVar7,(uint)*(ushort *)(param_1 + 0xe8));
  local_54._1_2_ = 1;
  local_68 = puVar6;
  local_60 = uVar5;
  if (local_178 != (code *)0x0) {
    local_170 = (code *)0x0;
    local_168 = (undefined1 *)0x0;
    local_180 = (undefined1 *)0x0;
    local_178 = (code *)0x0;
    (*pcVar2)(alStack_160);
  }
  FUN__text__005e9290(&local_180,param_1 + 0x100);
  FUN__text__00133ff0(&local_180,*(undefined8 *)(*(long *)(param_1 + 8) + 0x60),&local_100);
  if (local_168 != (undefined1 *)0x0) {
    (**(code **)(*(long *)(local_168 + 0x48) + 0x18))();
  }
  *(undefined1 *)(param_1 + 0x50) = 1;
  if (local_78 != 0) {
    (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
    local_78 = 0;
  }
  pcVar2 = local_f8;
  if (local_f8 != (code *)0x0) {
    local_f0 = (code *)0x0;
    puStack_e8 = (undefined1 *)0x0;
    local_100 = (undefined1 *)0x0;
    local_f8 = (code *)0x0;
    (*pcVar2)(auStack_e0);
  }
  return;
}


