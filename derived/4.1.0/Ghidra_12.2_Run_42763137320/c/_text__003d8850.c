/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003d8850; name: FUN_.text__003d8850
 */


undefined8 FUN__text__003d8850(long param_1,undefined4 *param_2,void *param_3,ulong param_4)

{
  ulong uVar1;
  long lVar2;
  ulong __n;
  long lVar3;
  ulong uVar4;
  
  uVar4 = FUN__text__003e2e70(param_3,0x70f866,param_4 - (long)param_3);
  uVar1 = param_4;
  if (uVar4 != 0) {
    uVar1 = uVar4;
  }
  __n = *(ulong *)(param_1 + 0x10);
  uVar4 = __n;
  if (uVar1 <= (long)param_3 + __n) {
    uVar4 = uVar1 - (long)param_3;
  }
  if (__n < uVar4) {
    memset(*(void **)(param_1 + 8),0,__n);
  }
  else {
    memcpy(*(void **)(param_1 + 8),param_3,uVar4);
  }
  lVar2 = *(long *)(param_1 + 8);
  lVar3 = *(long *)(param_1 + 0x10);
  *param_2 = 0;
  lVar3 = lVar3 - uVar4;
  *(ulong *)(param_1 + 8) = lVar2 + uVar4;
  *(long *)(param_1 + 0x10) = lVar3;
  *(ulong *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + uVar4;
  lVar2 = (long)param_3 + uVar4;
  if (lVar3 != 0 && uVar1 == param_4) {
    lVar2 = 0;
  }
  *(undefined8 *)(param_2 + 2) = 0;
  *(long *)(param_2 + 4) = lVar2;
  return 0;
}


