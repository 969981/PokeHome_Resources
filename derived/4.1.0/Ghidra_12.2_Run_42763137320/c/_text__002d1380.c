/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002d1380; name: FUN_.text__002d1380
 */


void FUN__text__002d1380(undefined8 param_1,long param_2,uint param_3,ushort param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  byte local_34 [4];
  
  uVar7 = param_3 & 0xffff;
  if ((uVar7 != 0x29e) || (param_4 == 5)) {
    if (uVar7 == 0x321) {
      if (param_4 == 0) {
        uVar7 = 4;
      }
      else {
        if (param_4 != 1) {
          return;
        }
        uVar7 = 8;
      }
    }
    else if (uVar7 == 0x3d2) {
      if (2 < param_4) {
        return;
      }
      uVar7 = *(uint *)((long)(short)param_4 * 4 + 0x7338d8);
    }
    else {
      uVar7 = param_3 & 0xffff;
      local_34[0] = 0;
      local_88 = 0;
      local_60 = 0;
      uStack_58 = 0;
      local_70 = 0;
      uStack_68 = 0;
      local_80 = 0;
      uStack_78 = 0;
      uVar6 = FUN__text__005ffbe4(&local_88,local_34,uVar7,7);
      uVar5 = (uint)local_34[0];
      if (uVar5 != 0) {
        uVar8 = 0;
        do {
          uVar6 = FUN__text__006006a0(uVar7,uVar8);
          if ((uVar6 & 1) != 0) {
            if ((uVar8 & 0xffff) != 0) {
              *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) | 1 << (ulong)(uVar8 & 0x1f);
            }
            break;
          }
          uVar8 = uVar8 + 1;
        } while (uVar5 != uVar8);
      }
      uVar5 = FUN__text__002d1740(uVar6,param_3);
      if ((uVar5 & 0xffff) != 0) {
        *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) | 1 << (ulong)(uVar5 & 0x1f);
      }
      if (((param_3 & 0xffff) == 0x292) && (param_4 < 2)) {
        uVar7 = 3;
      }
      else {
        if ((param_3 & 0xfffe) == 0x298) {
          local_34[0] = 0;
          local_88 = 0;
          local_60 = 0;
          uStack_58 = 0;
          local_70 = 0;
          uStack_68 = 0;
          local_80 = 0;
          uStack_78 = 0;
          FUN__text__005ffbe4(&local_88,local_34,uVar7,7);
          if (local_34[0] != 0) {
            uVar5 = *(uint *)(param_2 + 0xc);
            uVar7 = local_34[0] & 3;
            if (local_34[0] < 4) {
              uVar8 = 0;
            }
            else {
              uVar8 = 0;
              do {
                uVar3 = uVar8 & 0x1f;
                uVar4 = uVar8 + 2;
                uVar1 = uVar8 + 1;
                uVar2 = uVar8 + 3;
                uVar8 = uVar8 + 4;
                uVar5 = uVar5 | 1 << (ulong)uVar3 |
                        1 << (ulong)(uVar1 & 0x1f) | 1 << (ulong)(uVar4 & 0x1f) |
                        1 << (ulong)(uVar2 & 0x1f);
              } while (uVar8 != (local_34[0] & 0xfc));
            }
            if ((local_34[0] & 3) != 0) {
              do {
                uVar4 = uVar8 & 0x1f;
                uVar8 = uVar8 + 1;
                uVar7 = uVar7 - 1;
                uVar5 = uVar5 | 1 << (ulong)uVar4;
              } while (uVar7 != 0);
            }
            *(uint *)(param_2 + 0xc) = uVar5;
          }
        }
        param_3 = param_3 & 0xffff;
        uVar7 = 3;
        if (param_3 < 0x2ce) {
          if (param_3 - 0x287 < 0x23) {
                    /* WARNING: Could not emulate address calculation at 0x002d15b0 */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)(&UNK__text__002d15bc +
                      (ulong)*(byte *)((ulong)(param_3 - 0x287) + 0x733863) * 4))();
            return;
          }
          if (param_3 != 0x1df) {
            return;
          }
          uVar7 = 0x3f;
        }
        else if (param_3 < 0x30a) {
          if (param_3 == 0x2ce) {
            uVar7 = 0x1f;
          }
          else if (param_3 != 0x2d0) {
            return;
          }
        }
        else {
          if ((param_3 != 0x30a) && (param_3 != 0x36d)) {
            return;
          }
          if ((param_5 & 1) == 0) {
            return;
          }
        }
      }
    }
    *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) | uVar7;
  }
  return;
}


