/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005dd364; name: FUN_.text__005dd364
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005dd364(long param_1,uint param_2,undefined8 param_3,undefined8 *param_4,
                        undefined8 *param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  byte bVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  byte *pbVar9;
  ulong local_68;
  char acStack_60 [16];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  long local_18;
  
  *(undefined8 *)(param_1 + 8) = param_3;
  *(uint *)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x18) = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0x20) = 0x70f683;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = *param_4;
  uVar2 = param_5[1];
  *(undefined8 *)(param_1 + 0x40) = *param_5;
  *(undefined8 *)(param_1 + 0x48) = uVar2;
  if (param_2 != 0xffffffff) {
    snprintf(acStack_60,0x10,(char *)0x71349f,(ulong)param_2);
    FUN__text__00109fd4(&local_18,acStack_60);
    FUN__text__005e9290(&local_50,&local_18);
    *(undefined8 *)(param_1 + 0x18) = local_50;
    *(undefined8 *)(param_1 + 0x20) = uStack_48;
    *(undefined8 *)(param_1 + 0x28) = local_40;
    if (*(long *)(param_1 + 0x30) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x30) + 0x48) + 0x18))();
    }
    uVar2 = local_38;
    local_38 = 0;
    *(undefined8 *)(param_1 + 0x30) = uVar2;
    if (local_18 != 0) {
      (**(code **)(*(long *)(local_18 + 0x48) + 0x18))();
    }
    return;
  }
  if ((*_DAT_0089f968 & 1) == 0) {
    iVar7 = __cxa_guard_acquire(_DAT_0089f968);
    puVar6 = _DAT_0089f970;
    plVar4 = _DAT_0089f758;
    if (iVar7 != 0) {
      local_68 = 0xcbf29ce484222645;
      if (((*_DAT_0089f750 & 1) == 0) && (iVar7 = __cxa_guard_acquire(_DAT_0089f750), iVar7 != 0)) {
        plVar4[7] = 0;
        lVar8 = _DAT_0089f690;
        *(undefined4 *)(plVar4 + 8) = 0;
        uVar1 = tpidr_el0;
        uVar1 = uVar1 & 0xffffffffffffe000;
        plVar4[2] = 0;
        plVar4[3] = 0;
        plVar4[4] = 0;
        plVar4[5] = 0;
        *(undefined4 *)(plVar4 + 6) = 0;
        *plVar4 = lVar8 + 0x10;
        lVar8 = 0;
        if (uVar1 != 0) {
          if (*(long *)(uVar1 + 0x98) == 0) {
            lVar8 = 0;
          }
          else {
            lVar8 = *(long *)(uVar1 + *(long *)(uVar1 + 0x98) * 8 + 0x10);
          }
        }
        *(undefined4 *)(plVar4 + 10) = 0;
        lVar5 = _DAT_0089f760;
        plVar4[0xd] = 0;
        *plVar4 = lVar5 + 0x10;
        plVar4[1] = lVar8;
        plVar4[9] = lVar5 + 0x48;
        pbVar9 = (byte *)*_DAT_0089f768;
        plVar4[0xb] = -0x340d631b7bddd9bb;
        plVar4[0xc] = (long)pbVar9;
        bVar3 = *pbVar9;
        if (bVar3 != 0) {
          do {
            pbVar9 = pbVar9 + 1;
            local_68 = (local_68 ^ bVar3) * 0x100000001b3;
            bVar3 = *pbVar9;
          } while (bVar3 != 0);
        }
        plVar4[0xd] = 0;
        plVar4[1] = 0;
        plVar4[2] = (long)plVar4;
        plVar4[0xb] = local_68;
        __cxa_guard_release(_DAT_0089f750);
      }
      *puVar6 = plVar4;
      (**(code **)(plVar4[9] + 0x10))(plVar4 + 9);
      FUN__text__001001d0(_DAT_0089f960,puVar6,&__DT_FINI_ARRAY);
      __cxa_guard_release(_DAT_0089f968);
    }
  }
  FUN__text__005e9290(&local_50,_DAT_0089f970);
  *(undefined8 *)(param_1 + 0x18) = local_50;
  *(undefined8 *)(param_1 + 0x20) = uStack_48;
  *(undefined8 *)(param_1 + 0x28) = local_40;
  if (*(long *)(param_1 + 0x30) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x30) + 0x48) + 0x18))();
  }
  *(undefined8 *)(param_1 + 0x30) = local_38;
  return;
}


