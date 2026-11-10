/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0016a750; name: FUN_.text__0016a750
 */


/* WARNING: Removing unreachable block (ram,0x0016a930) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0016a750(long *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 local_8;
  
  param_1[7] = 0;
  lVar7 = _DAT_0089f690;
  *(undefined4 *)(param_1 + 8) = 0;
  uVar6 = tpidr_el0;
  uVar6 = uVar6 & 0xffffffffffffe000;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *param_1 = lVar7 + 0x10;
  lVar7 = 0;
  if (uVar6 != 0) {
    if (*(long *)(uVar6 + 0x98) == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = *(long *)(uVar6 + *(long *)(uVar6 + 0x98) * 8 + 0x10);
    }
  }
  *_DAT_008a0498 = 1;
  *param_1 = 0x86b640;
  param_1[1] = lVar7;
  param_1[9] = 0x86b670;
  local_8 = 0x616a;
  uVar6 = nn::oe::GetDesiredLanguage();
  uVar5 = (uint)uVar6;
  uVar1 = uVar5 & 0xff;
  if (((uVar6 & 0xff) != 0) && (uVar2 = uVar5 >> 8 & 0xff, uVar2 != 0)) {
    uVar5 = uVar5 >> 0x10 & 0xff;
    if (uVar5 == 0) {
      if (uVar1 - 100 < 7) {
                    /* WARNING: Could not emulate address calculation at 0x0016a8b8 */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&UNK__text__0016a8c8 + (ulong)*(byte *)((ulong)(uVar1 - 100) + 0x7252cf) * 4))();
        return;
      }
      if ((uVar1 == 0x69) && (uVar2 == 0x74)) {
        puVar8 = (undefined8 *)&DAT_00725310;
LAB__text__0016a938:
        local_8 = *puVar8;
      }
      else if (uVar1 - 0x6b < 8) {
                    /* WARNING: Could not emulate address calculation at 0x0016a9a8 */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ulong)*(byte *)((ulong)(uVar1 - 0x6b) + 0x7252d6) * 4 + 0x16a940))();
        return;
      }
    }
    else if ((uVar6 >> 0x18 & 0xff) != 0) {
      uVar3 = (uint)(uVar6 >> 0x20);
      if ((uVar6 >> 0x20 & 0xff) != 0) {
        lVar7 = 0;
        do {
          if (((((*(byte *)(lVar7 + 0x7252f0) == uVar1) &&
                (puVar8 = (undefined8 *)(lVar7 + 0x7252f0), *(byte *)(lVar7 + 0x7252f1) == uVar2))
               && (*(byte *)(lVar7 + 0x7252f2) == uVar5)) &&
              (((uint)*(byte *)(lVar7 + 0x7252f3) == ((uint)(uVar6 >> 0x18) & 0xff) &&
               ((uint)*(byte *)(lVar7 + 0x7252f4) == (uVar3 & 0xff))))) &&
             (((uint)*(byte *)(lVar7 + 0x7252f5) == (uVar3 >> 8 & 0xff) &&
              (((uVar6 >> 0x28 & 0xff) == 0 ||
               ((ushort)*(byte *)(lVar7 + 0x7252f6) == ((ushort)(uVar6 >> 0x30) & 0xff) &&
                (uVar6 >> 0x38 == 0 || (uVar6 >> 0x30 & 0xff) == 0))))))) goto LAB__text__0016a938;
          lVar7 = lVar7 + 8;
        } while (lVar7 != 0x78);
      }
    }
  }
  cVar4 = FUN__text__0016aac0(&local_8);
  *(char *)(param_1 + 10) = cVar4;
  if (((uint)((long)cVar4 + -1) & 0xff) < 0xb) {
    FUN__text__0015b020(*(undefined4 *)(((long)cVar4 + -1) * 4 + 0x7253f8));
    return;
  }
  FUN__text__0015b020(2);
  return;
}


