/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003c6c20; name: FUN_.text__003c6c20
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__003c6c20(long *param_1,long *param_2)

{
  ulong uVar1;
  void *__dest;
  long lVar2;
  void *__src;
  long lVar3;
  undefined4 local_4c;
  long local_48;
  
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  lVar3 = _DAT_0089f690;
  uVar1 = tpidr_el0;
  uVar1 = uVar1 & 0xffffffffffffe000;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = lVar3 + 0x10;
  if (uVar1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = 0;
    if (*(long *)(uVar1 + 0x98) != 0) {
      lVar3 = *(long *)(uVar1 + *(long *)(uVar1 + 0x98) * 8 + 0x10);
    }
  }
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xc] = (long)param_2;
  lVar2 = _DAT_008a36a8;
  param_1[0xd] = 0xaaaaaaaaaaaaaaa;
  param_1[0x12] = 0;
  *param_1 = lVar2 + 0x10;
  param_1[1] = lVar3;
  param_1[9] = lVar2 + 0x48;
  FUN__text__003c6f50(param_1 + 0x14,0x20);
  param_1[0x26] = 0;
  param_1[0x20] = (long)param_2;
  param_1[0x21] = 0xfffffffffffffff;
  FUN__text__003c7130(param_1 + 0x28,0x20,param_1 + 0x20);
  param_1[0x34] = (long)param_2;
  param_1[0x35] = 0xfffffffffffffff;
  param_1[0x3a] = 0;
  param_1[0x42] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x3c] = (long)param_2;
  param_1[0x3d] = 0xfffffffffffffff;
  __dest = (void *)(**(code **)(*param_2 + 0x10))(param_2,0x1000,8);
  __src = (void *)param_1[0x44];
  if (((__src == (void *)0x0) || (__dest == (void *)0x0)) || (param_1[0x45] == 0)) {
    if (__src == (void *)0x0) goto LAB__text__003c6d60;
  }
  else {
    memmove(__dest,__src,param_1[0x45] << 4);
    __src = (void *)param_1[0x44];
  }
  (**(code **)(*(long *)param_1[0x3c] + 0x18))((long *)param_1[0x3c],__src,param_1[0x46] << 4,8);
LAB__text__003c6d60:
  param_1[0x44] = (long)__dest;
  param_1[0x46] = 0x100;
  param_1[0x48] = (long)param_2;
  param_1[0x49] = 0xaaaaaaaaaaaaaaa;
  param_1[0x4e] = 0;
  FUN__text__003c72f0(param_1 + 0x50,0x80,param_1 + 0x48);
  param_1[0x5e] = 0;
  param_1[0x5d] = 0;
  param_1[0x5c] = 0;
  lVar3 = 0;
  do {
    lVar2 = lVar3 + 0x40;
    *(undefined8 *)((long)param_1 + lVar3 + 0x300) = 0;
    *(undefined8 *)((long)param_1 + lVar3 + 0x310) = 0;
    *(undefined8 *)((long)param_1 + lVar3 + 800) = 0;
    *(undefined8 *)((long)param_1 + lVar3 + 0x330) = 0;
    lVar3 = lVar2;
  } while (lVar2 != 0x1000);
  if (*(long *)(uVar1 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(long **)(uVar1 + *(long *)(uVar1 + 0x98) * 8 + 0x18) = param_2;
  *(long *)(uVar1 + 0x98) = *(long *)(uVar1 + 0x98) + 1;
  lVar3 = (**(code **)(*param_2 + 0x10))(param_2,0x250,0x10);
  if (lVar3 == 0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  FUN__text__00163a24(lVar3,0x12,0x40,param_2);
  *(long **)(lVar3 + 8) = param_2;
  *(long *)(lVar3 + 0x10) = lVar3;
  *(undefined8 *)(lVar3 + 0x18) = 0x250;
  *(undefined8 *)(lVar3 + 0x20) = 0x10;
  *(long *)(uVar1 + 0x98) = *(long *)(uVar1 + 0x98) + -1;
  (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  if (param_1[0x5c] != 0) {
    (**(code **)(*(long *)(param_1[0x5c] + 0x48) + 0x18))();
  }
  param_1[0x5c] = lVar3;
  local_4c = 0x400;
  FUN__text__00111970(&local_48,param_2,&local_4c);
  if (param_1[0x5d] != 0) {
    (**(code **)(*(long *)(param_1[0x5d] + 0x48) + 0x18))();
  }
  local_4c = 0x400;
  param_1[0x5d] = local_48;
  FUN__text__00111970(&local_48,param_2,&local_4c);
  if (param_1[0x5e] != 0) {
    (**(code **)(*(long *)(param_1[0x5e] + 0x48) + 0x18))();
  }
  param_1[0x5e] = local_48;
  *(undefined4 *)(param_1 + 0x5f) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0x2fc) = 1;
  lVar3 = 0;
  do {
    FUN__text__0015a9d0(&local_48,param_2);
    lVar2 = *(long *)((long)param_1 + lVar3 + 0x300);
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
    lVar2 = lVar3 + 0x10;
    *(undefined8 *)((long)param_1 + lVar3 + 0x308) = 0;
    *(long *)((long)param_1 + lVar3 + 0x300) = local_48;
    lVar3 = lVar2;
  } while (lVar2 != 0x1000);
  return;
}


