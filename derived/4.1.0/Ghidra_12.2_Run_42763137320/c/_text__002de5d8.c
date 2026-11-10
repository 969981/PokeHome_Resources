/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002de5d8; name: FUN_.text__002de5d8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__002de5d8(undefined8 *param_1)

{
  undefined8 *puVar1;
  byte bVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  byte *pbVar10;
  
  plVar5 = _DAT_0089f970;
  if (((*_DAT_0089f968 & 1) == 0) &&
     (iVar6 = __cxa_guard_acquire(_DAT_0089f968), plVar3 = _DAT_0089f758, iVar6 != 0)) {
    if (((*_DAT_0089f750 & 1) == 0) && (iVar6 = __cxa_guard_acquire(_DAT_0089f750), iVar6 != 0)) {
      plVar3[7] = 0;
      lVar9 = _DAT_0089f690;
      *(undefined4 *)(plVar3 + 8) = 0;
      uVar8 = tpidr_el0;
      uVar8 = uVar8 & 0xffffffffffffe000;
      plVar3[2] = 0;
      plVar3[3] = 0;
      plVar3[4] = 0;
      plVar3[5] = 0;
      *(undefined4 *)(plVar3 + 6) = 0;
      *plVar3 = lVar9 + 0x10;
      if (uVar8 == 0) {
        lVar9 = 0;
      }
      else {
        lVar9 = 0;
        if (*(long *)(uVar8 + 0x98) != 0) {
          lVar9 = *(long *)(uVar8 + *(long *)(uVar8 + 0x98) * 8 + 0x10);
        }
      }
      *(undefined4 *)(plVar3 + 10) = 0;
      lVar4 = _DAT_0089f760;
      plVar3[0xd] = 0;
      uVar8 = 0xcbf29ce484222645;
      *plVar3 = lVar4 + 0x10;
      plVar3[1] = lVar9;
      plVar3[9] = lVar4 + 0x48;
      pbVar10 = (byte *)*_DAT_0089f768;
      plVar3[0xb] = -0x340d631b7bddd9bb;
      plVar3[0xc] = (long)pbVar10;
      bVar2 = *pbVar10;
      while (bVar2 != 0) {
        pbVar10 = pbVar10 + 1;
        uVar8 = (uVar8 ^ bVar2) * 0x100000001b3;
        bVar2 = *pbVar10;
      }
      plVar3[0xb] = uVar8;
      plVar3[0xd] = 0;
      plVar3[1] = 0;
      plVar3[2] = (long)plVar3;
      __cxa_guard_release(_DAT_0089f750);
    }
    *plVar5 = (long)plVar3;
    (**(code **)(plVar3[9] + 0x10))(plVar3 + 9);
    FUN__text__001001d0(_DAT_0089f960,plVar5,&__DT_FINI_ARRAY);
    __cxa_guard_release(_DAT_0089f968);
  }
  puVar1 = _DAT_0089f5c8;
  if (*plVar5 != 0) {
    puVar1 = (undefined8 *)(*plVar5 + 0x58);
  }
  uVar7 = *puVar1;
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = uVar7;
  return;
}


