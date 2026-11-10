/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003030cc; name: FUN_.text__003030cc
 */


void FUN__text__003030cc(long param_1,uint param_2,uint param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  if ((param_3 < 0x1e) && (param_2 < *(uint *)(param_1 + 0x700fdc))) {
    lVar4 = param_1 + (ulong)param_2 * 0x5fa0 + (ulong)param_3 * 0x330;
    uVar1 = *(undefined8 *)(lVar4 + 0x35c);
    *param_4 = *(undefined8 *)(lVar4 + 0x354);
    param_4[1] = uVar1;
    uVar1 = *(undefined8 *)(lVar4 + 0x364);
    uVar2 = *(undefined8 *)(lVar4 + 0x36c);
    uVar3 = *(undefined8 *)(lVar4 + 0x37c);
    param_4[4] = *(undefined8 *)(lVar4 + 0x374);
    param_4[5] = uVar3;
    param_4[2] = uVar1;
    param_4[3] = uVar2;
    return;
  }
  param_4[4] = 0;
  param_4[5] = 0;
  param_4[2] = 0;
  param_4[3] = 0;
  *param_4 = 0;
  param_4[1] = 0;
  return;
}


