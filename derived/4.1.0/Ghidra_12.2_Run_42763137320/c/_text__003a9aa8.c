/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003a9aa8; name: FUN_.text__003a9aa8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__003a9aa8(long *param_1)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  
  lVar3 = _DAT_008a34f8;
  plVar2 = (long *)param_1[0x85];
  param_1[0x85] = 0;
  *param_1 = lVar3 + 0x10;
  param_1[9] = lVar3 + 0x128;
  param_1[10] = lVar3 + 0x168;
  param_1[0x14] = lVar3 + 400;
  if (plVar2 != (long *)0x0) {
    if (*plVar2 != 0) {
      (**(code **)(*(long *)(*plVar2 + 0x48) + 0x18))();
      *plVar2 = 0;
    }
    (**(code **)(*(long *)param_1[0x86] + 0x18))
              ((long *)param_1[0x86],plVar2,param_1[0x87],param_1[0x88]);
  }
  lVar3 = param_1[0x81];
  param_1[0x81] = 0;
  if (lVar3 != 0) {
    FUN__text__003a6efc(lVar3);
    (**(code **)(*(long *)param_1[0x82] + 0x18))
              ((long *)param_1[0x82],lVar3,param_1[0x83],param_1[0x84]);
  }
  if (param_1[0x7a] != 0) {
    (**(code **)(*(long *)(param_1[0x7a] + 0x48) + 0x18))();
    param_1[0x7a] = 0;
  }
  if (param_1[0x77] != 0) {
    (**(code **)(*(long *)(param_1[0x77] + 0x48) + 0x18))();
    param_1[0x77] = 0;
  }
  pcVar1 = (code *)param_1[0x67];
  if (pcVar1 != (code *)0x0) {
    param_1[0x69] = 0;
    param_1[0x68] = 0;
    param_1[0x67] = 0;
    param_1[0x66] = 0;
    (*pcVar1)(param_1 + 0x6a);
  }
  pcVar1 = (code *)param_1[0x57];
  if (pcVar1 != (code *)0x0) {
    param_1[0x59] = 0;
    param_1[0x58] = 0;
    param_1[0x57] = 0;
    param_1[0x56] = 0;
    (*pcVar1)(param_1 + 0x5a);
  }
  pcVar1 = (code *)param_1[0x47];
  if (pcVar1 != (code *)0x0) {
    param_1[0x49] = 0;
    param_1[0x48] = 0;
    param_1[0x47] = 0;
    param_1[0x46] = 0;
    (*pcVar1)(param_1 + 0x4a);
  }
  pcVar1 = (code *)param_1[0x37];
  if (pcVar1 != (code *)0x0) {
    param_1[0x38] = 0;
    param_1[0x39] = 0;
    param_1[0x36] = 0;
    param_1[0x37] = 0;
    (*pcVar1)(param_1 + 0x3a);
  }
  pcVar1 = (code *)param_1[0x27];
  if (pcVar1 != (code *)0x0) {
    param_1[0x28] = 0;
    param_1[0x29] = 0;
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    (*pcVar1)(param_1 + 0x2a);
  }
  pcVar1 = (code *)param_1[0x17];
  if (pcVar1 != (code *)0x0) {
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    (*pcVar1)(param_1 + 0x1a);
  }
  *param_1 = 0x881758;
  param_1[9] = 0x881848;
  param_1[10] = 0x881888;
  if (param_1[0x13] != 0) {
    (**(code **)(*(long *)(param_1[0x13] + 0x48) + 0x18))();
    param_1[0x13] = 0;
  }
  if (param_1[0xf] != 0) {
    (**(code **)(*(long *)(param_1[0xf] + 0x48) + 0x18))();
    param_1[0xf] = 0;
  }
  if (param_1[0xe] != 0) {
    (**(code **)(*(long *)(param_1[0xe] + 0x48) + 0x18))();
    param_1[0xe] = 0;
  }
  *param_1 = 0x867b90;
  param_1[9] = 0x867bd0;
  param_1[10] = 0x867c10;
  if (param_1[0xb] != 0) {
    (**(code **)(*(long *)(param_1[0xb] + 0x48) + 0x18))();
    param_1[0xb] = 0;
  }
  return;
}


