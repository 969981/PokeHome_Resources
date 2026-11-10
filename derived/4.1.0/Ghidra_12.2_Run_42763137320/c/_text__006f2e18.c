/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006f2e18; name: FUN_.text__006f2e18
 */


int FUN__text__006f2e18(long param_1,undefined8 *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint local_38;
  int local_34;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 0) {
    uVar3 = 0;
    uVar2 = 0;
    lVar1 = *(long *)(param_1 + 0x10);
  }
  else {
    uVar2 = *(uint *)(lVar1 + 0x28);
    uVar3 = *(uint *)(lVar1 + 0x2c);
    lVar1 = *(long *)(param_1 + 0x10);
  }
  if (lVar1 != 0) {
    if (uVar2 <= *(uint *)(lVar1 + 0x28)) {
      uVar2 = *(uint *)(lVar1 + 0x28);
    }
    if (uVar3 <= *(uint *)(lVar1 + 0x2c)) {
      uVar3 = *(uint *)(lVar1 + 0x2c);
    }
  }
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0) {
    if (uVar2 <= *(uint *)(lVar1 + 0x28)) {
      uVar2 = *(uint *)(lVar1 + 0x28);
    }
    if (uVar3 <= *(uint *)(lVar1 + 0x2c)) {
      uVar3 = *(uint *)(lVar1 + 0x2c);
    }
  }
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    if (uVar2 <= *(uint *)(lVar1 + 0x28)) {
      uVar2 = *(uint *)(lVar1 + 0x28);
    }
    if (uVar3 <= *(uint *)(lVar1 + 0x2c)) {
      uVar3 = *(uint *)(lVar1 + 0x2c);
    }
  }
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
    if (uVar2 <= *(uint *)(lVar1 + 0x28)) {
      uVar2 = *(uint *)(lVar1 + 0x28);
    }
    if (uVar3 <= *(uint *)(lVar1 + 0x2c)) {
      uVar3 = *(uint *)(lVar1 + 0x2c);
    }
  }
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 != 0) {
    if (uVar2 <= *(uint *)(lVar1 + 0x28)) {
      uVar2 = *(uint *)(lVar1 + 0x28);
    }
    if (uVar3 <= *(uint *)(lVar1 + 0x2c)) {
      uVar3 = *(uint *)(lVar1 + 0x2c);
    }
  }
  if (uVar2 == 0) {
    if (uVar3 == 0) {
      return 0;
    }
    local_34 = 0;
    (*DAT_00c5fef8)(*param_2,0x18,&local_34);
    uVar2 = local_34 * uVar3;
  }
  local_38 = 0;
  (*DAT_00c5fef8)(*param_2,0x1a,&local_38);
  uVar3 = 0;
  if (local_38 != 0) {
    uVar3 = ((local_38 + uVar2) - 1) / local_38;
  }
  return uVar3 * local_38;
}


