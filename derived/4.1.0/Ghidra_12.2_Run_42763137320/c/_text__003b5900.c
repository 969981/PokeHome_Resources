/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003b5900; name: FUN_.text__003b5900
 */


void FUN__text__003b5900(long *param_1,long *param_2,int *param_3,undefined8 *param_4)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  void *__dest;
  void *__src;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  
  puVar2 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x60,0x10);
  uVar7 = tpidr_el0;
  uVar7 = uVar7 & 0xffffffffffffe000;
  if (*(long *)(uVar7 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(long **)(uVar7 + *(long *)(uVar7 + 0x98) * 8 + 0x18) = param_2;
  *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + 1;
  iVar1 = *param_3;
  uVar6 = (ulong)iVar1;
  *puVar2 = *param_4;
  puVar2[1] = param_4[1];
  plVar3 = (long *)param_4[6];
  if (plVar3 == (long *)0x0) {
    puVar2[6] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[10] = 0;
  }
  else if (plVar3 == param_4 + 2) {
    puVar2[6] = puVar2 + 2;
    (**(code **)(*(long *)param_4[6] + 0x18))();
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[10] = 0;
  }
  else {
    uVar4 = (**(code **)(*plVar3 + 0x10))();
    puVar2[6] = uVar4;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[10] = 0;
  }
  if (iVar1 == 0) goto LAB__text__003b5a68;
  if ((ulong)puVar2[1] < uVar6) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  __dest = (void *)(**(code **)(*(long *)*puVar2 + 0x10))((long *)*puVar2,uVar6 << 4,8);
  __src = (void *)puVar2[8];
  if ((__src == (void *)0x0) || (__dest == (void *)0x0 || puVar2[9] == 0)) {
    if (__src != (void *)0x0) goto LAB__text__003b5a44;
  }
  else {
    memmove(__dest,__src,puVar2[9] << 4);
    __src = (void *)puVar2[8];
LAB__text__003b5a44:
    (**(code **)(*(long *)*puVar2 + 0x18))((long *)*puVar2,__src,puVar2[10] << 4,8);
  }
  puVar2[8] = __dest;
  puVar2[10] = uVar6;
LAB__text__003b5a68:
  param_1[2] = 0x60;
  param_1[3] = 0x10;
  lVar5 = *(long *)(uVar7 + 0x98);
  *param_1 = (long)puVar2;
  param_1[1] = (long)param_2;
  *(long *)(uVar7 + 0x98) = lVar5 + -1;
  return;
}


