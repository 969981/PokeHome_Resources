/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0065c4cc; name: FUN_.text__0065c4cc
 */


/* WARNING: Removing unreachable block (ram,0x0065c9b8) */
/* WARNING: Removing unreachable block (ram,0x0065c99c) */
/* WARNING: Removing unreachable block (ram,0x0065c924) */
/* WARNING: Removing unreachable block (ram,0x0065c964) */
/* WARNING: Removing unreachable block (ram,0x0065c8ec) */
/* WARNING: Removing unreachable block (ram,0x0065c980) */
/* WARNING: Removing unreachable block (ram,0x0065c908) */
/* WARNING: Removing unreachable block (ram,0x0065c940) */
/* WARNING: Removing unreachable block (ram,0x0065c8cc) */
/* WARNING: Removing unreachable block (ram,0x0065c9d4) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffa0 : 0x0065c8d8 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulong FUN__text__0065c4cc(long *param_1,int param_2)

{
  ulong uVar1;
  long local_60;
  
  if ((param_1 == (long *)0x0) || (*param_1 != 0xbab1e)) {
    uVar1 = 1;
  }
  else if ((char)param_1[0x3c] == '\0') {
    uVar1 = 6;
    if (param_2 < 0x271b) {
      if (param_2 - 3U < 0xb) {
                    /* WARNING: Could not emulate address calculation at 0x0065c5cc */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (*(code *)((ulong)*(byte *)((ulong)(param_2 - 3U) + 0x760272) * 4 + 0x65c51c))();
        return uVar1;
      }
      if (param_2 == 0x2712) {
        uVar1 = 0;
        param_1[0xd] = local_60;
      }
      else if (param_2 == 0x2715) {
        uVar1 = 0;
        param_1[0x39] = local_60;
      }
    }
    else if (param_2 < 0x4e24) {
      if (param_2 < 0x271f) {
        if (param_2 == 0x271b) {
          uVar1 = FUN__text__00665ab0(local_60,param_1 + 0x30);
        }
        else {
          if (param_2 != 0x271c) {
            return 6;
          }
          uVar1 = FUN__text__00665c38(local_60,param_1 + 0x34);
        }
        uVar1 = uVar1 & 0xffffffff;
      }
      else if (param_2 == 0x271f) {
        uVar1 = 0;
        param_1[0xf] = local_60;
      }
      else if (param_2 == 0x4e21) {
        uVar1 = 0;
        param_1[0xc] = local_60;
      }
    }
    else if (param_2 < 0x7539) {
      if (param_2 == 0x4e24) {
        uVar1 = 0;
        param_1[0x38] = local_60;
      }
      else if (param_2 == 0x4e2e) {
        uVar1 = 0;
        param_1[0xe] = local_60;
      }
    }
    else if (param_2 == 0x7539) {
      uVar1 = 0;
      param_1[0x2e] = local_60;
    }
    else if (param_2 == 0x753a) {
      uVar1 = 0;
      param_1[0x2f] = local_60;
    }
  }
  else {
    uVar1 = 8;
  }
  return uVar1;
}


