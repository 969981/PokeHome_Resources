/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002d1084; name: FUN_.text__002d1084
 */


void FUN__text__002d1084(undefined8 param_1,uint *param_2,uint param_3,uint param_4,uint param_5)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  
  param_3 = param_3 & 0xffff;
  if (param_3 < 0x2d0) {
    if (param_3 - 0x287 < 0x23) {
                    /* WARNING: Could not emulate address calculation at 0x002d10b8 */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK__text__002d10c4 + (ulong)*(byte *)((ulong)(param_3 - 0x287) + 0x733840) * 4))
                ();
      return;
    }
    if (param_3 == 0x1df) {
      lVar1 = 0;
      if ((param_5 & 1) == 0) {
        lVar1 = 4;
      }
      *(uint *)((long)param_2 + lVar1) = *(uint *)((long)param_2 + lVar1) | 1;
      if ((((param_5 & 1) != 0) && (DAT_008e5328 != 0)) &&
         (iVar3 = FUN__text__002d5ea0(DAT_008e5328,0x4fe), iVar3 != 0)) {
        *param_2 = *param_2 | 0x3e;
        param_2[1] = param_2[1] | 0x3e;
        return;
      }
    }
    else if (param_3 == 0x2ce) {
      lVar1 = 0;
      if ((param_5 & 1) == 0) {
        lVar1 = 4;
      }
      *(uint *)((long)param_2 + lVar1) = *(uint *)((long)param_2 + lVar1) | 0x10;
    }
  }
  else if (param_3 < 0x34d) {
    if (param_3 == 0x2d0) {
      if ((((param_5 & 1) != 0) && (DAT_008e5328 != 0)) &&
         (iVar3 = FUN__text__002d5ea0(DAT_008e5328,0), iVar3 != 0)) {
        *param_2 = *param_2 | 3;
        param_2[1] = param_2[1] | 3;
        return;
      }
    }
    else {
      if (param_3 == 0x306) {
        lVar1 = 0;
        if ((param_5 & 1) == 0) {
          lVar1 = 4;
        }
        uVar2 = (param_4 & 0xffff) * 0x2493 >> 0x10;
        lVar4 = ((ulong)(param_4 + (uVar2 + ((param_4 - uVar2 & 0xfffe) >> 1) >> 2) * -7) & 0xffff)
                * 4;
        *(uint *)((long)param_2 + lVar1) =
             1 << (ulong)(*(uint *)(lVar4 + 0x7338a4) & 0x1f) |
             *(uint *)((long)param_2 + lVar1) | 1 << (ulong)(*(uint *)(lVar4 + 0x733888) & 0x1f);
        return;
      }
      if (param_3 == 0x30a) goto LAB__text__002d1208;
    }
  }
  else if (param_3 < 0x36d) {
    if (param_3 == 0x34d) {
      lVar1 = 0;
      if ((param_5 & 1) == 0) {
        lVar1 = 4;
      }
      *(uint *)((long)param_2 + lVar1) = *(uint *)((long)param_2 + lVar1) | 7;
      return;
    }
    if (param_3 == 0x36b) {
LAB__text__002d1208:
      lVar1 = 0;
      if ((param_5 & 1) == 0) {
        lVar1 = 4;
      }
      *(uint *)((long)param_2 + lVar1) = *(uint *)((long)param_2 + lVar1) | 3;
      return;
    }
  }
  else if ((param_3 == 0x36d) || (param_3 == 0x3c4)) goto LAB__text__002d1208;
  return;
}


