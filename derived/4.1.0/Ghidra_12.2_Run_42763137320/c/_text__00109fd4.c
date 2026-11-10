/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00109fd4; name: FUN_.text__00109fd4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00109fd4(long *param_1,char *param_2)

{
  byte bVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  byte *pbVar7;
  long local_28;
  
  *param_1 = 0;
  plVar2 = _DAT_0089f758;
  if (*param_2 == '\0') {
    if (((*_DAT_0089f750 & 1) == 0) && (iVar4 = __cxa_guard_acquire(_DAT_0089f750), iVar4 != 0)) {
      plVar2[7] = 0;
      lVar5 = _DAT_0089f690;
      *(undefined4 *)(plVar2 + 8) = 0;
      uVar6 = tpidr_el0;
      uVar6 = uVar6 & 0xffffffffffffe000;
      plVar2[2] = 0;
      plVar2[3] = 0;
      plVar2[4] = 0;
      plVar2[5] = 0;
      *(undefined4 *)(plVar2 + 6) = 0;
      *plVar2 = lVar5 + 0x10;
      if (uVar6 == 0) {
        lVar5 = 0;
      }
      else {
        lVar5 = 0;
        if (*(long *)(uVar6 + 0x98) != 0) {
          lVar5 = *(long *)(uVar6 + *(long *)(uVar6 + 0x98) * 8 + 0x10);
        }
      }
      *(undefined4 *)(plVar2 + 10) = 0;
      lVar3 = _DAT_0089f760;
      plVar2[0xd] = 0;
      uVar6 = 0xcbf29ce484222645;
      *plVar2 = lVar3 + 0x10;
      plVar2[1] = lVar5;
      plVar2[9] = lVar3 + 0x48;
      pbVar7 = (byte *)*_DAT_0089f768;
      plVar2[0xb] = -0x340d631b7bddd9bb;
      plVar2[0xc] = (long)pbVar7;
      bVar1 = *pbVar7;
      while (bVar1 != 0) {
        pbVar7 = pbVar7 + 1;
        uVar6 = (uVar6 ^ bVar1) * 0x100000001b3;
        bVar1 = *pbVar7;
      }
      plVar2[0xb] = uVar6;
      plVar2[0xd] = 0;
      plVar2[1] = 0;
      plVar2[2] = (long)plVar2;
      __cxa_guard_release(_DAT_0089f750);
    }
    (**(code **)(plVar2[9] + 0x10))();
    lVar5 = *param_1;
    *param_1 = (long)plVar2;
    if (lVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0010a07c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
      return;
    }
  }
  else {
    FUN__text__005e9510(&local_28,*_DAT_0089f3e0);
    if (*param_1 != 0) {
      (**(code **)(*(long *)(*param_1 + 0x48) + 0x18))();
    }
    *param_1 = local_28;
  }
  return;
}


