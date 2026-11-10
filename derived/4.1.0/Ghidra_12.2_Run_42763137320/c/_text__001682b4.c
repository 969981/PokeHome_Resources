/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001682b4; name: FUN_.text__001682b4
 */


undefined8 FUN__text__001682b4(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  
  if (param_2[3] != 0) {
    param_2 = param_2 + 1;
  }
  plVar1 = (long *)(param_1 + 0x88);
  if (*(long *)(param_1 + 0xa0) != 0) {
    plVar1 = (long *)(param_1 + 0x90);
  }
  lVar2 = *param_2;
  if (*plVar1 == lVar2) {
    return *(undefined8 *)(param_1 + 0xb8);
  }
  plVar1 = (long *)(param_1 + 0x2e8);
  if (*(long *)(param_1 + 0x300) != 0) {
    plVar1 = (long *)(param_1 + 0x2f0);
  }
  if (*plVar1 == lVar2) {
    return *(undefined8 *)(param_1 + 0x318);
  }
  plVar1 = (long *)(param_1 + 0x548);
  if (*(long *)(param_1 + 0x560) != 0) {
    plVar1 = (long *)(param_1 + 0x550);
  }
  if (*plVar1 == lVar2) {
    return *(undefined8 *)(param_1 + 0x578);
  }
  plVar1 = (long *)(param_1 + 0x7a8);
  if (*(long *)(param_1 + 0x7c0) != 0) {
    plVar1 = (long *)(param_1 + 0x7b0);
  }
  if (*plVar1 == lVar2) {
    return *(undefined8 *)(param_1 + 0x7d8);
  }
  plVar1 = (long *)(param_1 + 0xa08);
  if (*(long *)(param_1 + 0xa20) != 0) {
    plVar1 = (long *)(param_1 + 0xa10);
  }
  if (*plVar1 == lVar2) {
    return *(undefined8 *)(param_1 + 0xa38);
  }
  plVar1 = (long *)(param_1 + 0xc68);
  if (*(long *)(param_1 + 0xc80) != 0) {
    plVar1 = (long *)(param_1 + 0xc70);
  }
  if (*plVar1 == lVar2) {
    return *(undefined8 *)(param_1 + 0xc98);
  }
  plVar1 = (long *)(param_1 + 0xec8);
  if (*(long *)(param_1 + 0xee0) != 0) {
    plVar1 = (long *)(param_1 + 0xed0);
  }
  if (*plVar1 == lVar2) {
    return *(undefined8 *)(param_1 + 0xef8);
  }
  plVar1 = (long *)(param_1 + 0x1128);
  if (*(long *)(param_1 + 0x1140) != 0) {
    plVar1 = (long *)(param_1 + 0x1130);
  }
  if (*plVar1 == lVar2) {
    return *(undefined8 *)(param_1 + 0x1158);
  }
  plVar1 = (long *)(param_1 + 5000);
  if (*(long *)(param_1 + 0x13a0) != 0) {
    plVar1 = (long *)(param_1 + 0x1390);
  }
  if (*plVar1 == lVar2) {
    return *(undefined8 *)(param_1 + 0x13b8);
  }
  plVar1 = (long *)(param_1 + 0x15e8);
  if (*(long *)(param_1 + 0x1600) != 0) {
    plVar1 = (long *)(param_1 + 0x15f0);
  }
  if (*plVar1 == lVar2) {
    return *(undefined8 *)(param_1 + 0x1618);
  }
  return 0;
}


