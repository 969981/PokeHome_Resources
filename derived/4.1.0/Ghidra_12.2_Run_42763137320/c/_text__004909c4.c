/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004909c4; name: FUN_.text__004909c4
 */


void FUN__text__004909c4(undefined4 param_1,long param_2,long *param_3,undefined8 *param_4,
                        long param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar4 = *(long *)(param_2 + 0x58);
  *(long *)(param_2 + 0x58) = param_5;
  lVar5 = param_3[2];
  lVar1 = *param_3;
  *(long *)(param_2 + 0x70) = param_3[1];
  *(long *)(param_2 + 0x78) = lVar5;
  lVar5 = *(long *)(param_2 + 0x68);
  *(long *)(param_2 + 0x68) = lVar1;
  uVar2 = *param_4;
  uVar3 = param_4[1];
  uVar6 = param_4[2];
  *(undefined4 *)(param_2 + 0x98) = param_1;
  *(undefined8 *)(param_2 + 0x88) = uVar3;
  *(undefined8 *)(param_2 + 0x90) = uVar6;
  *(undefined8 *)(param_2 + 0x80) = uVar2;
  if (lVar5 != lVar1) {
    *(undefined2 *)(param_2 + 0xc4) = 0x101;
  }
  if (lVar4 == param_5) {
    return;
  }
  *(undefined1 *)(param_2 + 0xc4) = 1;
  return;
}


