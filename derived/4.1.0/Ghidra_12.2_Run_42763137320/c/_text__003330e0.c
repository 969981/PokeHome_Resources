/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003330e0; name: FUN_.text__003330e0
 */


void FUN__text__003330e0(int param_1,uint param_2)

{
  long lVar1;
  undefined8 local_50;
  int local_48;
  undefined8 local_40;
  ulong local_38;
  
  lVar1 = FUN__text__00321ac0();
  *(undefined1 *)(lVar1 + 0x934d4) = 1;
  FUN__text__0034a504(&local_50);
  local_50 = 0x200000002;
  local_40 = 0xdf00ce37d0b3d414;
  local_48 = param_1;
  if (0x2706 < param_1) {
    if (param_1 < 0x27e4) {
      if (param_1 - 0x2707U < 0x16) {
                    /* WARNING: Could not emulate address calculation at 0x00333168 */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&UNK__text__00333174 +
                  (ulong)*(byte *)((ulong)(param_1 - 0x2707U) + 0x734c68) * 4))();
        return;
      }
    }
    else if (param_1 == 0x27e4) {
      local_40 = 0xd650a737cbc64577;
    }
    else if (param_1 == 0x2850) {
      local_40 = 0xcd3a6c37c681e1ac;
    }
    else if (param_1 == 20000) {
      local_40 = 0x5078fa5a8dc16a3d;
    }
    goto joined_r0x00333328;
  }
  if (param_1 < 0x3df) {
    if (param_1 == 0) {
      local_40 = 0xdf00cf37d0b3d5c7;
      goto joined_r0x00333328;
    }
    if (param_1 != 0x6f) goto joined_r0x00333328;
  }
  else {
    if (param_1 == 0x3df) {
      local_40 = 0xdf045437d0b6ed9d;
      goto joined_r0x00333328;
    }
    if (param_1 == 0x2332) {
      local_40 = 0xdf18b837d0c84093;
      goto joined_r0x00333328;
    }
    if (param_1 != 0x2333) goto joined_r0x00333328;
  }
  local_40 = 0xdf155237d0c55d6a;
joined_r0x00333328:
  if (param_2 != 0) {
    local_50 = 2;
    local_38 = (ulong)param_2 << 0x20 | 0xa3d;
  }
  FUN__text__00332d00(&local_50);
  return;
}


