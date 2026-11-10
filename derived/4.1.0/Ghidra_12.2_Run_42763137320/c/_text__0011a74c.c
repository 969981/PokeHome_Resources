/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0011a74c; name: FUN_.text__0011a74c
 */


void FUN__text__0011a74c(long param_1)

{
  uint uVar1;
  ulong uVar2;
  code *pcVar3;
  uint local_18;
  undefined4 local_14;
  
  uVar2 = nn::os::TryWaitSystemEvent((SystemEventType *)(param_1 + 0x90));
  if ((uVar2 & 1) == 0) {
    uVar2 = nn::os::TryWaitSystemEvent((SystemEventType *)(param_1 + 0xc0));
  }
  else {
    local_18 = 0;
    uVar1 = nn::hid::GetNpadStyleSet(&local_18);
    if ((uVar1 >> 1 & 1) == 0) {
      if ((uVar1 & 1) == 0) {
        pcVar3 = *(code **)(param_1 + 0x10);
        if ((uVar1 >> 2 & 1) == 0) {
          if (pcVar3 != (code *)0x0) {
            local_14 = 0;
            goto LAB__text__0011a824;
          }
        }
        else if (pcVar3 != (code *)0x0) {
          local_14 = 3;
LAB__text__0011a824:
          (*pcVar3)(param_1 + 0x30,&local_14,&local_18);
        }
      }
      else {
        pcVar3 = *(code **)(param_1 + 0x10);
        if (pcVar3 != (code *)0x0) {
          local_14 = 1;
          goto LAB__text__0011a824;
        }
      }
    }
    else {
      pcVar3 = *(code **)(param_1 + 0x10);
      if (pcVar3 != (code *)0x0) {
        local_14 = 2;
        goto LAB__text__0011a824;
      }
    }
    nn::os::ClearSystemEvent((SystemEventType *)(param_1 + 0x90));
    uVar2 = nn::os::TryWaitSystemEvent((SystemEventType *)(param_1 + 0xc0));
  }
  if ((uVar2 & 1) == 0) {
    return;
  }
  local_18 = 0x20;
  uVar1 = nn::hid::GetNpadStyleSet(&local_18);
  if ((uVar1 >> 1 & 1) == 0) {
    if ((uVar1 & 1) == 0) {
      pcVar3 = *(code **)(param_1 + 0x10);
      if ((uVar1 >> 2 & 1) == 0) {
        if (pcVar3 == (code *)0x0) goto LAB__text__0011a878;
        local_14 = 0;
      }
      else {
        if (pcVar3 == (code *)0x0) goto LAB__text__0011a878;
        local_14 = 3;
      }
    }
    else {
      pcVar3 = *(code **)(param_1 + 0x10);
      if (pcVar3 == (code *)0x0) goto LAB__text__0011a878;
      local_14 = 1;
    }
  }
  else {
    pcVar3 = *(code **)(param_1 + 0x10);
    if (pcVar3 == (code *)0x0) goto LAB__text__0011a878;
    local_14 = 2;
  }
  (*pcVar3)(param_1 + 0x30,&local_14,&local_18);
LAB__text__0011a878:
  nn::os::ClearSystemEvent((SystemEventType *)(param_1 + 0xc0));
  return;
}


