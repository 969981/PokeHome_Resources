/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003d2bb0; name: FUN_.text__003d2bb0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__003d2bb0(long *param_1,long param_2,int param_3)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long *__s;
  
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  lVar4 = _DAT_0089f690;
  uVar2 = tpidr_el0;
  uVar2 = uVar2 & 0xffffffffffffe000;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = lVar4 + 0x10;
  lVar4 = _DAT_008a3740;
  if (uVar2 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = 0;
    if (*(long *)(uVar2 + 0x98) != 0) {
      lVar3 = *(long *)(uVar2 + *(long *)(uVar2 + 0x98) * 8 + 0x10);
    }
  }
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x11] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[9] = lVar4 + 0x48;
  *param_1 = lVar4 + 0x10;
  param_1[1] = lVar3;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  lVar4 = _DAT_0089f6e0 + 0x10;
  param_1[0xb] = param_2;
  param_1[0xc] = lVar4;
  FUN__text__00155348(param_1 + 0x2e);
  plVar5 = (long *)param_1[0xb];
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  *(int *)(param_1 + 0x34) = param_3;
  plVar1 = (long *)(**(code **)(*plVar5 + 0x10))(plVar5,(long)param_3 * 0x660,0x10);
  if (*(long *)(uVar2 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(long **)(uVar2 + *(long *)(uVar2 + 0x98) * 8 + 0x18) = plVar5;
  lVar4 = *(long *)(uVar2 + 0x98);
  *(long *)(uVar2 + 0x98) = lVar4 + 1;
  if (param_3 != 0) {
    lVar3 = (long)param_3;
    lVar4 = _DAT_008a3748 + 0x10;
    __s = plVar1;
    do {
      memset(__s,0,0x660);
      FUN__text__003d0f70(__s);
      *__s = lVar4;
      lVar3 = lVar3 + -1;
      __s = __s + 0xcc;
    } while (lVar3 != 0);
    lVar4 = *(long *)(uVar2 + 0x98) + -1;
  }
  *(long *)(uVar2 + 0x98) = lVar4;
  puVar6 = (undefined8 *)param_1[0x30];
  param_1[0x30] = (long)plVar1;
  if (puVar6 != (undefined8 *)0x0) {
    uVar2 = param_1[0x32];
    if (0x65f < uVar2) {
      uVar2 = uVar2 / 0x660;
      puVar7 = puVar6;
      do {
        (**(code **)*puVar7)(puVar7);
        uVar2 = uVar2 - 1;
        puVar7 = puVar7 + 0xcc;
      } while (uVar2 != 0);
      uVar2 = param_1[0x32];
    }
    (**(code **)(*(long *)param_1[0x31] + 0x18))((long *)param_1[0x31],puVar6,uVar2,param_1[0x33]);
  }
  param_1[0x31] = (long)plVar5;
  param_1[0x32] = (long)param_3 * 0x660;
  param_1[0x33] = 0x10;
  return;
}


