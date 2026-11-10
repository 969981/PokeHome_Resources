/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00270e20; name: FUN_.text__00270e20
 */


void FUN__text__00270e20(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  
  plVar1 = param_1 + 0x12;
  if (param_1[0x13] != 0) {
    plVar1 = (long *)0x0;
  }
  plVar2 = param_1 + 0x16;
  if (param_1[0x17] != 0) {
    plVar2 = plVar1;
  }
  plVar1 = param_1 + 0x1a;
  if (param_1[0x1b] != 0) {
    plVar1 = plVar2;
  }
  plVar2 = param_1 + 0x1e;
  if (param_1[0x1f] != 0) {
    plVar2 = plVar1;
  }
  plVar1 = param_1 + 0x22;
  if (param_1[0x23] != 0) {
    plVar1 = plVar2;
  }
  plVar2 = param_1 + 0x26;
  if (param_1[0x27] != 0) {
    plVar2 = plVar1;
  }
  plVar1 = param_1 + 0x2a;
  if (param_1[0x2b] != 0) {
    plVar1 = plVar2;
  }
  plVar2 = param_1 + 0x2e;
  if (param_1[0x2f] != 0) {
    plVar2 = plVar1;
  }
  plVar1 = param_1 + 0x32;
  if (param_1[0x33] != 0) {
    plVar1 = plVar2;
  }
  plVar2 = param_1 + 0x36;
  if (param_1[0x37] != 0) {
    plVar2 = plVar1;
  }
  plVar1 = param_1 + 0x3a;
  if (param_1[0x3b] != 0) {
    plVar1 = plVar2;
  }
  plVar2 = param_1 + 0x3e;
  if (param_1[0x3f] != 0) {
    plVar2 = plVar1;
  }
  plVar1 = param_1 + 0x42;
  if (param_1[0x43] != 0) {
    plVar1 = plVar2;
  }
  plVar2 = param_1 + 0x46;
  if (param_1[0x47] != 0) {
    plVar2 = plVar1;
  }
  plVar1 = param_1 + 0x4a;
  if (param_1[0x4b] != 0) {
    plVar1 = plVar2;
  }
  plVar2 = param_1 + 0x4e;
  if (param_1[0x4f] != 0) {
    plVar2 = plVar1;
  }
  plVar1 = param_1 + 0x52;
  if (param_1[0x53] != 0) {
    plVar1 = plVar2;
  }
  plVar2 = param_1 + 0x56;
  if (param_1[0x57] != 0) {
    plVar2 = plVar1;
  }
  plVar1 = param_1 + 0x5a;
  if (param_1[0x5b] != 0) {
    plVar1 = plVar2;
  }
  plVar2 = param_1 + 0x5e;
  if (param_1[0x5f] != 0) {
    plVar2 = plVar1;
  }
  plVar1 = param_1 + 0x62;
  if (param_1[99] != 0) {
    plVar1 = plVar2;
  }
  plVar2 = param_1 + 0x66;
  if (param_1[0x67] != 0) {
    plVar2 = plVar1;
  }
  plVar1 = param_1 + 0x6a;
  if (param_1[0x6b] != 0) {
    plVar1 = plVar2;
  }
  plVar2 = param_1 + 0x6e;
  if (param_1[0x6f] != 0) {
    plVar2 = plVar1;
  }
  plVar1 = param_1 + 0x72;
  if (param_1[0x73] != 0) {
    plVar1 = plVar2;
  }
  plVar2 = param_1 + 0x76;
  if (param_1[0x77] != 0) {
    plVar2 = plVar1;
  }
  plVar1 = param_1 + 0x7a;
  if (param_1[0x7b] != 0) {
    plVar1 = plVar2;
  }
  plVar2 = param_1 + 0x7e;
  if (param_1[0x7f] != 0) {
    plVar2 = plVar1;
  }
  plVar1 = param_1 + 0x82;
  if (param_1[0x83] != 0) {
    plVar1 = plVar2;
  }
  plVar2 = param_1 + 0x86;
  if (param_1[0x87] != 0) {
    plVar2 = plVar1;
  }
  plVar1 = param_1 + 0x8a;
  if (param_1[0x8b] != 0) {
    plVar1 = plVar2;
  }
  plVar2 = param_1 + 0x8e;
  if (param_1[0x8f] != 0) {
    plVar2 = plVar1;
  }
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  uVar3 = (**(code **)(*param_1 + 0x18))();
  FUN__text__00271950(plVar2,param_2,param_3,param_4,uVar3);
  return;
}


