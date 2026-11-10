/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002440bc; name: FUN_.text__002440bc
 */


void FUN__text__002440bc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong local_28;
  
  if (param_3 == 0x252e42ffe3be86ee) {
    (**(code **)(param_1 + 0x650))(param_1 + 0x670);
    lVar1 = param_1 + 0x110;
    if (*(int *)(param_1 + 0x708) == 0) {
      local_28 = 0x769ffc1ad350;
    }
    else {
      local_28 = 0x779ffc1ad503;
    }
    local_28 = local_28 | 0x431e000000000000;
    uVar2 = FUN__text__0012ce7c(lVar1,&local_28);
    FUN__text__003a14e8(uVar2,0);
    local_28 = 0xae55050415d68330;
    FUN__text__0012cdb0(lVar1,&local_28);
    FUN__text__003a1630();
    FUN__text__0012cbe0(lVar1,0x70ee35);
    FUN__text__003a1630();
    return;
  }
  if (param_3 == -0x2ae14af69a31943a) {
    *(undefined1 *)(param_1 + 0x706) = 1;
    if (*(int *)(param_1 + 0x708) == 0) {
      local_28 = 0x769ffc1ad350;
    }
    else {
      local_28 = 0x779ffc1ad503;
    }
  }
  else {
    if (param_3 != -0x63da43d59cfc5516) {
      return;
    }
    FUN__text__0012bca0(param_1 + 0x110,0);
    *(undefined1 *)(param_1 + 0x704) = 1;
    if (*(int *)(param_1 + 0x708) == 0) {
      local_28 = 0x769ffc1ad350;
    }
    else {
      local_28 = 0x779ffc1ad503;
    }
  }
  local_28 = local_28 | 0x431e000000000000;
  uVar2 = FUN__text__0012ce7c(param_1 + 0x110,&local_28);
  FUN__text__003a14e8(uVar2,0);
  return;
}


