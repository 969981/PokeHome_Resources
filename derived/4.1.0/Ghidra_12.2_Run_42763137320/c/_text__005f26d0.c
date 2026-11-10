/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005f26d0; name: FUN_.text__005f26d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005f26d0(long *param_1)

{
  long lVar1;
  ushort *puVar2;
  code *pcVar3;
  
  lVar1 = _DAT_008a5c68 + 0x10;
  param_1[9] = _DAT_008a5c68 + 0x48;
  *param_1 = lVar1;
  if ((char)param_1[0x38] != '\0') {
    if (param_1[0x13] != 0) {
      (**(code **)(*(long *)param_1[1] + 0x18))
                ((long *)param_1[1],param_1[0x13],*(undefined4 *)(param_1[0x12] + 4),8);
      param_1[0x13] = 0;
    }
    puVar2 = (ushort *)param_1[0x12];
    if (puVar2 != (ushort *)0x0) {
      (**(code **)(*(long *)param_1[1] + 0x18))
                ((long *)param_1[1],puVar2,(ulong)*puVar2 * 4 + 0xc,8);
      param_1[0x12] = 0;
    }
  }
  param_1[0x16] = _DAT_0089f710 + 0x10;
  *(undefined1 *)(param_1 + 0x38) = 0;
  if (param_1[0x17] == 0) {
    param_1[0x17] = 0;
    pcVar3 = (code *)param_1[0x29];
  }
  else {
    FUN__text__005d9290();
    lVar1 = param_1[0x17];
    param_1[0x17] = 0;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
    pcVar3 = (code *)param_1[0x29];
  }
  if (pcVar3 != (code *)0x0) {
    param_1[0x2a] = 0;
    param_1[0x2b] = 0;
    param_1[0x28] = 0;
    param_1[0x29] = 0;
    (*pcVar3)(param_1 + 0x2c);
  }
  pcVar3 = (code *)param_1[0x19];
  if (pcVar3 != (code *)0x0) {
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    (*pcVar3)(param_1 + 0x1c);
  }
  if (param_1[0x17] != 0) {
    (**(code **)(*(long *)(param_1[0x17] + 0x48) + 0x18))();
    param_1[0x17] = 0;
  }
  if ((param_1[0xe] != 0) && (param_1[0xb] != 0)) {
    (**(code **)(*(long *)(param_1[0xb] + 0x48) + 0x18))();
  }
  param_1[0xb] = 0;
  param_1[0xc] = -0x340d631b7bddd9bb;
  param_1[0xd] = 0x70f683;
  param_1[0xe] = 0;
  if (param_1[0xf] != 0) {
    (**(code **)(*(long *)(param_1[0xf] + 0x48) + 0x18))();
  }
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}


