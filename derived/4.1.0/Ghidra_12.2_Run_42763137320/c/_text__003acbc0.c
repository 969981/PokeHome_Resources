/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003acbc0; name: FUN_.text__003acbc0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__003acbc0(undefined8 *param_1,long *param_2,uint *param_3,long *param_4)

{
  uint uVar1;
  long *plVar2;
  void *__dest;
  void *__src;
  long lVar3;
  ulong uVar4;
  
  plVar2 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0xc0,0x10);
  uVar4 = tpidr_el0;
  uVar4 = uVar4 & 0xffffffffffffe000;
  if (*(long *)(uVar4 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(long **)(uVar4 + *(long *)(uVar4 + 0x98) * 8 + 0x18) = param_2;
  *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + 1;
  param_4 = (long *)*param_4;
  uVar1 = *param_3;
  plVar2[4] = (long)param_4;
  plVar2[5] = 0x555555555555555;
  lVar3 = _DAT_008a3588;
  plVar2[0xc] = (long)param_4;
  plVar2[0xd] = 0x555555555555555;
  plVar2[10] = 0;
  plVar2[0x14] = 0;
  plVar2[2] = 0;
  plVar2[3] = 0;
  plVar2[0x12] = 0;
  plVar2[0x15] = 0;
  plVar2[0x16] = 0;
  *plVar2 = lVar3 + 0x10;
  plVar2[1] = 0;
  if (uVar1 == 0) goto LAB__text__003accd8;
  __dest = (void *)(**(code **)(*param_4 + 0x10))(param_4,(ulong)uVar1 * 0x30,0x10);
  __src = (void *)plVar2[0x14];
  if (((__src == (void *)0x0) || (__dest == (void *)0x0)) || (plVar2[0x15] == 0)) {
    if (__src != (void *)0x0) goto LAB__text__003accb0;
  }
  else {
    memmove(__dest,__src,plVar2[0x15] * 0x30);
    __src = (void *)plVar2[0x14];
LAB__text__003accb0:
    (**(code **)(*(long *)plVar2[0xc] + 0x18))((long *)plVar2[0xc],__src,plVar2[0x16] * 0x30,0x10);
  }
  plVar2[0x14] = (long)__dest;
  plVar2[0x16] = (ulong)uVar1;
LAB__text__003accd8:
  param_1[2] = 0xc0;
  param_1[3] = 0x10;
  lVar3 = *(long *)(uVar4 + 0x98);
  *param_1 = plVar2;
  param_1[1] = param_2;
  *(long *)(uVar4 + 0x98) = lVar3 + -1;
  return;
}


