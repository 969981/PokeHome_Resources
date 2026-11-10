/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005dd81c; name: FUN_.text__005dd81c
 */


void FUN__text__005dd81c(undefined8 *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  FUN__text__005e8634();
  *param_1 = 0x897378;
  param_1[9] = 0x8973f0;
  param_1[0xb] = 0x897420;
  uVar1 = tpidr_el0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  uVar1 = uVar1 & 0xffffffffffffe000;
  if (uVar1 == 0) {
    uVar3 = FUN__text__005f52b0();
    param_1[0x72] = 0;
    param_1[0x71] = uVar3;
    *(undefined4 *)(param_1 + 0x73) = 0;
    param_1[0x74] = 0;
    param_1[0x75] = 0;
    param_1[0x76] = 0;
  }
  else {
    if ((*(long *)(uVar1 + 0x98) == 0) ||
       (lVar2 = *(long *)((uVar1 | 0x18) + *(long *)(uVar1 + 0x98) * 8 + -8), lVar2 == 0)) {
      lVar2 = FUN__text__005f52b0();
    }
    param_1[0x71] = lVar2;
    param_1[0x72] = 0;
    *(undefined4 *)(param_1 + 0x73) = 0;
    param_1[0x74] = 0;
    param_1[0x75] = 0;
    param_1[0x76] = 0;
    if ((*(long *)(uVar1 + 0x98) != 0) &&
       (lVar2 = *(long *)((uVar1 | 0x18) + *(long *)(uVar1 + 0x98) * 8 + -8), lVar2 != 0))
    goto LAB__text__005dd8d8;
  }
  lVar2 = FUN__text__005f52b0();
LAB__text__005dd8d8:
  param_1[0x77] = lVar2;
  param_1[0x78] = 0;
  *(undefined4 *)(param_1 + 0x79) = 0;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x7a),false,0);
  nn::os::InitializeConditionVariable((ConditionVariableType *)(param_1 + 0x7e));
  param_1[0x7f] = 0;
  return;
}


