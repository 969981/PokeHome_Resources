/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0019aa9c; name: FUN_.text__0019aa9c
 */


void FUN__text__0019aa9c(undefined8 *param_1)

{
  void *__dest;
  void *__src;
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1[10];
  if (uVar1 == 0) {
    return;
  }
  uVar2 = param_1[9];
  if (uVar2 == 0) {
    if (param_1[8] != 0) {
      (**(code **)(*(long *)*param_1 + 0x18))((long *)*param_1,param_1[8],uVar1 * 0x1c,4);
    }
    uVar2 = 0;
    param_1[8] = 0;
    goto LAB__text__0019ab70;
  }
  if (uVar1 <= uVar2) {
    return;
  }
  if ((ulong)param_1[1] < uVar2) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  __dest = (void *)(**(code **)(*(long *)*param_1 + 0x10))((long *)*param_1,uVar2 * 0x1c,4);
  __src = (void *)param_1[8];
  if (((__src == (void *)0x0) || (__dest == (void *)0x0)) || (param_1[9] == 0)) {
    if (__src != (void *)0x0) goto LAB__text__0019ab1c;
  }
  else {
    memmove(__dest,__src,param_1[9] * 0x1c);
    __src = (void *)param_1[8];
LAB__text__0019ab1c:
    (**(code **)(*(long *)*param_1 + 0x18))((long *)*param_1,__src,param_1[10] * 0x1c,4);
  }
  param_1[8] = __dest;
LAB__text__0019ab70:
  param_1[10] = uVar2;
  return;
}


