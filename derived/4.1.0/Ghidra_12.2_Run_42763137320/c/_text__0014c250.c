/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0014c250; name: FUN_.text__0014c250
 */


void FUN__text__0014c250(undefined8 *param_1)

{
  long lVar1;
  code *pcVar2;
  
  if (*(int *)((long)param_1 + 0x2a4) < 6) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  FUN__text__0014821c(param_1 + 0x128);
  param_1[0x106] = 0x8675a8;
  if (param_1[0x107] == 0) {
    param_1[0x107] = 0;
    pcVar2 = (code *)param_1[0x119];
  }
  else {
    FUN__text__005d9290(param_1[0x107],param_1 + 0x106);
    lVar1 = param_1[0x107];
    param_1[0x107] = 0;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
    pcVar2 = (code *)param_1[0x119];
  }
  if (pcVar2 != (code *)0x0) {
    param_1[0x11b] = 0;
    param_1[0x11a] = 0;
    param_1[0x119] = 0;
    param_1[0x118] = 0;
    (*pcVar2)(param_1 + 0x11c);
  }
  pcVar2 = (code *)param_1[0x109];
  if (pcVar2 != (code *)0x0) {
    param_1[0x10b] = 0;
    param_1[0x10a] = 0;
    param_1[0x109] = 0;
    param_1[0x108] = 0;
    (*pcVar2)(param_1 + 0x10c);
  }
  if (param_1[0x107] != 0) {
    (**(code **)(*(long *)(param_1[0x107] + 0x48) + 0x18))();
    param_1[0x107] = 0;
  }
  if (param_1[0x53] != 0) {
    (**(code **)(*(long *)(param_1[0x53] + 0x48) + 0x18))();
    param_1[0x53] = 0;
  }
  if (param_1[0x51] != 0) {
    (**(code **)(*(long *)(param_1[0x51] + 0x48) + 0x18))();
    param_1[0x51] = 0;
  }
  if (param_1[0x4d] != 0) {
    (**(code **)(*(long *)(param_1[0x4d] + 0x48) + 0x18))();
    param_1[0x4d] = 0;
  }
  if (param_1[0x49] != 0) {
    (**(code **)(*(long *)(param_1[0x49] + 0x48) + 0x18))();
    param_1[0x49] = 0;
  }
  if (param_1[0x48] != 0) {
    (**(code **)(*(long *)(param_1[0x48] + 0x48) + 0x18))();
    param_1[0x48] = 0;
  }
  if (param_1[0x47] != 0) {
    (**(code **)(*(long *)(param_1[0x47] + 0x48) + 0x18))();
    param_1[0x47] = 0;
  }
  if (param_1[0x46] != 0) {
    (**(code **)(*(long *)(param_1[0x46] + 0x48) + 0x18))();
    param_1[0x46] = 0;
  }
  if (param_1[0x45] != 0) {
    (**(code **)(*(long *)(param_1[0x45] + 0x48) + 0x18))();
    param_1[0x45] = 0;
  }
  if (param_1[0x44] != 0) {
    (**(code **)(*(long *)(param_1[0x44] + 0x48) + 0x18))();
    param_1[0x44] = 0;
  }
  if (param_1[0x43] != 0) {
    (**(code **)(*(long *)(param_1[0x43] + 0x48) + 0x18))();
    param_1[0x43] = 0;
  }
  if (param_1[0x42] != 0) {
    (**(code **)(*(long *)(param_1[0x42] + 0x48) + 0x18))();
    param_1[0x42] = 0;
  }
  if (param_1[0x41] != 0) {
    (**(code **)(*(long *)(param_1[0x41] + 0x48) + 0x18))();
    param_1[0x41] = 0;
  }
  if (param_1[0x40] != 0) {
    (**(code **)(*(long *)(param_1[0x40] + 0x48) + 0x18))();
    param_1[0x40] = 0;
  }
  if (param_1[0x3f] != 0) {
    (**(code **)(*(long *)(param_1[0x3f] + 0x48) + 0x18))();
    param_1[0x3f] = 0;
  }
  if (param_1[0x3e] != 0) {
    (**(code **)(*(long *)(param_1[0x3e] + 0x48) + 0x18))();
    param_1[0x3e] = 0;
  }
  if (param_1[0x3b] != 0) {
    (**(code **)(*(long *)(param_1[0x3b] + 0x48) + 0x18))();
    param_1[0x3b] = 0;
  }
  if (param_1[0x3a] != 0) {
    (**(code **)(*(long *)(param_1[0x3a] + 0x48) + 0x18))();
    param_1[0x3a] = 0;
  }
  if (param_1[0x39] != 0) {
    (**(code **)(*(long *)(param_1[0x39] + 0x48) + 0x18))();
    param_1[0x39] = 0;
  }
  if (param_1[0x38] != 0) {
    (**(code **)(*(long *)(param_1[0x38] + 0x48) + 0x18))();
    param_1[0x38] = 0;
  }
  if (param_1[0x37] != 0) {
    (**(code **)(*(long *)(param_1[0x37] + 0x48) + 0x18))();
    param_1[0x37] = 0;
  }
  if (param_1[0x36] != 0) {
    (**(code **)(*(long *)(param_1[0x36] + 0x48) + 0x18))();
    param_1[0x36] = 0;
  }
  if (param_1[0x35] != 0) {
    (**(code **)(*(long *)(param_1[0x35] + 0x48) + 0x18))();
    param_1[0x35] = 0;
  }
  if (param_1[0x34] != 0) {
    (**(code **)(*(long *)(param_1[0x34] + 0x48) + 0x18))();
    param_1[0x34] = 0;
  }
  if (param_1[0x32] != 0) {
    (**(code **)(*(long *)(param_1[0x32] + 0x48) + 0x18))();
    param_1[0x32] = 0;
  }
  if (param_1[0x31] != 0) {
    (**(code **)(*(long *)(param_1[0x31] + 0x48) + 0x18))();
    param_1[0x31] = 0;
  }
  if (param_1[0x29] != 0) {
    (**(code **)(*(long *)(param_1[0x29] + 0x48) + 0x18))();
    param_1[0x29] = 0;
  }
  if (param_1[0x28] != 0) {
    (**(code **)(*(long *)(param_1[0x28] + 0x48) + 0x18))();
    param_1[0x28] = 0;
  }
  if (param_1[0x27] != 0) {
    (**(code **)(*(long *)(param_1[0x27] + 0x48) + 0x18))();
    param_1[0x27] = 0;
  }
  if (param_1[0x26] != 0) {
    (**(code **)(*(long *)(param_1[0x26] + 0x48) + 0x18))();
    param_1[0x26] = 0;
  }
  if (param_1[0x25] != 0) {
    (**(code **)(*(long *)(param_1[0x25] + 0x48) + 0x18))();
    param_1[0x25] = 0;
  }
  if (param_1[0x24] != 0) {
    (**(code **)(*(long *)(param_1[0x24] + 0x48) + 0x18))();
    param_1[0x24] = 0;
  }
  if (param_1[0x23] != 0) {
    (**(code **)(*(long *)(param_1[0x23] + 0x48) + 0x18))();
    param_1[0x23] = 0;
  }
  if (param_1[0x21] != 0) {
    (**(code **)(*(long *)(param_1[0x21] + 0x48) + 0x18))();
    param_1[0x21] = 0;
  }
  if (param_1[0x20] != 0) {
    (**(code **)(*(long *)(param_1[0x20] + 0x48) + 0x18))();
    param_1[0x20] = 0;
  }
  if (param_1[0x1f] != 0) {
    (**(code **)(*(long *)(param_1[0x1f] + 0x48) + 0x18))();
    param_1[0x1f] = 0;
  }
  if (param_1[0x1e] != 0) {
    (**(code **)(*(long *)(param_1[0x1e] + 0x48) + 0x18))();
    param_1[0x1e] = 0;
  }
  FUN__text__00147194(param_1 + 0xd);
  *param_1 = 0x867b90;
  param_1[9] = 0x867bd0;
  param_1[10] = 0x867c10;
  if (param_1[0xb] != 0) {
    (**(code **)(*(long *)(param_1[0xb] + 0x48) + 0x18))();
    param_1[0xb] = 0;
  }
  return;
}


