/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002a7cd4; name: FUN_.text__002a7cd4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__002a7cd4(long *param_1,long param_2)

{
  byte bVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  byte *pbVar8;
  
  plVar4 = _DAT_0089f970;
  if (*(long *)(param_2 + 8) != 0) {
    FUN__text__005dc7fc();
    return;
  }
  if (((*_DAT_0089f968 & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(_DAT_0089f968), plVar2 = _DAT_0089f758, iVar5 != 0)) {
    if (((*_DAT_0089f750 & 1) == 0) && (iVar5 = __cxa_guard_acquire(_DAT_0089f750), iVar5 != 0)) {
      plVar2[7] = 0;
      lVar6 = _DAT_0089f690;
      *(undefined4 *)(plVar2 + 8) = 0;
      uVar7 = tpidr_el0;
      uVar7 = uVar7 & 0xffffffffffffe000;
      plVar2[2] = 0;
      plVar2[3] = 0;
      plVar2[4] = 0;
      plVar2[5] = 0;
      *(undefined4 *)(plVar2 + 6) = 0;
      *plVar2 = lVar6 + 0x10;
      if (uVar7 == 0) {
        lVar6 = 0;
      }
      else {
        lVar6 = 0;
        if (*(long *)(uVar7 + 0x98) != 0) {
          lVar6 = *(long *)(uVar7 + *(long *)(uVar7 + 0x98) * 8 + 0x10);
        }
      }
      *(undefined4 *)(plVar2 + 10) = 0;
      lVar3 = _DAT_0089f760;
      plVar2[0xd] = 0;
      uVar7 = 0xcbf29ce484222645;
      *plVar2 = lVar3 + 0x10;
      plVar2[1] = lVar6;
      plVar2[9] = lVar3 + 0x48;
      pbVar8 = (byte *)*_DAT_0089f768;
      plVar2[0xb] = -0x340d631b7bddd9bb;
      plVar2[0xc] = (long)pbVar8;
      bVar1 = *pbVar8;
      while (bVar1 != 0) {
        pbVar8 = pbVar8 + 1;
        uVar7 = (uVar7 ^ bVar1) * 0x100000001b3;
        bVar1 = *pbVar8;
      }
      plVar2[0xb] = uVar7;
      plVar2[0xd] = 0;
      plVar2[1] = 0;
      plVar2[2] = (long)plVar2;
      __cxa_guard_release(_DAT_0089f750);
    }
    *plVar4 = (long)plVar2;
    (**(code **)(plVar2[9] + 0x10))(plVar2 + 9);
    FUN__text__001001d0(_DAT_0089f960,plVar4,&__DT_FINI_ARRAY);
    __cxa_guard_release(_DAT_0089f968);
  }
  lVar6 = *plVar4;
  *param_1 = lVar6;
  if (lVar6 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x002a7d34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  return;
}


